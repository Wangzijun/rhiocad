// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_PresentationSet_OCWrappers_HeaderFile
#define _StepVisual_PresentationSet_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_PresentationSet.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_PresentationSet : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_PresentationSet(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_PresentationSet(Handle(StepVisual_PresentationSet)* nativeHandle);

// Methods PUBLIC

//! Returns a PresentationSet <br>
OCStepVisual_PresentationSet();

~OCStepVisual_PresentationSet()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif