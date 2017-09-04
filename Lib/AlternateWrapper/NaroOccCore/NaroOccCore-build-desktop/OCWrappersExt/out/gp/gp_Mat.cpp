// File generated by CPPExt (CPP file)
//

#include "gp_Mat.h"
#include "../Converter.h"
#include "gp_XYZ.h"
#include "gp_Trsf.h"
#include "gp_GTrsf.h"


using namespace OCNaroWrappers;

OCgp_Mat::OCgp_Mat(gp_Mat* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Mat::OCgp_Mat() 
{
  nativeHandle = new gp_Mat();
}

OCgp_Mat::OCgp_Mat(Standard_Real a11, Standard_Real a12, Standard_Real a13, Standard_Real a21, Standard_Real a22, Standard_Real a23, Standard_Real a31, Standard_Real a32, Standard_Real a33) 
{
  nativeHandle = new gp_Mat(a11, a12, a13, a21, a22, a23, a31, a32, a33);
}

OCgp_Mat::OCgp_Mat(OCNaroWrappers::OCgp_XYZ^ Col1, OCNaroWrappers::OCgp_XYZ^ Col2, OCNaroWrappers::OCgp_XYZ^ Col3) 
{
  nativeHandle = new gp_Mat(*((gp_XYZ*)Col1->Handle), *((gp_XYZ*)Col2->Handle), *((gp_XYZ*)Col3->Handle));
}

 void OCgp_Mat::SetCol(Standard_Integer Col, OCNaroWrappers::OCgp_XYZ^ Value)
{
  ((gp_Mat*)nativeHandle)->SetCol(Col, *((gp_XYZ*)Value->Handle));
}

 void OCgp_Mat::SetCols(OCNaroWrappers::OCgp_XYZ^ Col1, OCNaroWrappers::OCgp_XYZ^ Col2, OCNaroWrappers::OCgp_XYZ^ Col3)
{
  ((gp_Mat*)nativeHandle)->SetCols(*((gp_XYZ*)Col1->Handle), *((gp_XYZ*)Col2->Handle), *((gp_XYZ*)Col3->Handle));
}

 void OCgp_Mat::SetCross(OCNaroWrappers::OCgp_XYZ^ Ref)
{
  ((gp_Mat*)nativeHandle)->SetCross(*((gp_XYZ*)Ref->Handle));
}

 void OCgp_Mat::SetDiagonal(Standard_Real X1, Standard_Real X2, Standard_Real X3)
{
  ((gp_Mat*)nativeHandle)->SetDiagonal(X1, X2, X3);
}

 void OCgp_Mat::SetDot(OCNaroWrappers::OCgp_XYZ^ Ref)
{
  ((gp_Mat*)nativeHandle)->SetDot(*((gp_XYZ*)Ref->Handle));
}

 void OCgp_Mat::SetIdentity()
{
  ((gp_Mat*)nativeHandle)->SetIdentity();
}

 void OCgp_Mat::SetRotation(OCNaroWrappers::OCgp_XYZ^ Axis, Standard_Real Ang)
{
  ((gp_Mat*)nativeHandle)->SetRotation(*((gp_XYZ*)Axis->Handle), Ang);
}

 void OCgp_Mat::SetRow(Standard_Integer Row, OCNaroWrappers::OCgp_XYZ^ Value)
{
  ((gp_Mat*)nativeHandle)->SetRow(Row, *((gp_XYZ*)Value->Handle));
}

 void OCgp_Mat::SetRows(OCNaroWrappers::OCgp_XYZ^ Row1, OCNaroWrappers::OCgp_XYZ^ Row2, OCNaroWrappers::OCgp_XYZ^ Row3)
{
  ((gp_Mat*)nativeHandle)->SetRows(*((gp_XYZ*)Row1->Handle), *((gp_XYZ*)Row2->Handle), *((gp_XYZ*)Row3->Handle));
}

 void OCgp_Mat::SetScale(Standard_Real S)
{
  ((gp_Mat*)nativeHandle)->SetScale(S);
}

 void OCgp_Mat::SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value)
{
  ((gp_Mat*)nativeHandle)->SetValue(Row, Col, Value);
}

OCgp_XYZ^ OCgp_Mat::Column(Standard_Integer Col)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Mat*)nativeHandle)->Column(Col);
  return gcnew OCgp_XYZ(tmp);
}

 Standard_Real OCgp_Mat::Determinant()
{
  return ((gp_Mat*)nativeHandle)->Determinant();
}

OCgp_XYZ^ OCgp_Mat::Diagonal()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Mat*)nativeHandle)->Diagonal();
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCgp_Mat::Row(Standard_Integer Row)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Mat*)nativeHandle)->Row(Row);
  return gcnew OCgp_XYZ(tmp);
}

 Standard_Real OCgp_Mat::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((gp_Mat*)nativeHandle)->Value(Row, Col);
}

 Standard_Real OCgp_Mat::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return ((gp_Mat*)nativeHandle)->ChangeValue(Row, Col);
}

 System::Boolean OCgp_Mat::IsSingular()
{
  return OCConverter::StandardBooleanToBoolean(((gp_Mat*)nativeHandle)->IsSingular());
}

 void OCgp_Mat::Add(OCNaroWrappers::OCgp_Mat^ Other)
{
  ((gp_Mat*)nativeHandle)->Add(*((gp_Mat*)Other->Handle));
}

OCgp_Mat^ OCgp_Mat::Added(OCNaroWrappers::OCgp_Mat^ Other)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Added(*((gp_Mat*)Other->Handle));
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Divide(Standard_Real Scalar)
{
  ((gp_Mat*)nativeHandle)->Divide(Scalar);
}

OCgp_Mat^ OCgp_Mat::Divided(Standard_Real Scalar)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Divided(Scalar);
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Invert()
{
  ((gp_Mat*)nativeHandle)->Invert();
}

OCgp_Mat^ OCgp_Mat::Inverted()
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Inverted();
  return gcnew OCgp_Mat(tmp);
}

OCgp_Mat^ OCgp_Mat::Multiplied(OCNaroWrappers::OCgp_Mat^ Other)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Multiplied(*((gp_Mat*)Other->Handle));
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Multiply(OCNaroWrappers::OCgp_Mat^ Other)
{
  ((gp_Mat*)nativeHandle)->Multiply(*((gp_Mat*)Other->Handle));
}

 void OCgp_Mat::PreMultiply(OCNaroWrappers::OCgp_Mat^ Other)
{
  ((gp_Mat*)nativeHandle)->PreMultiply(*((gp_Mat*)Other->Handle));
}

OCgp_Mat^ OCgp_Mat::Multiplied(Standard_Real Scalar)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Multiplied(Scalar);
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Multiply(Standard_Real Scalar)
{
  ((gp_Mat*)nativeHandle)->Multiply(Scalar);
}

 void OCgp_Mat::Power(Standard_Integer N)
{
  ((gp_Mat*)nativeHandle)->Power(N);
}

OCgp_Mat^ OCgp_Mat::Powered(Standard_Integer N)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Powered(N);
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Subtract(OCNaroWrappers::OCgp_Mat^ Other)
{
  ((gp_Mat*)nativeHandle)->Subtract(*((gp_Mat*)Other->Handle));
}

OCgp_Mat^ OCgp_Mat::Subtracted(OCNaroWrappers::OCgp_Mat^ Other)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Subtracted(*((gp_Mat*)Other->Handle));
  return gcnew OCgp_Mat(tmp);
}

 void OCgp_Mat::Transpose()
{
  ((gp_Mat*)nativeHandle)->Transpose();
}

OCgp_Mat^ OCgp_Mat::Transposed()
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Mat*)nativeHandle)->Transposed();
  return gcnew OCgp_Mat(tmp);
}

