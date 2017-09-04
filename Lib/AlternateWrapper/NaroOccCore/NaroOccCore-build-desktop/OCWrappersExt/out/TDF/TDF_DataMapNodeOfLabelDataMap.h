// File generated by CPPExt (Transient)
//
#ifndef _TDF_DataMapNodeOfLabelDataMap_OCWrappers_HeaderFile
#define _TDF_DataMapNodeOfLabelDataMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_DataMapNodeOfLabelDataMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_LabelDataMap;
ref class OCTDF_DataMapIteratorOfLabelDataMap;



public ref class OCTDF_DataMapNodeOfLabelDataMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_DataMapNodeOfLabelDataMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_DataMapNodeOfLabelDataMap(Handle(TDF_DataMapNodeOfLabelDataMap)* nativeHandle);

// Methods PUBLIC


OCTDF_DataMapNodeOfLabelDataMap(OCNaroWrappers::OCTDF_Label^ K, OCNaroWrappers::OCTDF_Label^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTDF_Label^ Key() ;


 /*instead*/  OCTDF_Label^ Value() ;

~OCTDF_DataMapNodeOfLabelDataMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif