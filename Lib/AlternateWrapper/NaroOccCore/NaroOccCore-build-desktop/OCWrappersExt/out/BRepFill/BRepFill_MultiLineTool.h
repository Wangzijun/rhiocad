// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_MultiLineTool_OCWrappers_HeaderFile
#define _BRepFill_MultiLineTool_OCWrappers_HeaderFile

// include native header
#include <BRepFill_MultiLineTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepFill_MultiLine;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCTColgp_Array1OfVec;
ref class OCTColgp_Array1OfVec2d;


//! private  class   used  to  instantiate the  continuous <br>
//!          approximations routines. <br>
public ref class OCBRepFill_MultiLineTool  {

protected:
  BRepFill_MultiLineTool* nativeHandle;
  OCBRepFill_MultiLineTool(OCDummy^) {};

public:
  property BRepFill_MultiLineTool* Handle
  {
    BRepFill_MultiLineTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_MultiLineTool(BRepFill_MultiLineTool* nativeHandle);

// Methods PUBLIC

//! returns the first parameter of the Line. <br>
static /*instead*/  Standard_Real FirstParameter(OCNaroWrappers::OCBRepFill_MultiLine^ ML) ;

//! returns the last parameter of the Line. <br>
static /*instead*/  Standard_Real LastParameter(OCNaroWrappers::OCBRepFill_MultiLine^ ML) ;

//! Returns the number of 2d points of a MLine <br>
static /*instead*/  Standard_Integer NbP2d(OCNaroWrappers::OCBRepFill_MultiLine^ ML) ;

//! Returns the number of 3d points of a MLine. <br>
static /*instead*/  Standard_Integer NbP3d(OCNaroWrappers::OCBRepFill_MultiLine^ ML) ;

//! returns the 3d points of the multipoint <MPointIndex> <br>
//!          when only 3d points exist. <br>
static /*instead*/  void Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt) ;

//! returns the 2d points of the multipoint <MPointIndex> <br>
//!          when only 2d points exist. <br>
static /*instead*/  void Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d) ;

//! returns the 3d and 2d points of the multipoint <br>
//!          <MPointIndex>. <br>
static /*instead*/  void Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d) ;

//! returns the 3d derivative values of the multipoint <br>
//!          <MPointIndex> when only 3d points exist. <br>
//!          returns False if the derivative cannot be computed. <br>
static /*instead*/  System::Boolean D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV) ;

//! returns the 2d derivative values of the multipoint <br>
//!          <MPointIndex> only when 2d points exist. <br>
//!          returns False if the derivative cannot be computed. <br>
static /*instead*/  System::Boolean D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

//! returns the 3d and 2d derivative values of the <br>
//!          multipoint <MPointIndex>. <br>
//!          returns False if the derivative cannot be computed. <br>
static /*instead*/  System::Boolean D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

~OCBRepFill_MultiLineTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif