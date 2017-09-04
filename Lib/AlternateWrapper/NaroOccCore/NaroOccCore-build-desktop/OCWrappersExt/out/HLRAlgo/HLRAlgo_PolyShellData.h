// File generated by CPPExt (Transient)
//
#ifndef _HLRAlgo_PolyShellData_OCWrappers_HeaderFile
#define _HLRAlgo_PolyShellData_OCWrappers_HeaderFile

// include the wrapped class
#include <HLRAlgo_PolyShellData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_Array1OfTransient.h"
#include "HLRAlgo_ListOfBPoint.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfTransient;
ref class OCTColStd_Array1OfTransient;
ref class OCHLRAlgo_ListOfBPoint;



public ref class OCHLRAlgo_PolyShellData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCHLRAlgo_PolyShellData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCHLRAlgo_PolyShellData(Handle(HLRAlgo_PolyShellData)* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_PolyShellData(Standard_Integer nbFace);


 /*instead*/  void UpdateGlobalMinMax(Standard_Address TotMinMax) ;


 /*instead*/  void UpdateHiding(Standard_Integer nbHiding) ;


 /*instead*/  System::Boolean Hiding() ;


 /*instead*/  OCTColStd_Array1OfTransient^ PolyData() ;


 /*instead*/  OCTColStd_Array1OfTransient^ HidingPolyData() ;


 /*instead*/  OCHLRAlgo_ListOfBPoint^ Edges() ;


 /*instead*/  Standard_Address Indices() ;

~OCHLRAlgo_PolyShellData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif