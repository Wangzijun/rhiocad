// File generated by CPPExt (CPP file)
//

#include "Law_ListIteratorOfLaws.h"
#include "../Converter.h"
#include "Law_Laws.h"
#include "Law_Function.h"
#include "Law_ListNodeOfLaws.h"


using namespace OCNaroWrappers;

OCLaw_ListIteratorOfLaws::OCLaw_ListIteratorOfLaws(Law_ListIteratorOfLaws* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCLaw_ListIteratorOfLaws::OCLaw_ListIteratorOfLaws() 
{
  nativeHandle = new Law_ListIteratorOfLaws();
}

OCLaw_ListIteratorOfLaws::OCLaw_ListIteratorOfLaws(OCNaroWrappers::OCLaw_Laws^ L) 
{
  nativeHandle = new Law_ListIteratorOfLaws(*((Law_Laws*)L->Handle));
}

 void OCLaw_ListIteratorOfLaws::Initialize(OCNaroWrappers::OCLaw_Laws^ L)
{
  ((Law_ListIteratorOfLaws*)nativeHandle)->Initialize(*((Law_Laws*)L->Handle));
}

 System::Boolean OCLaw_ListIteratorOfLaws::More()
{
  return OCConverter::StandardBooleanToBoolean(((Law_ListIteratorOfLaws*)nativeHandle)->More());
}

 void OCLaw_ListIteratorOfLaws::Next()
{
  ((Law_ListIteratorOfLaws*)nativeHandle)->Next();
}

OCLaw_Function^ OCLaw_ListIteratorOfLaws::Value()
{
  Handle(Law_Function) tmp = ((Law_ListIteratorOfLaws*)nativeHandle)->Value();
  return gcnew OCLaw_Function(&tmp);
}

