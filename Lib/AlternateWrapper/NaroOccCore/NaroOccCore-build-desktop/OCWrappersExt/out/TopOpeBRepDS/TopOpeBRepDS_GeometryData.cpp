// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_GeometryData.h"
#include "../Converter.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "TopOpeBRepDS_Interference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_GeometryData::OCTopOpeBRepDS_GeometryData(TopOpeBRepDS_GeometryData* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_GeometryData::OCTopOpeBRepDS_GeometryData() 
{
  nativeHandle = new TopOpeBRepDS_GeometryData();
}

OCTopOpeBRepDS_GeometryData::OCTopOpeBRepDS_GeometryData(OCNaroWrappers::OCTopOpeBRepDS_GeometryData^ Other) 
{
  nativeHandle = new TopOpeBRepDS_GeometryData(*((TopOpeBRepDS_GeometryData*)Other->Handle));
}

 void OCTopOpeBRepDS_GeometryData::Assign(OCNaroWrappers::OCTopOpeBRepDS_GeometryData^ Other)
{
  ((TopOpeBRepDS_GeometryData*)nativeHandle)->Assign(*((TopOpeBRepDS_GeometryData*)Other->Handle));
}

OCTopOpeBRepDS_ListOfInterference^ OCTopOpeBRepDS_GeometryData::Interferences()
{
  TopOpeBRepDS_ListOfInterference* tmp = new TopOpeBRepDS_ListOfInterference();
  *tmp = ((TopOpeBRepDS_GeometryData*)nativeHandle)->Interferences();
  return gcnew OCTopOpeBRepDS_ListOfInterference(tmp);
}

OCTopOpeBRepDS_ListOfInterference^ OCTopOpeBRepDS_GeometryData::ChangeInterferences()
{
  TopOpeBRepDS_ListOfInterference* tmp = new TopOpeBRepDS_ListOfInterference();
  *tmp = ((TopOpeBRepDS_GeometryData*)nativeHandle)->ChangeInterferences();
  return gcnew OCTopOpeBRepDS_ListOfInterference(tmp);
}

 void OCTopOpeBRepDS_GeometryData::AddInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I)
{
  ((TopOpeBRepDS_GeometryData*)nativeHandle)->AddInterference(*((Handle_TopOpeBRepDS_Interference*)I->Handle));
}

