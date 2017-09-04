// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_MakeSolid.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_CompSolid.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Solid.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(BRepBuilderAPI_MakeSolid* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid() : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid();
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_CompSolid^ S) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_CompSolid*)S->Handle));
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_Shell*)S->Handle));
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S1, OCNaroWrappers::OCTopoDS_Shell^ S2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_Shell*)S1->Handle), *((TopoDS_Shell*)S2->Handle));
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S1, OCNaroWrappers::OCTopoDS_Shell^ S2, OCNaroWrappers::OCTopoDS_Shell^ S3) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_Shell*)S1->Handle), *((TopoDS_Shell*)S2->Handle), *((TopoDS_Shell*)S3->Handle));
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Solid^ So) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_Solid*)So->Handle));
}

OCBRepBuilderAPI_MakeSolid::OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Solid^ So, OCNaroWrappers::OCTopoDS_Shell^ S) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeSolid(*((TopoDS_Solid*)So->Handle), *((TopoDS_Shell*)S->Handle));
}

 void OCBRepBuilderAPI_MakeSolid::Add(OCNaroWrappers::OCTopoDS_Shell^ S)
{
  ((BRepBuilderAPI_MakeSolid*)nativeHandle)->Add(*((TopoDS_Shell*)S->Handle));
}

 System::Boolean OCBRepBuilderAPI_MakeSolid::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepBuilderAPI_MakeSolid*)nativeHandle)->IsDone());
}

OCTopoDS_Solid^ OCBRepBuilderAPI_MakeSolid::Solid()
{
  TopoDS_Solid* tmp = new TopoDS_Solid();
  *tmp = ((BRepBuilderAPI_MakeSolid*)nativeHandle)->Solid();
  return gcnew OCTopoDS_Solid(tmp);
}

 System::Boolean OCBRepBuilderAPI_MakeSolid::IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(((BRepBuilderAPI_MakeSolid*)nativeHandle)->IsDeleted(*((TopoDS_Shape*)S->Handle)));
}

