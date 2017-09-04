// File generated by CPPExt (Transient)
//
#ifndef _TColStd_SequenceNodeOfSequenceOfHExtendedString_OCWrappers_HeaderFile
#define _TColStd_SequenceNodeOfSequenceOfHExtendedString_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_SequenceNodeOfSequenceOfHExtendedString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HExtendedString;
ref class OCTColStd_SequenceOfHExtendedString;



public ref class OCTColStd_SequenceNodeOfSequenceOfHExtendedString : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColStd_SequenceNodeOfSequenceOfHExtendedString(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_SequenceNodeOfSequenceOfHExtendedString(Handle(TColStd_SequenceNodeOfSequenceOfHExtendedString)* nativeHandle);

// Methods PUBLIC


OCTColStd_SequenceNodeOfSequenceOfHExtendedString(OCNaroWrappers::OCTCollection_HExtendedString^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTCollection_HExtendedString^ Value() ;

~OCTColStd_SequenceNodeOfSequenceOfHExtendedString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif