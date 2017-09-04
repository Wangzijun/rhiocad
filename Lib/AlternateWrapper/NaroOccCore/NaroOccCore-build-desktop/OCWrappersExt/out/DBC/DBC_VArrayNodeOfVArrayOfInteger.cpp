// File generated by CPPExt (CPP file)
//

#include "DBC_VArrayNodeOfVArrayOfInteger.h"
#include "../Converter.h"
#include "DBC_VArrayOfInteger.h"
#include "DBC_VArrayTNodeOfVArrayOfInteger.h"


using namespace OCNaroWrappers;

OCDBC_VArrayNodeOfVArrayOfInteger::OCDBC_VArrayNodeOfVArrayOfInteger(Handle(DBC_VArrayNodeOfVArrayOfInteger)* nativeHandle) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_DBC_VArrayNodeOfVArrayOfInteger(*nativeHandle);
}

OCDBC_VArrayNodeOfVArrayOfInteger::OCDBC_VArrayNodeOfVArrayOfInteger() : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_DBC_VArrayNodeOfVArrayOfInteger(new DBC_VArrayNodeOfVArrayOfInteger());
}

OCDBC_VArrayNodeOfVArrayOfInteger::OCDBC_VArrayNodeOfVArrayOfInteger(Standard_Integer aValue) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_DBC_VArrayNodeOfVArrayOfInteger(new DBC_VArrayNodeOfVArrayOfInteger(aValue));
}

 void OCDBC_VArrayNodeOfVArrayOfInteger::SetValue(Standard_Integer aValue)
{
  (*((Handle_DBC_VArrayNodeOfVArrayOfInteger*)nativeHandle))->SetValue(aValue);
}

 Standard_Address OCDBC_VArrayNodeOfVArrayOfInteger::Value()
{
  return (*((Handle_DBC_VArrayNodeOfVArrayOfInteger*)nativeHandle))->Value();
}

