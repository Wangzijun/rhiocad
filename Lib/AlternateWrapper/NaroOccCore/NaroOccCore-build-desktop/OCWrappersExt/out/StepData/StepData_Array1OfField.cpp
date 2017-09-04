// File generated by CPPExt (CPP file)
//

#include "StepData_Array1OfField.h"
#include "../Converter.h"
#include "StepData_Field.h"


using namespace OCNaroWrappers;

OCStepData_Array1OfField::OCStepData_Array1OfField(StepData_Array1OfField* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepData_Array1OfField::OCStepData_Array1OfField(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepData_Array1OfField(Low, Up);
}

OCStepData_Array1OfField::OCStepData_Array1OfField(OCNaroWrappers::OCStepData_Field^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepData_Array1OfField(*((StepData_Field*)Item->Handle), Low, Up);
}

 void OCStepData_Array1OfField::Init(OCNaroWrappers::OCStepData_Field^ V)
{
  ((StepData_Array1OfField*)nativeHandle)->Init(*((StepData_Field*)V->Handle));
}

 System::Boolean OCStepData_Array1OfField::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepData_Array1OfField*)nativeHandle)->IsAllocated());
}

OCStepData_Array1OfField^ OCStepData_Array1OfField::Assign(OCNaroWrappers::OCStepData_Array1OfField^ Other)
{
  StepData_Array1OfField* tmp = new StepData_Array1OfField(0, 0);
  *tmp = ((StepData_Array1OfField*)nativeHandle)->Assign(*((StepData_Array1OfField*)Other->Handle));
  return gcnew OCStepData_Array1OfField(tmp);
}

 Standard_Integer OCStepData_Array1OfField::Length()
{
  return ((StepData_Array1OfField*)nativeHandle)->Length();
}

 Standard_Integer OCStepData_Array1OfField::Lower()
{
  return ((StepData_Array1OfField*)nativeHandle)->Lower();
}

 Standard_Integer OCStepData_Array1OfField::Upper()
{
  return ((StepData_Array1OfField*)nativeHandle)->Upper();
}

 void OCStepData_Array1OfField::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepData_Field^ Value)
{
  ((StepData_Array1OfField*)nativeHandle)->SetValue(Index, *((StepData_Field*)Value->Handle));
}

OCStepData_Field^ OCStepData_Array1OfField::Value(Standard_Integer Index)
{
  StepData_Field* tmp = new StepData_Field();
  *tmp = ((StepData_Array1OfField*)nativeHandle)->Value(Index);
  return gcnew OCStepData_Field(tmp);
}

OCStepData_Field^ OCStepData_Array1OfField::ChangeValue(Standard_Integer Index)
{
  StepData_Field* tmp = new StepData_Field();
  *tmp = ((StepData_Array1OfField*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepData_Field(tmp);
}

