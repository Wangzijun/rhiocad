// File generated by CPPExt (CPP file)
//

#include "MeshVS_MeshEntityOwner.h"
#include "../Converter.h"
#include "../PrsMgr/PrsMgr_PresentationManager.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"


using namespace OCNaroWrappers;

OCMeshVS_MeshEntityOwner::OCMeshVS_MeshEntityOwner(Handle(MeshVS_MeshEntityOwner)* nativeHandle) : OCSelectMgr_EntityOwner((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshVS_MeshEntityOwner(*nativeHandle);
}

OCMeshVS_MeshEntityOwner::OCMeshVS_MeshEntityOwner(SelectMgr_SOPtr SelObj, Standard_Integer ID, Standard_Address MeshEntity, MeshVS_EntityType Type, Standard_Integer Priority, System::Boolean IsGroup) : OCSelectMgr_EntityOwner((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshVS_MeshEntityOwner(new MeshVS_MeshEntityOwner(SelObj, ID, MeshEntity, Type, Priority, OCConverter::BooleanToStandardBoolean(IsGroup)));
}

 Standard_Address OCMeshVS_MeshEntityOwner::Owner()
{
  return (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Owner();
}

 MeshVS_EntityType OCMeshVS_MeshEntityOwner::Type()
{
  return (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Type();
}

 Standard_Integer OCMeshVS_MeshEntityOwner::ID()
{
  return (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->ID();
}

 System::Boolean OCMeshVS_MeshEntityOwner::IsGroup()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->IsGroup());
}

 System::Boolean OCMeshVS_MeshEntityOwner::IsHilighted(OCNaroWrappers::OCPrsMgr_PresentationManager^ PM, Standard_Integer Mode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->IsHilighted(*((Handle_PrsMgr_PresentationManager*)PM->Handle), Mode));
}

 void OCMeshVS_MeshEntityOwner::Hilight()
{
  (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Hilight();
}

 void OCMeshVS_MeshEntityOwner::Hilight(OCNaroWrappers::OCPrsMgr_PresentationManager^ PM, Standard_Integer Mode)
{
  (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Hilight(*((Handle_PrsMgr_PresentationManager*)PM->Handle), Mode);
}

 void OCMeshVS_MeshEntityOwner::HilightWithColor(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCQuantity_NameOfColor theColor, Standard_Integer Mode)
{
  (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->HilightWithColor(*((Handle_PrsMgr_PresentationManager3d*)PM->Handle), (Quantity_NameOfColor)theColor, Mode);
}

 void OCMeshVS_MeshEntityOwner::Unhilight(OCNaroWrappers::OCPrsMgr_PresentationManager^ PM, Standard_Integer Mode)
{
  (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Unhilight(*((Handle_PrsMgr_PresentationManager*)PM->Handle), Mode);
}

 void OCMeshVS_MeshEntityOwner::Clear(OCNaroWrappers::OCPrsMgr_PresentationManager^ PM, Standard_Integer Mode)
{
  (*((Handle_MeshVS_MeshEntityOwner*)nativeHandle))->Clear(*((Handle_PrsMgr_PresentationManager*)PM->Handle), Mode);
}

