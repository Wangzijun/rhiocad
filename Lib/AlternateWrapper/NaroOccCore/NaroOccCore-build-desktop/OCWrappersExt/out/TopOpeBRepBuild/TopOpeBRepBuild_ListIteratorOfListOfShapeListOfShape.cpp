// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.h"
#include "../Converter.h"
#include "TopOpeBRepBuild_ListOfShapeListOfShape.h"
#include "TopOpeBRepBuild_ShapeListOfShape.h"
#include "TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape() 
{
  nativeHandle = new TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape();
}

OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(OCNaroWrappers::OCTopOpeBRepBuild_ListOfShapeListOfShape^ L) 
{
  nativeHandle = new TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(*((TopOpeBRepBuild_ListOfShapeListOfShape*)L->Handle));
}

 void OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::Initialize(OCNaroWrappers::OCTopOpeBRepBuild_ListOfShapeListOfShape^ L)
{
  ((TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape*)nativeHandle)->Initialize(*((TopOpeBRepBuild_ListOfShapeListOfShape*)L->Handle));
}

 System::Boolean OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::More()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape*)nativeHandle)->More());
}

 void OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::Next()
{
  ((TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape*)nativeHandle)->Next();
}

OCTopOpeBRepBuild_ShapeListOfShape^ OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape::Value()
{
  TopOpeBRepBuild_ShapeListOfShape* tmp = new TopOpeBRepBuild_ShapeListOfShape();
  *tmp = ((TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepBuild_ShapeListOfShape(tmp);
}


