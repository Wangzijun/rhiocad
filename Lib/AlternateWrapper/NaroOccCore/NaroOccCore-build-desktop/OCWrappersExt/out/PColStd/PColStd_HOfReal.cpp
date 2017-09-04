// File generated by CPPExt (CPP file)
//

#include "PColStd_HOfReal.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCPColStd_HOfReal::OCPColStd_HOfReal(PColStd_HOfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_HOfReal::OCPColStd_HOfReal() 
{
  nativeHandle = new PColStd_HOfReal();
}

 Standard_Integer OCPColStd_HOfReal::HashCode(Standard_Real MyKey, Standard_Integer Upper)
{
  return ((PColStd_HOfReal*)nativeHandle)->HashCode(MyKey, Upper);
}

 System::Boolean OCPColStd_HOfReal::Compare(Standard_Real One, Standard_Real Two)
{
  return OCConverter::StandardBooleanToBoolean(((PColStd_HOfReal*)nativeHandle)->Compare(One, Two));
}

