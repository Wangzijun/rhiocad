// File generated by CPPExt (Transient)
//
#ifndef _StepAP203_CcDesignApproval_OCWrappers_HeaderFile
#define _StepAP203_CcDesignApproval_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP203_CcDesignApproval.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_ApprovalAssignment.h"



namespace OCNaroWrappers
{

ref class OCStepAP203_HArray1OfApprovedItem;
ref class OCStepBasic_Approval;


//! Representation of STEP entity CcDesignApproval <br>
public ref class OCStepAP203_CcDesignApproval : OCStepBasic_ApprovalAssignment {

protected:
  // dummy constructor;
  OCStepAP203_CcDesignApproval(OCDummy^) : OCStepBasic_ApprovalAssignment((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP203_CcDesignApproval(Handle(StepAP203_CcDesignApproval)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP203_CcDesignApproval();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Approval^ aApprovalAssignment_AssignedApproval, OCNaroWrappers::OCStepAP203_HArray1OfApprovedItem^ aItems) ;

//! Returns field Items <br>
 /*instead*/  OCStepAP203_HArray1OfApprovedItem^ Items() ;

//! Set field Items <br>
 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP203_HArray1OfApprovedItem^ Items) ;

~OCStepAP203_CcDesignApproval()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif