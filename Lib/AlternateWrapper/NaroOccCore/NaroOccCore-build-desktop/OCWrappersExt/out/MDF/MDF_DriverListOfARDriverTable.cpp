// File generated by CPPExt (CPP file)
//

#include "MDF_DriverListOfARDriverTable.h"
#include "../Converter.h"
#include "MDF_ListIteratorOfDriverListOfARDriverTable.h"
#include "MDF_ARDriver.h"
#include "MDF_ListNodeOfDriverListOfARDriverTable.h"


using namespace OCNaroWrappers;

OCMDF_DriverListOfARDriverTable::OCMDF_DriverListOfARDriverTable(MDF_DriverListOfARDriverTable* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMDF_DriverListOfARDriverTable::OCMDF_DriverListOfARDriverTable() 
{
  nativeHandle = new MDF_DriverListOfARDriverTable();
}

 void OCMDF_DriverListOfARDriverTable::Assign(OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ Other)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Assign(*((MDF_DriverListOfARDriverTable*)Other->Handle));
}

 Standard_Integer OCMDF_DriverListOfARDriverTable::Extent()
{
  return ((MDF_DriverListOfARDriverTable*)nativeHandle)->Extent();
}

 System::Boolean OCMDF_DriverListOfARDriverTable::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((MDF_DriverListOfARDriverTable*)nativeHandle)->IsEmpty());
}

 void OCMDF_DriverListOfARDriverTable::Prepend(OCNaroWrappers::OCMDF_ARDriver^ I)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Prepend(*((Handle_MDF_ARDriver*)I->Handle));
}

 void OCMDF_DriverListOfARDriverTable::Prepend(OCNaroWrappers::OCMDF_ARDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ theIt)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Prepend(*((Handle_MDF_ARDriver*)I->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)theIt->Handle));
}

 void OCMDF_DriverListOfARDriverTable::Prepend(OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ Other)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Prepend(*((MDF_DriverListOfARDriverTable*)Other->Handle));
}

 void OCMDF_DriverListOfARDriverTable::Append(OCNaroWrappers::OCMDF_ARDriver^ I)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Append(*((Handle_MDF_ARDriver*)I->Handle));
}

 void OCMDF_DriverListOfARDriverTable::Append(OCNaroWrappers::OCMDF_ARDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ theIt)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Append(*((Handle_MDF_ARDriver*)I->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)theIt->Handle));
}

 void OCMDF_DriverListOfARDriverTable::Append(OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ Other)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Append(*((MDF_DriverListOfARDriverTable*)Other->Handle));
}

OCMDF_ARDriver^ OCMDF_DriverListOfARDriverTable::First()
{
  Handle(MDF_ARDriver) tmp = ((MDF_DriverListOfARDriverTable*)nativeHandle)->First();
  return gcnew OCMDF_ARDriver(&tmp);
}

OCMDF_ARDriver^ OCMDF_DriverListOfARDriverTable::Last()
{
  Handle(MDF_ARDriver) tmp = ((MDF_DriverListOfARDriverTable*)nativeHandle)->Last();
  return gcnew OCMDF_ARDriver(&tmp);
}

 void OCMDF_DriverListOfARDriverTable::RemoveFirst()
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->RemoveFirst();
}

 void OCMDF_DriverListOfARDriverTable::Remove(OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ It)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->Remove(*((MDF_ListIteratorOfDriverListOfARDriverTable*)It->Handle));
}

 void OCMDF_DriverListOfARDriverTable::InsertBefore(OCNaroWrappers::OCMDF_ARDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ It)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->InsertBefore(*((Handle_MDF_ARDriver*)I->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)It->Handle));
}

 void OCMDF_DriverListOfARDriverTable::InsertBefore(OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ Other, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ It)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->InsertBefore(*((MDF_DriverListOfARDriverTable*)Other->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)It->Handle));
}

 void OCMDF_DriverListOfARDriverTable::InsertAfter(OCNaroWrappers::OCMDF_ARDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ It)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->InsertAfter(*((Handle_MDF_ARDriver*)I->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)It->Handle));
}

 void OCMDF_DriverListOfARDriverTable::InsertAfter(OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ Other, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfARDriverTable^ It)
{
  ((MDF_DriverListOfARDriverTable*)nativeHandle)->InsertAfter(*((MDF_DriverListOfARDriverTable*)Other->Handle), *((MDF_ListIteratorOfDriverListOfARDriverTable*)It->Handle));
}


