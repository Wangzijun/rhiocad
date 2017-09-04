// File generated by CPPExt (CPP file)
//

#include "IntTools_QuickSortRange.h"
#include "../Converter.h"
#include "IntTools_Range.h"
#include "IntTools_Array1OfRange.h"
#include "IntTools_CompareRange.h"


using namespace OCNaroWrappers;

OCIntTools_QuickSortRange::OCIntTools_QuickSortRange(IntTools_QuickSortRange* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCIntTools_QuickSortRange::Sort(OCNaroWrappers::OCIntTools_Array1OfRange^ TheArray, OCNaroWrappers::OCIntTools_CompareRange^ Comp)
{
  IntTools_QuickSortRange::Sort(*((IntTools_Array1OfRange*)TheArray->Handle), *((IntTools_CompareRange*)Comp->Handle));
}

