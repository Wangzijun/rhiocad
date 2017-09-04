// File generated by CPPExt (CPP file)
//

#include "StepBasic_RatioUnit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_RatioUnit::OCStepBasic_RatioUnit(Handle(StepBasic_RatioUnit)* nativeHandle) : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_RatioUnit(*nativeHandle);
}

OCStepBasic_RatioUnit::OCStepBasic_RatioUnit() : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_RatioUnit(new StepBasic_RatioUnit());
}

