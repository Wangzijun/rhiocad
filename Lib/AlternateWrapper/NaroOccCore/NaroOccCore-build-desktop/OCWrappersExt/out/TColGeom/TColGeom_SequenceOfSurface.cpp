// File generated by CPPExt (CPP file)
//

#include "TColGeom_SequenceOfSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"
#include "TColGeom_SequenceNodeOfSequenceOfSurface.h"


using namespace OCNaroWrappers;

OCTColGeom_SequenceOfSurface::OCTColGeom_SequenceOfSurface(TColGeom_SequenceOfSurface* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_SequenceOfSurface::OCTColGeom_SequenceOfSurface() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColGeom_SequenceOfSurface();
}

OCTColGeom_SequenceOfSurface^ OCTColGeom_SequenceOfSurface::Assign(OCNaroWrappers::OCTColGeom_SequenceOfSurface^ Other)
{
  TColGeom_SequenceOfSurface* tmp = new TColGeom_SequenceOfSurface();
  *tmp = ((TColGeom_SequenceOfSurface*)nativeHandle)->Assign(*((TColGeom_SequenceOfSurface*)Other->Handle));
  return gcnew OCTColGeom_SequenceOfSurface(tmp);
}

 void OCTColGeom_SequenceOfSurface::Append(OCNaroWrappers::OCGeom_Surface^ T)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Append(*((Handle_Geom_Surface*)T->Handle));
}

 void OCTColGeom_SequenceOfSurface::Append(OCNaroWrappers::OCTColGeom_SequenceOfSurface^ S)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Append(*((TColGeom_SequenceOfSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfSurface::Prepend(OCNaroWrappers::OCGeom_Surface^ T)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Prepend(*((Handle_Geom_Surface*)T->Handle));
}

 void OCTColGeom_SequenceOfSurface::Prepend(OCNaroWrappers::OCTColGeom_SequenceOfSurface^ S)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Prepend(*((TColGeom_SequenceOfSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfSurface::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeom_Surface^ T)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->InsertBefore(Index, *((Handle_Geom_Surface*)T->Handle));
}

 void OCTColGeom_SequenceOfSurface::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfSurface^ S)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->InsertBefore(Index, *((TColGeom_SequenceOfSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfSurface::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeom_Surface^ T)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->InsertAfter(Index, *((Handle_Geom_Surface*)T->Handle));
}

 void OCTColGeom_SequenceOfSurface::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfSurface^ S)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->InsertAfter(Index, *((TColGeom_SequenceOfSurface*)S->Handle));
}

OCGeom_Surface^ OCTColGeom_SequenceOfSurface::First()
{
  Handle(Geom_Surface) tmp = ((TColGeom_SequenceOfSurface*)nativeHandle)->First();
  return gcnew OCGeom_Surface(&tmp);
}

OCGeom_Surface^ OCTColGeom_SequenceOfSurface::Last()
{
  Handle(Geom_Surface) tmp = ((TColGeom_SequenceOfSurface*)nativeHandle)->Last();
  return gcnew OCGeom_Surface(&tmp);
}

 void OCTColGeom_SequenceOfSurface::Split(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfSurface^ Sub)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Split(Index, *((TColGeom_SequenceOfSurface*)Sub->Handle));
}

OCGeom_Surface^ OCTColGeom_SequenceOfSurface::Value(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = ((TColGeom_SequenceOfSurface*)nativeHandle)->Value(Index);
  return gcnew OCGeom_Surface(&tmp);
}

 void OCTColGeom_SequenceOfSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_Surface^ I)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->SetValue(Index, *((Handle_Geom_Surface*)I->Handle));
}

OCGeom_Surface^ OCTColGeom_SequenceOfSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = ((TColGeom_SequenceOfSurface*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_Surface(&tmp);
}

 void OCTColGeom_SequenceOfSurface::Remove(Standard_Integer Index)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Remove(Index);
}

 void OCTColGeom_SequenceOfSurface::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColGeom_SequenceOfSurface*)nativeHandle)->Remove(FromIndex, ToIndex);
}

