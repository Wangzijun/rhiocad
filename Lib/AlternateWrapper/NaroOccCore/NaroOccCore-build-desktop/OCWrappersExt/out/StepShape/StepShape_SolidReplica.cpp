// File generated by CPPExt (CPP file)
//

#include "StepShape_SolidReplica.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepShape_SolidModel.h"
#include "../StepGeom/StepGeom_CartesianTransformationOperator3d.h"


using namespace OCNaroWrappers;

OCStepShape_SolidReplica::OCStepShape_SolidReplica(StepShape_SolidReplica* nativeHandle) : OCStepShape_SolidModel((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_SolidReplica::OCStepShape_SolidReplica() : OCStepShape_SolidModel((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_SolidReplica();
}

 void OCStepShape_SolidReplica::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepShape_SolidReplica*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepShape_SolidReplica::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_SolidModel^ aParentSolid, OCNaroWrappers::OCStepGeom_CartesianTransformationOperator3d^ aTransformation)
{
  ((StepShape_SolidReplica*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepShape_SolidModel*)aParentSolid->Handle), *((StepGeom_CartesianTransformationOperator3d*)aTransformation->Handle));
}

 void OCStepShape_SolidReplica::SetParentSolid(OCNaroWrappers::OCStepShape_SolidModel^ aParentSolid)
{
  ((StepShape_SolidReplica*)nativeHandle)->SetParentSolid(*((StepShape_SolidModel*)aParentSolid->Handle));
}

OCStepShape_SolidModel^ OCStepShape_SolidReplica::ParentSolid()
{
  StepShape_SolidModel* tmp = new StepShape_SolidModel();
  *tmp = ((StepShape_SolidReplica*)nativeHandle)->ParentSolid();
  return gcnew OCStepShape_SolidModel(tmp);
}

 void OCStepShape_SolidReplica::SetTransformation(OCNaroWrappers::OCStepGeom_CartesianTransformationOperator3d^ aTransformation)
{
  ((StepShape_SolidReplica*)nativeHandle)->SetTransformation(*((StepGeom_CartesianTransformationOperator3d*)aTransformation->Handle));
}

OCStepGeom_CartesianTransformationOperator3d^ OCStepShape_SolidReplica::Transformation()
{
  StepGeom_CartesianTransformationOperator3d* tmp = new StepGeom_CartesianTransformationOperator3d();
  *tmp = ((StepShape_SolidReplica*)nativeHandle)->Transformation();
  return gcnew OCStepGeom_CartesianTransformationOperator3d(tmp);
}

