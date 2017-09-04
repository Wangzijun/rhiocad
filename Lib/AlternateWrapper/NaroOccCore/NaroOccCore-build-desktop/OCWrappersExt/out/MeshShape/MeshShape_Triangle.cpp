// File generated by CPPExt (CPP file)
//

#include "MeshShape_Triangle.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCMeshShape_Triangle::OCMeshShape_Triangle(MeshShape_Triangle* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_Triangle::OCMeshShape_Triangle(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCMeshDS_DegreeOfFreedom canMove, Standard_Integer domain) 
{}

 void OCMeshShape_Triangle::Edges(Standard_Integer& e1, Standard_Integer& e2, Standard_Integer& e3, System::Boolean& o1, System::Boolean& o2, System::Boolean& o3)
{
  ((MeshShape_Triangle*)nativeHandle)->Edges(e1, e2, e3, (Standard_Boolean&)(o1), (Standard_Boolean&)(o2), (Standard_Boolean&)(o3));
}

 OCMeshDS_DegreeOfFreedom OCMeshShape_Triangle::Movability()
{
  return (OCMeshDS_DegreeOfFreedom)(((MeshShape_Triangle*)nativeHandle)->Movability());
}

 void OCMeshShape_Triangle::SetMovability(OCMeshDS_DegreeOfFreedom Move)
{
  ((MeshShape_Triangle*)nativeHandle)->SetMovability((MeshDS_DegreeOfFreedom)Move);
}

 Standard_Integer OCMeshShape_Triangle::Domain()
{
  return ((MeshShape_Triangle*)nativeHandle)->Domain();
}

 Standard_Integer OCMeshShape_Triangle::HashCode(Standard_Integer Upper)
{
  return ((MeshShape_Triangle*)nativeHandle)->HashCode(Upper);
}

 System::Boolean OCMeshShape_Triangle::IsEqual(OCNaroWrappers::OCMeshShape_Triangle^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((MeshShape_Triangle*)nativeHandle)->IsEqual(*((MeshShape_Triangle*)Other->Handle)));
}

