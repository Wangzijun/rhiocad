// File generated by CPPExt (MPV)
//
#ifndef _Bnd_Array1OfSphere_OCWrappers_HeaderFile
#define _Bnd_Array1OfSphere_OCWrappers_HeaderFile

// include native header
#include <Bnd_Array1OfSphere.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBnd_Sphere;



public ref class OCBnd_Array1OfSphere  {

protected:
  Bnd_Array1OfSphere* nativeHandle;
  OCBnd_Array1OfSphere(OCDummy^) {};

public:
  property Bnd_Array1OfSphere* Handle
  {
    Bnd_Array1OfSphere* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBnd_Array1OfSphere(Bnd_Array1OfSphere* nativeHandle);

// Methods PUBLIC


OCBnd_Array1OfSphere(Standard_Integer Low, Standard_Integer Up);


OCBnd_Array1OfSphere(OCNaroWrappers::OCBnd_Sphere^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCBnd_Sphere^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCBnd_Array1OfSphere^ Assign(OCNaroWrappers::OCBnd_Array1OfSphere^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Sphere^ Value) ;


 /*instead*/  OCBnd_Sphere^ Value(Standard_Integer Index) ;


 /*instead*/  OCBnd_Sphere^ ChangeValue(Standard_Integer Index) ;

~OCBnd_Array1OfSphere()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif