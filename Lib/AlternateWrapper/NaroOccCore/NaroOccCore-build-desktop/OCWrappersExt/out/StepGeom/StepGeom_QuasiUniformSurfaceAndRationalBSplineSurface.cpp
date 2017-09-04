// File generated by CPPExt (CPP file)
//

#include "StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_HArray2OfCartesianPoint.h"
#include "StepGeom_QuasiUniformSurface.h"
#include "StepGeom_RationalBSplineSurface.h"
#include "../TColStd/TColStd_HArray2OfReal.h"


using namespace OCNaroWrappers;

OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface(StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface* nativeHandle) : OCStepGeom_BSplineSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface() : OCStepGeom_BSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface();
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCStepGeom_QuasiUniformSurface^ aQuasiUniformSurface, OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect, *((StepGeom_QuasiUniformSurface*)aQuasiUniformSurface->Handle), *((StepGeom_RationalBSplineSurface*)aRationalBSplineSurface->Handle));
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect, *((Handle_TColStd_HArray2OfReal*)aWeightsData->Handle));
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetQuasiUniformSurface(OCNaroWrappers::OCStepGeom_QuasiUniformSurface^ aQuasiUniformSurface)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->SetQuasiUniformSurface(*((StepGeom_QuasiUniformSurface*)aQuasiUniformSurface->Handle));
}

OCStepGeom_QuasiUniformSurface^ OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::QuasiUniformSurface()
{
  StepGeom_QuasiUniformSurface* tmp = new StepGeom_QuasiUniformSurface();
  *tmp = ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->QuasiUniformSurface();
  return gcnew OCStepGeom_QuasiUniformSurface(tmp);
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetRationalBSplineSurface(OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->SetRationalBSplineSurface(*((StepGeom_RationalBSplineSurface*)aRationalBSplineSurface->Handle));
}

OCStepGeom_RationalBSplineSurface^ OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::RationalBSplineSurface()
{
  StepGeom_RationalBSplineSurface* tmp = new StepGeom_RationalBSplineSurface();
  *tmp = ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->RationalBSplineSurface();
  return gcnew OCStepGeom_RationalBSplineSurface(tmp);
}

 void OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetWeightsData(OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData)
{
  ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->SetWeightsData(*((Handle_TColStd_HArray2OfReal*)aWeightsData->Handle));
}

OCTColStd_HArray2OfReal^ OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::WeightsData()
{
  Handle(TColStd_HArray2OfReal) tmp = ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->WeightsData();
  return gcnew OCTColStd_HArray2OfReal(&tmp);
}

 Standard_Real OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::WeightsDataValue(Standard_Integer num1, Standard_Integer num2)
{
  return ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->WeightsDataValue(num1, num2);
}

 Standard_Integer OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::NbWeightsDataI()
{
  return ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->NbWeightsDataI();
}

 Standard_Integer OCStepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::NbWeightsDataJ()
{
  return ((StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface*)nativeHandle)->NbWeightsDataJ();
}

