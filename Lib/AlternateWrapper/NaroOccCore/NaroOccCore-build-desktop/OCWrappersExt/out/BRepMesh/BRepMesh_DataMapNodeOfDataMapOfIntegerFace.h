// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_DataMapNodeOfDataMapOfIntegerFace_OCWrappers_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfIntegerFace_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_DataMapNodeOfDataMapOfIntegerFace.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Face.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTColStd_MapIntegerHasher;
ref class OCBRepMesh_DataMapOfIntegerFace;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfIntegerFace;



public ref class OCBRepMesh_DataMapNodeOfDataMapOfIntegerFace : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapNodeOfDataMapOfIntegerFace(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapNodeOfDataMapOfIntegerFace(Handle(BRepMesh_DataMapNodeOfDataMapOfIntegerFace)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapNodeOfDataMapOfIntegerFace(Standard_Integer K, OCNaroWrappers::OCTopoDS_Face^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCTopoDS_Face^ Value() ;

~OCBRepMesh_DataMapNodeOfDataMapOfIntegerFace()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif