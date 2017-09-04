// File generated by CPPExt (MPV)
//
#ifndef _StepAP203_Array1OfDateTimeItem_OCWrappers_HeaderFile
#define _StepAP203_Array1OfDateTimeItem_OCWrappers_HeaderFile

// include native header
#include <StepAP203_Array1OfDateTimeItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepAP203_DateTimeItem;



public ref class OCStepAP203_Array1OfDateTimeItem  {

protected:
  StepAP203_Array1OfDateTimeItem* nativeHandle;
  OCStepAP203_Array1OfDateTimeItem(OCDummy^) {};

public:
  property StepAP203_Array1OfDateTimeItem* Handle
  {
    StepAP203_Array1OfDateTimeItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepAP203_Array1OfDateTimeItem(StepAP203_Array1OfDateTimeItem* nativeHandle);

// Methods PUBLIC


OCStepAP203_Array1OfDateTimeItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP203_Array1OfDateTimeItem(OCNaroWrappers::OCStepAP203_DateTimeItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP203_DateTimeItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepAP203_Array1OfDateTimeItem^ Assign(OCNaroWrappers::OCStepAP203_Array1OfDateTimeItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_DateTimeItem^ Value) ;


 /*instead*/  OCStepAP203_DateTimeItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP203_DateTimeItem^ ChangeValue(Standard_Integer Index) ;

~OCStepAP203_Array1OfDateTimeItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif