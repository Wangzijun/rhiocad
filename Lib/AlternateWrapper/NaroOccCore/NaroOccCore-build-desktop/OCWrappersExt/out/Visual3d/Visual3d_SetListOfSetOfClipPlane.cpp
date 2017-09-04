// File generated by CPPExt (CPP file)
//

#include "Visual3d_SetListOfSetOfClipPlane.h"
#include "../Converter.h"
#include "Visual3d_ListIteratorOfSetListOfSetOfClipPlane.h"
#include "Visual3d_ClipPlane.h"
#include "Visual3d_ListNodeOfSetListOfSetOfClipPlane.h"


using namespace OCNaroWrappers;

OCVisual3d_SetListOfSetOfClipPlane::OCVisual3d_SetListOfSetOfClipPlane(Visual3d_SetListOfSetOfClipPlane* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCVisual3d_SetListOfSetOfClipPlane::OCVisual3d_SetListOfSetOfClipPlane() 
{
  nativeHandle = new Visual3d_SetListOfSetOfClipPlane();
}

 void OCVisual3d_SetListOfSetOfClipPlane::Assign(OCNaroWrappers::OCVisual3d_SetListOfSetOfClipPlane^ Other)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Assign(*((Visual3d_SetListOfSetOfClipPlane*)Other->Handle));
}

 Standard_Integer OCVisual3d_SetListOfSetOfClipPlane::Extent()
{
  return ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Extent();
}

 System::Boolean OCVisual3d_SetListOfSetOfClipPlane::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->IsEmpty());
}

 void OCVisual3d_SetListOfSetOfClipPlane::Prepend(OCNaroWrappers::OCVisual3d_ClipPlane^ I)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Prepend(*((Handle_Visual3d_ClipPlane*)I->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::Prepend(OCNaroWrappers::OCVisual3d_ClipPlane^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ theIt)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Prepend(*((Handle_Visual3d_ClipPlane*)I->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)theIt->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::Prepend(OCNaroWrappers::OCVisual3d_SetListOfSetOfClipPlane^ Other)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Prepend(*((Visual3d_SetListOfSetOfClipPlane*)Other->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::Append(OCNaroWrappers::OCVisual3d_ClipPlane^ I)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Append(*((Handle_Visual3d_ClipPlane*)I->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::Append(OCNaroWrappers::OCVisual3d_ClipPlane^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ theIt)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Append(*((Handle_Visual3d_ClipPlane*)I->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)theIt->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::Append(OCNaroWrappers::OCVisual3d_SetListOfSetOfClipPlane^ Other)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Append(*((Visual3d_SetListOfSetOfClipPlane*)Other->Handle));
}

OCVisual3d_ClipPlane^ OCVisual3d_SetListOfSetOfClipPlane::First()
{
  Handle(Visual3d_ClipPlane) tmp = ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->First();
  return gcnew OCVisual3d_ClipPlane(&tmp);
}

OCVisual3d_ClipPlane^ OCVisual3d_SetListOfSetOfClipPlane::Last()
{
  Handle(Visual3d_ClipPlane) tmp = ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Last();
  return gcnew OCVisual3d_ClipPlane(&tmp);
}

 void OCVisual3d_SetListOfSetOfClipPlane::RemoveFirst()
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->RemoveFirst();
}

 void OCVisual3d_SetListOfSetOfClipPlane::Remove(OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ It)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->Remove(*((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)It->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::InsertBefore(OCNaroWrappers::OCVisual3d_ClipPlane^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ It)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->InsertBefore(*((Handle_Visual3d_ClipPlane*)I->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)It->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::InsertBefore(OCNaroWrappers::OCVisual3d_SetListOfSetOfClipPlane^ Other, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ It)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->InsertBefore(*((Visual3d_SetListOfSetOfClipPlane*)Other->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)It->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::InsertAfter(OCNaroWrappers::OCVisual3d_ClipPlane^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ It)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->InsertAfter(*((Handle_Visual3d_ClipPlane*)I->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)It->Handle));
}

 void OCVisual3d_SetListOfSetOfClipPlane::InsertAfter(OCNaroWrappers::OCVisual3d_SetListOfSetOfClipPlane^ Other, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane^ It)
{
  ((Visual3d_SetListOfSetOfClipPlane*)nativeHandle)->InsertAfter(*((Visual3d_SetListOfSetOfClipPlane*)Other->Handle), *((Visual3d_ListIteratorOfSetListOfSetOfClipPlane*)It->Handle));
}

