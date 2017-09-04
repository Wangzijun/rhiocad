// File generated by CPPExt (Transient)
//
#ifndef _Select3D_ListNodeOfListOfSensitive_OCWrappers_HeaderFile
#define _Select3D_ListNodeOfListOfSensitive_OCWrappers_HeaderFile

// include the wrapped class
#include <Select3D_ListNodeOfListOfSensitive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCSelect3D_SensitiveEntity;
ref class OCSelect3D_ListOfSensitive;
ref class OCSelect3D_ListIteratorOfListOfSensitive;



public ref class OCSelect3D_ListNodeOfListOfSensitive : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCSelect3D_ListNodeOfListOfSensitive(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect3D_ListNodeOfListOfSensitive(Handle(Select3D_ListNodeOfListOfSensitive)* nativeHandle);

// Methods PUBLIC


OCSelect3D_ListNodeOfListOfSensitive(OCNaroWrappers::OCSelect3D_SensitiveEntity^ I, TCollection_MapNodePtr n);


 /*instead*/  OCSelect3D_SensitiveEntity^ Value() ;

~OCSelect3D_ListNodeOfListOfSensitive()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif