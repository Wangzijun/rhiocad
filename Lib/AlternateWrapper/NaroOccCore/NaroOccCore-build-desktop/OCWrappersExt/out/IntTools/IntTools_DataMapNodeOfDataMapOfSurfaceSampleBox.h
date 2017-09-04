// File generated by CPPExt (Transient)
//
#ifndef _IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_OCWrappers_HeaderFile
#define _IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_OCWrappers_HeaderFile

// include the wrapped class
#include <IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "IntTools_SurfaceRangeSample.h"
#include "../Bnd/Bnd_Box.h"


namespace OCNaroWrappers
{

ref class OCIntTools_SurfaceRangeSample;
ref class OCBnd_Box;
ref class OCIntTools_SurfaceRangeSampleMapHasher;
ref class OCIntTools_DataMapOfSurfaceSampleBox;
ref class OCIntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;



public ref class OCIntTools_DataMapNodeOfDataMapOfSurfaceSampleBox : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCIntTools_DataMapNodeOfDataMapOfSurfaceSampleBox(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_DataMapNodeOfDataMapOfSurfaceSampleBox(Handle(IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox)* nativeHandle);

// Methods PUBLIC


OCIntTools_DataMapNodeOfDataMapOfSurfaceSampleBox(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ K, OCNaroWrappers::OCBnd_Box^ I, TCollection_MapNodePtr n);


 /*instead*/  OCIntTools_SurfaceRangeSample^ Key() ;


 /*instead*/  OCBnd_Box^ Value() ;

~OCIntTools_DataMapNodeOfDataMapOfSurfaceSampleBox()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif