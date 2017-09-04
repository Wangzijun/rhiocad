// File generated by CPPExt (Transient)
//
#ifndef _AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_OCWrappers_HeaderFile
#define _AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "AppParCurves_MultiBSpCurve.h"


namespace OCNaroWrappers
{

ref class OCAppParCurves_MultiBSpCurve;
ref class OCAppParCurves_SequenceOfMultiBSpCurve;



public ref class OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(Handle(AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve)* nativeHandle);

// Methods PUBLIC


OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(OCNaroWrappers::OCAppParCurves_MultiBSpCurve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCAppParCurves_MultiBSpCurve^ Value() ;

~OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif