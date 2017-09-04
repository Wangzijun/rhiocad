// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_TheQuadCurvExactHInter_OCWrappers_HeaderFile
#define _IntCurveSurface_TheQuadCurvExactHInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfReal.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HSurfaceTool;
ref class OCAdaptor3d_HCurve;
ref class OCIntCurveSurface_TheHCurveTool;
ref class OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter;



public ref class OCIntCurveSurface_TheQuadCurvExactHInter  {

protected:
  IntCurveSurface_TheQuadCurvExactHInter* nativeHandle;
  OCIntCurveSurface_TheQuadCurvExactHInter(OCDummy^) {};

public:
  property IntCurveSurface_TheQuadCurvExactHInter* Handle
  {
    IntCurveSurface_TheQuadCurvExactHInter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurveSurface_TheQuadCurvExactHInter(IntCurveSurface_TheQuadCurvExactHInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_TheQuadCurvExactHInter(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C);


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer NbRoots() ;


 /*instead*/  Standard_Real Root(Standard_Integer Index) ;


 /*instead*/  Standard_Integer NbIntervals() ;


 /*instead*/  void Intervals(Standard_Integer Index, Standard_Real& U1, Standard_Real& U2) ;

~OCIntCurveSurface_TheQuadCurvExactHInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif