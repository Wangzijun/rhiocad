// File generated by CPPExt (CPP file)
//

#include "TDataStd_Name.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_Name::OCTDataStd_Name(Handle(TDataStd_Name)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Name(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Name::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Name::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Name^ OCTDataStd_Name::Set(OCNaroWrappers::OCTDF_Label^ label, OCNaroWrappers::OCTCollection_ExtendedString^ string)
{
  Handle(TDataStd_Name) tmp = TDataStd_Name::Set(*((TDF_Label*)label->Handle), *((TCollection_ExtendedString*)string->Handle));
  return gcnew OCTDataStd_Name(&tmp);
}

OCTDataStd_Name::OCTDataStd_Name() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Name(new TDataStd_Name());
}

 void OCTDataStd_Name::Set(OCNaroWrappers::OCTCollection_ExtendedString^ S)
{
  (*((Handle_TDataStd_Name*)nativeHandle))->Set(*((TCollection_ExtendedString*)S->Handle));
}

OCTCollection_ExtendedString^ OCTDataStd_Name::Get()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TDataStd_Name*)nativeHandle))->Get();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCStandard_GUID^ OCTDataStd_Name::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Name*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Name::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TDataStd_Name*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

OCTDF_Attribute^ OCTDataStd_Name::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Name*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Name::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Name*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_Name::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Name*)nativeHandle))->Dump(anOS);
}

