// File generated by CPPExt (CPP file)
//

#include "StepVisual_ContextDependentOverRidingStyledItem.h"
#include "../Converter.h"
#include "StepVisual_HArray1OfStyleContextSelect.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepVisual_HArray1OfPresentationStyleAssignment.h"
#include "../StepRepr/StepRepr_RepresentationItem.h"
#include "StepVisual_StyledItem.h"
#include "StepVisual_StyleContextSelect.h"


using namespace OCNaroWrappers;

OCStepVisual_ContextDependentOverRidingStyledItem::OCStepVisual_ContextDependentOverRidingStyledItem(Handle(StepVisual_ContextDependentOverRidingStyledItem)* nativeHandle) : OCStepVisual_OverRidingStyledItem((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_ContextDependentOverRidingStyledItem(*nativeHandle);
}

OCStepVisual_ContextDependentOverRidingStyledItem::OCStepVisual_ContextDependentOverRidingStyledItem() : OCStepVisual_OverRidingStyledItem((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_ContextDependentOverRidingStyledItem(new StepVisual_ContextDependentOverRidingStyledItem());
}

 void OCStepVisual_ContextDependentOverRidingStyledItem::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepVisual_HArray1OfPresentationStyleAssignment^ aStyles, OCNaroWrappers::OCStepRepr_RepresentationItem^ aItem, OCNaroWrappers::OCStepVisual_StyledItem^ aOverRiddenStyle)
{
  (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_StepVisual_HArray1OfPresentationStyleAssignment*)aStyles->Handle), *((Handle_StepRepr_RepresentationItem*)aItem->Handle), *((Handle_StepVisual_StyledItem*)aOverRiddenStyle->Handle));
}

 void OCStepVisual_ContextDependentOverRidingStyledItem::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepVisual_HArray1OfPresentationStyleAssignment^ aStyles, OCNaroWrappers::OCStepRepr_RepresentationItem^ aItem, OCNaroWrappers::OCStepVisual_StyledItem^ aOverRiddenStyle, OCNaroWrappers::OCStepVisual_HArray1OfStyleContextSelect^ aStyleContext)
{
  (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_StepVisual_HArray1OfPresentationStyleAssignment*)aStyles->Handle), *((Handle_StepRepr_RepresentationItem*)aItem->Handle), *((Handle_StepVisual_StyledItem*)aOverRiddenStyle->Handle), *((Handle_StepVisual_HArray1OfStyleContextSelect*)aStyleContext->Handle));
}

 void OCStepVisual_ContextDependentOverRidingStyledItem::SetStyleContext(OCNaroWrappers::OCStepVisual_HArray1OfStyleContextSelect^ aStyleContext)
{
  (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->SetStyleContext(*((Handle_StepVisual_HArray1OfStyleContextSelect*)aStyleContext->Handle));
}

OCStepVisual_HArray1OfStyleContextSelect^ OCStepVisual_ContextDependentOverRidingStyledItem::StyleContext()
{
  Handle(StepVisual_HArray1OfStyleContextSelect) tmp = (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->StyleContext();
  return gcnew OCStepVisual_HArray1OfStyleContextSelect(&tmp);
}

OCStepVisual_StyleContextSelect^ OCStepVisual_ContextDependentOverRidingStyledItem::StyleContextValue(Standard_Integer num)
{
  StepVisual_StyleContextSelect* tmp = new StepVisual_StyleContextSelect();
  *tmp = (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->StyleContextValue(num);
  return gcnew OCStepVisual_StyleContextSelect(tmp);
}

 Standard_Integer OCStepVisual_ContextDependentOverRidingStyledItem::NbStyleContext()
{
  return (*((Handle_StepVisual_ContextDependentOverRidingStyledItem*)nativeHandle))->NbStyleContext();
}

