// File generated by CPPExt (CPP file)
//

#include "GccInt_BParab.h"
#include "../Converter.h"
#include "../gp/gp_Parab2d.h"


using namespace OCNaroWrappers;

OCGccInt_BParab::OCGccInt_BParab(Handle(GccInt_BParab)* nativeHandle) : OCGccInt_Bisec((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GccInt_BParab(*nativeHandle);
}

OCGccInt_BParab::OCGccInt_BParab(OCNaroWrappers::OCgp_Parab2d^ Parab) : OCGccInt_Bisec((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GccInt_BParab(new GccInt_BParab(*((gp_Parab2d*)Parab->Handle)));
}

OCgp_Parab2d^ OCGccInt_BParab::Parabola()
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = (*((Handle_GccInt_BParab*)nativeHandle))->Parabola();
  return gcnew OCgp_Parab2d(tmp);
}

 OCGccInt_IType OCGccInt_BParab::ArcType()
{
  return (OCGccInt_IType)((*((Handle_GccInt_BParab*)nativeHandle))->ArcType());
}

