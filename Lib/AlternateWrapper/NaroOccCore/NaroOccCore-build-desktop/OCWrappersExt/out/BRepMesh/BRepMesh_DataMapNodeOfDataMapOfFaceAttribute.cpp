// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfFaceAttribute.h"
#include "../Converter.h"
#include "BRepMesh_FaceAttribute.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapOfFaceAttribute.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute::OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute(Handle(BRepMesh_DataMapNodeOfDataMapOfFaceAttribute)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfFaceAttribute(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute::OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute(OCNaroWrappers::OCTopoDS_Face^ K, OCNaroWrappers::OCBRepMesh_FaceAttribute^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfFaceAttribute(new BRepMesh_DataMapNodeOfDataMapOfFaceAttribute(*((TopoDS_Face*)K->Handle), *((Handle_BRepMesh_FaceAttribute*)I->Handle), n));
}

OCTopoDS_Face^ OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute::Key()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfFaceAttribute*)nativeHandle))->Key();
  return gcnew OCTopoDS_Face(tmp);
}

OCBRepMesh_FaceAttribute^ OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute::Value()
{
  Handle(BRepMesh_FaceAttribute) tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfFaceAttribute*)nativeHandle))->Value();
  return gcnew OCBRepMesh_FaceAttribute(&tmp);
}


