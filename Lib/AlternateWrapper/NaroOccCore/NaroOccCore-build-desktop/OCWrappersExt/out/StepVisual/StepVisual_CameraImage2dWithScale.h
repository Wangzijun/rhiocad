// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_CameraImage2dWithScale_OCWrappers_HeaderFile
#define _StepVisual_CameraImage2dWithScale_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_CameraImage2dWithScale.hxx>
#include "../Converter.h"

#include "StepVisual_CameraImage.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_CameraImage2dWithScale : OCStepVisual_CameraImage {

protected:
  // dummy constructor;
  OCStepVisual_CameraImage2dWithScale(OCDummy^) : OCStepVisual_CameraImage((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_CameraImage2dWithScale(Handle(StepVisual_CameraImage2dWithScale)* nativeHandle);

// Methods PUBLIC


OCStepVisual_CameraImage2dWithScale();

~OCStepVisual_CameraImage2dWithScale()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif