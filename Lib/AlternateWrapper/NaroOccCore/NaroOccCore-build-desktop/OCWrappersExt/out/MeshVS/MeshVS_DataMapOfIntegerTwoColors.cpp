// File generated by CPPExt (CPP file)
//

#include "MeshVS_DataMapOfIntegerTwoColors.h"
#include "../Converter.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors.h"
#include "MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors.h"


using namespace OCNaroWrappers;

OCMeshVS_DataMapOfIntegerTwoColors::OCMeshVS_DataMapOfIntegerTwoColors(MeshVS_DataMapOfIntegerTwoColors* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_DataMapOfIntegerTwoColors::OCMeshVS_DataMapOfIntegerTwoColors(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapOfIntegerTwoColors(NbBuckets);
}

OCMeshVS_DataMapOfIntegerTwoColors^ OCMeshVS_DataMapOfIntegerTwoColors::Assign(OCNaroWrappers::OCMeshVS_DataMapOfIntegerTwoColors^ Other)
{
  MeshVS_DataMapOfIntegerTwoColors* tmp = new MeshVS_DataMapOfIntegerTwoColors(0);
  *tmp = ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->Assign(*((MeshVS_DataMapOfIntegerTwoColors*)Other->Handle));
  return gcnew OCMeshVS_DataMapOfIntegerTwoColors(tmp);
}

 void OCMeshVS_DataMapOfIntegerTwoColors::ReSize(Standard_Integer NbBuckets)
{
  ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCMeshVS_DataMapOfIntegerTwoColors::Bind(Standard_Integer K, MeshVS_TwoColors I)
{
  return OCConverter::StandardBooleanToBoolean(((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->Bind(K, I));
}

 System::Boolean OCMeshVS_DataMapOfIntegerTwoColors::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->IsBound(K));
}

 System::Boolean OCMeshVS_DataMapOfIntegerTwoColors::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->UnBind(K));
}

 MeshVS_TwoColors& OCMeshVS_DataMapOfIntegerTwoColors::Find(Standard_Integer K)
{
  return ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->Find(K);
}

 MeshVS_TwoColors& OCMeshVS_DataMapOfIntegerTwoColors::ChangeFind(Standard_Integer K)
{
  return ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->ChangeFind(K);
}

 Standard_Address OCMeshVS_DataMapOfIntegerTwoColors::Find1(Standard_Integer K)
{
  return ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->Find1(K);
}

 Standard_Address OCMeshVS_DataMapOfIntegerTwoColors::ChangeFind1(Standard_Integer K)
{
  return ((MeshVS_DataMapOfIntegerTwoColors*)nativeHandle)->ChangeFind1(K);
}

