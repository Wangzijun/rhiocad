// File generated by CPPExt (MPV)
//
#ifndef _IntTools_CurveRangeLocalizeData_OCWrappers_HeaderFile
#define _IntTools_CurveRangeLocalizeData_OCWrappers_HeaderFile

// include native header
#include <IntTools_CurveRangeLocalizeData.hxx>
#include "../Converter.h"


#include "IntTools_MapOfCurveSample.h"
#include "IntTools_DataMapOfCurveSampleBox.h"


namespace OCNaroWrappers
{

ref class OCIntTools_CurveRangeSample;
ref class OCBnd_Box;
ref class OCIntTools_ListOfCurveRangeSample;



public ref class OCIntTools_CurveRangeLocalizeData  {

protected:
  IntTools_CurveRangeLocalizeData* nativeHandle;
  OCIntTools_CurveRangeLocalizeData(OCDummy^) {};

public:
  property IntTools_CurveRangeLocalizeData* Handle
  {
    IntTools_CurveRangeLocalizeData* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_CurveRangeLocalizeData(IntTools_CurveRangeLocalizeData* nativeHandle);

// Methods PUBLIC


OCIntTools_CurveRangeLocalizeData(Standard_Integer theNbSample, Standard_Real theMinRange);


 /*instead*/  Standard_Integer GetNbSample() ;


 /*instead*/  Standard_Real GetMinRange() ;


 /*instead*/  void AddOutRange(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRange) ;


 /*instead*/  void AddBox(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox) ;


 /*instead*/  System::Boolean FindBox(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox) ;


 /*instead*/  System::Boolean IsRangeOut(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRange) ;


 /*instead*/  void ListRangeOut(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ theList) ;

~OCIntTools_CurveRangeLocalizeData()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif