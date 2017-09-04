// File generated by CPPExt (CPP file)
//

#include "TDF_DefaultDeltaOnRemoval.h"
#include "../Converter.h"
#include "TDF_Attribute.h"


using namespace OCNaroWrappers;

OCTDF_DefaultDeltaOnRemoval::OCTDF_DefaultDeltaOnRemoval(Handle(TDF_DefaultDeltaOnRemoval)* nativeHandle) : OCTDF_DeltaOnRemoval((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_DefaultDeltaOnRemoval(*nativeHandle);
}

OCTDF_DefaultDeltaOnRemoval::OCTDF_DefaultDeltaOnRemoval(OCNaroWrappers::OCTDF_Attribute^ anAttribute) : OCTDF_DeltaOnRemoval((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_DefaultDeltaOnRemoval(new TDF_DefaultDeltaOnRemoval(*((Handle_TDF_Attribute*)anAttribute->Handle)));
}

 void OCTDF_DefaultDeltaOnRemoval::Apply()
{
  (*((Handle_TDF_DefaultDeltaOnRemoval*)nativeHandle))->Apply();
}

