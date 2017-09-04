// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_AutoDesignActualDateAndTimeAssignment_OCWrappers_HeaderFile
#define _StepAP214_AutoDesignActualDateAndTimeAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_DateAndTimeAssignment.h"



namespace OCNaroWrappers
{

ref class OCStepAP214_HArray1OfAutoDesignDateAndTimeItem;
ref class OCStepBasic_DateAndTime;
ref class OCStepBasic_DateTimeRole;
ref class OCStepAP214_AutoDesignDateAndTimeItem;



public ref class OCStepAP214_AutoDesignActualDateAndTimeAssignment : OCStepBasic_DateAndTimeAssignment {

protected:
  // dummy constructor;
  OCStepAP214_AutoDesignActualDateAndTimeAssignment(OCDummy^) : OCStepBasic_DateAndTimeAssignment((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_AutoDesignActualDateAndTimeAssignment(Handle(StepAP214_AutoDesignActualDateAndTimeAssignment)* nativeHandle);

// Methods PUBLIC

//! Returns a AutoDesignActualDateAndTimeAssignment <br>
OCStepAP214_AutoDesignActualDateAndTimeAssignment();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DateAndTime^ aAssignedDateAndTime, OCNaroWrappers::OCStepBasic_DateTimeRole^ aRole) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DateAndTime^ aAssignedDateAndTime, OCNaroWrappers::OCStepBasic_DateTimeRole^ aRole, OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignDateAndTimeItem^ aItems) ;


 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignDateAndTimeItem^ aItems) ;


 /*instead*/  OCStepAP214_HArray1OfAutoDesignDateAndTimeItem^ Items() ;


 /*instead*/  OCStepAP214_AutoDesignDateAndTimeItem^ ItemsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbItems() ;

~OCStepAP214_AutoDesignActualDateAndTimeAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif