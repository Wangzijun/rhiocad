// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array1OfVec_OCWrappers_HeaderFile
#define _TColgp_Array1OfVec_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array1OfVec.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Vec;



public ref class OCTColgp_Array1OfVec  {

protected:
  TColgp_Array1OfVec* nativeHandle;
  OCTColgp_Array1OfVec(OCDummy^) {};

public:
  property TColgp_Array1OfVec* Handle
  {
    TColgp_Array1OfVec* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array1OfVec(TColgp_Array1OfVec* nativeHandle);

// Methods PUBLIC


OCTColgp_Array1OfVec(Standard_Integer Low, Standard_Integer Up);


OCTColgp_Array1OfVec(OCNaroWrappers::OCgp_Vec^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Vec^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTColgp_Array1OfVec^ Assign(OCNaroWrappers::OCTColgp_Array1OfVec^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Vec^ Value) ;


 /*instead*/  OCgp_Vec^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Vec^ ChangeValue(Standard_Integer Index) ;

~OCTColgp_Array1OfVec()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif