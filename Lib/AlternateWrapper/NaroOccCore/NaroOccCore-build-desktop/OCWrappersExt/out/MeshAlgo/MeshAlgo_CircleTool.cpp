// File generated by CPPExt (CPP file)
//

#include "MeshAlgo_CircleTool.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "../gp/gp_Circ2d.h"
#include "../TColStd/TColStd_ListOfInteger.h"


using namespace OCNaroWrappers;

OCMeshAlgo_CircleTool::OCMeshAlgo_CircleTool(MeshAlgo_CircleTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshAlgo_CircleTool::OCMeshAlgo_CircleTool(MeshDS_BaseAllocator theAlloc) 
{
  nativeHandle = new MeshAlgo_CircleTool(theAlloc);
}

OCMeshAlgo_CircleTool::OCMeshAlgo_CircleTool(Standard_Integer numberOfComponents, MeshDS_BaseAllocator theAlloc) 
{
  nativeHandle = new MeshAlgo_CircleTool(numberOfComponents, theAlloc);
}

 void OCMeshAlgo_CircleTool::Initialize(Standard_Integer numberOfComponents)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->Initialize(numberOfComponents);
}

 void OCMeshAlgo_CircleTool::SetCellSize(Standard_Real theSize)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->SetCellSize(theSize);
}

 void OCMeshAlgo_CircleTool::SetCellSize(Standard_Real theXSize, Standard_Real theYSize)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->SetCellSize(theXSize, theYSize);
}

 void OCMeshAlgo_CircleTool::SetMinMaxSize(OCNaroWrappers::OCgp_XY^ theMin, OCNaroWrappers::OCgp_XY^ theMax)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->SetMinMaxSize(*((gp_XY*)theMin->Handle), *((gp_XY*)theMax->Handle));
}

 void OCMeshAlgo_CircleTool::Add(OCNaroWrappers::OCgp_Circ2d^ theCirc, Standard_Integer theIndex)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->Add(*((gp_Circ2d*)theCirc->Handle), theIndex);
}

 System::Boolean OCMeshAlgo_CircleTool::Add(OCNaroWrappers::OCgp_XY^ p1, OCNaroWrappers::OCgp_XY^ p2, OCNaroWrappers::OCgp_XY^ p3, Standard_Integer theIndex)
{
  return OCConverter::StandardBooleanToBoolean(((MeshAlgo_CircleTool*)nativeHandle)->Add(*((gp_XY*)p1->Handle), *((gp_XY*)p2->Handle), *((gp_XY*)p3->Handle), theIndex));
}

 void OCMeshAlgo_CircleTool::MocAdd(Standard_Integer theIndex)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->MocAdd(theIndex);
}

 void OCMeshAlgo_CircleTool::Delete(Standard_Integer theIndex)
{
  ((MeshAlgo_CircleTool*)nativeHandle)->Delete(theIndex);
}

OCTColStd_ListOfInteger^ OCMeshAlgo_CircleTool::Select(OCNaroWrappers::OCgp_XY^ thePnt)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((MeshAlgo_CircleTool*)nativeHandle)->Select(*((gp_XY*)thePnt->Handle));
  return gcnew OCTColStd_ListOfInteger(tmp);
}

 Standard_Integer OCMeshAlgo_CircleTool::GetNbPoints()
{
  return MeshAlgo_CircleTool::GetNbPoints();
}

