// File generated by CPPExt (CPP file)
//

#include "StepGeom_RationalBSplineCurve.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_HArray1OfCartesianPoint.h"


using namespace OCNaroWrappers;

OCStepGeom_RationalBSplineCurve::OCStepGeom_RationalBSplineCurve(StepGeom_RationalBSplineCurve* nativeHandle) : OCStepGeom_BSplineCurve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_RationalBSplineCurve::OCStepGeom_RationalBSplineCurve() : OCStepGeom_BSplineCurve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_RationalBSplineCurve();
}

 void OCStepGeom_RationalBSplineCurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_RationalBSplineCurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aDegree, *((Handle_StepGeom_HArray1OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineCurveForm)aCurveForm, (StepData_Logical)aClosedCurve, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_RationalBSplineCurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray1OfReal^ aWeightsData)
{
  ((StepGeom_RationalBSplineCurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aDegree, *((Handle_StepGeom_HArray1OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineCurveForm)aCurveForm, (StepData_Logical)aClosedCurve, (StepData_Logical)aSelfIntersect, *((Handle_TColStd_HArray1OfReal*)aWeightsData->Handle));
}

 void OCStepGeom_RationalBSplineCurve::SetWeightsData(OCNaroWrappers::OCTColStd_HArray1OfReal^ aWeightsData)
{
  ((StepGeom_RationalBSplineCurve*)nativeHandle)->SetWeightsData(*((Handle_TColStd_HArray1OfReal*)aWeightsData->Handle));
}

OCTColStd_HArray1OfReal^ OCStepGeom_RationalBSplineCurve::WeightsData()
{
  Handle(TColStd_HArray1OfReal) tmp = ((StepGeom_RationalBSplineCurve*)nativeHandle)->WeightsData();
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

 Standard_Real OCStepGeom_RationalBSplineCurve::WeightsDataValue(Standard_Integer num)
{
  return ((StepGeom_RationalBSplineCurve*)nativeHandle)->WeightsDataValue(num);
}

 Standard_Integer OCStepGeom_RationalBSplineCurve::NbWeightsData()
{
  return ((StepGeom_RationalBSplineCurve*)nativeHandle)->NbWeightsData();
}

