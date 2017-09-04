// File generated by CPPExt (Transient)
//
#ifndef _StepAP203_HArray1OfSpecifiedItem_OCWrappers_HeaderFile
#define _StepAP203_HArray1OfSpecifiedItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP203_HArray1OfSpecifiedItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP203_Array1OfSpecifiedItem.h"


namespace OCNaroWrappers
{

ref class OCStepAP203_SpecifiedItem;
ref class OCStepAP203_Array1OfSpecifiedItem;



public ref class OCStepAP203_HArray1OfSpecifiedItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP203_HArray1OfSpecifiedItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP203_HArray1OfSpecifiedItem(Handle(StepAP203_HArray1OfSpecifiedItem)* nativeHandle);

// Methods PUBLIC


OCStepAP203_HArray1OfSpecifiedItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP203_HArray1OfSpecifiedItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP203_SpecifiedItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP203_SpecifiedItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_SpecifiedItem^ Value) ;


 /*instead*/  OCStepAP203_SpecifiedItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP203_SpecifiedItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP203_Array1OfSpecifiedItem^ Array1() ;


 /*instead*/  OCStepAP203_Array1OfSpecifiedItem^ ChangeArray1() ;

~OCStepAP203_HArray1OfSpecifiedItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif