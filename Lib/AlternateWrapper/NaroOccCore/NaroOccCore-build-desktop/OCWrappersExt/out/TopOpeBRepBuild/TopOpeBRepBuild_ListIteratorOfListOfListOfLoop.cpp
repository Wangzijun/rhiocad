// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.h"
#include "../Converter.h"
#include "TopOpeBRepBuild_ListOfListOfLoop.h"
#include "TopOpeBRepBuild_ListOfLoop.h"
#include "TopOpeBRepBuild_ListNodeOfListOfListOfLoop.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop(TopOpeBRepBuild_ListIteratorOfListOfListOfLoop* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop() 
{
  nativeHandle = new TopOpeBRepBuild_ListIteratorOfListOfListOfLoop();
}

OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop(OCNaroWrappers::OCTopOpeBRepBuild_ListOfListOfLoop^ L) 
{
  nativeHandle = new TopOpeBRepBuild_ListIteratorOfListOfListOfLoop(*((TopOpeBRepBuild_ListOfListOfLoop*)L->Handle));
}

 void OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::Initialize(OCNaroWrappers::OCTopOpeBRepBuild_ListOfListOfLoop^ L)
{
  ((TopOpeBRepBuild_ListIteratorOfListOfListOfLoop*)nativeHandle)->Initialize(*((TopOpeBRepBuild_ListOfListOfLoop*)L->Handle));
}

 System::Boolean OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::More()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepBuild_ListIteratorOfListOfListOfLoop*)nativeHandle)->More());
}

 void OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::Next()
{
  ((TopOpeBRepBuild_ListIteratorOfListOfListOfLoop*)nativeHandle)->Next();
}

OCTopOpeBRepBuild_ListOfLoop^ OCTopOpeBRepBuild_ListIteratorOfListOfListOfLoop::Value()
{
  TopOpeBRepBuild_ListOfLoop* tmp = new TopOpeBRepBuild_ListOfLoop();
  *tmp = ((TopOpeBRepBuild_ListIteratorOfListOfListOfLoop*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepBuild_ListOfLoop(tmp);
}


