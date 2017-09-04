// File generated by CPPExt (Transient)
//
#ifndef _TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_OCWrappers_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfAsciiStringInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_DataMapNodeOfDataMapOfAsciiStringInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCTColStd_DataMapOfAsciiStringInteger;
ref class OCTColStd_DataMapIteratorOfDataMapOfAsciiStringInteger;



public ref class OCTColStd_DataMapNodeOfDataMapOfAsciiStringInteger : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_DataMapNodeOfDataMapOfAsciiStringInteger(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapNodeOfDataMapOfAsciiStringInteger(Handle(TColStd_DataMapNodeOfDataMapOfAsciiStringInteger)* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapNodeOfDataMapOfAsciiStringInteger(OCNaroWrappers::OCTCollection_AsciiString^ K, Standard_Integer I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_AsciiString^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTColStd_DataMapNodeOfDataMapOfAsciiStringInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif