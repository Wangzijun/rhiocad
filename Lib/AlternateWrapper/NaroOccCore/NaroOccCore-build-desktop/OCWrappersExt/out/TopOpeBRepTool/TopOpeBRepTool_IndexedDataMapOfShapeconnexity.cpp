// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_IndexedDataMapOfShapeconnexity.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepTool_connexity.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity(TopOpeBRepTool_IndexedDataMapOfShapeconnexity* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepTool_IndexedDataMapOfShapeconnexity(NbBuckets);
}

OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::Assign(OCNaroWrappers::OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity^ Other)
{
  TopOpeBRepTool_IndexedDataMapOfShapeconnexity* tmp = new TopOpeBRepTool_IndexedDataMapOfShapeconnexity(0);
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->Assign(*((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)Other->Handle));
  return gcnew OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity(tmp);
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::Add(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepTool_connexity^ I)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->Add(*((TopoDS_Shape*)K->Handle), *((TopOpeBRepTool_connexity*)I->Handle));
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepTool_connexity^ T)
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->Substitute(I, *((TopoDS_Shape*)K->Handle), *((TopOpeBRepTool_connexity*)T->Handle));
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::RemoveLast()
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::Contains(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->Contains(*((TopoDS_Shape*)K->Handle)));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::FindKey(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepTool_connexity^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::FindFromIndex(Standard_Integer I)
{
  TopOpeBRepTool_connexity* tmp = new TopOpeBRepTool_connexity();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->FindFromIndex(I);
  return gcnew OCTopOpeBRepTool_connexity(tmp);
}

OCTopOpeBRepTool_connexity^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::ChangeFromIndex(Standard_Integer I)
{
  TopOpeBRepTool_connexity* tmp = new TopOpeBRepTool_connexity();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCTopOpeBRepTool_connexity(tmp);
}

 Standard_Integer OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->FindIndex(*((TopoDS_Shape*)K->Handle));
}

OCTopOpeBRepTool_connexity^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopOpeBRepTool_connexity* tmp = new TopOpeBRepTool_connexity();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->FindFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopOpeBRepTool_connexity(tmp);
}

OCTopOpeBRepTool_connexity^ OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopOpeBRepTool_connexity* tmp = new TopOpeBRepTool_connexity();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->ChangeFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopOpeBRepTool_connexity(tmp);
}

 Standard_Address OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->FindFromKey1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity::ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeconnexity*)nativeHandle)->ChangeFromKey1(*((TopoDS_Shape*)K->Handle));
}

