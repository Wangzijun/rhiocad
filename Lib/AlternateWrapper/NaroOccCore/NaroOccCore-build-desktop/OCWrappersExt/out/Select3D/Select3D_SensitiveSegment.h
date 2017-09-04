// File generated by CPPExt (Transient)
//
#ifndef _Select3D_SensitiveSegment_OCWrappers_HeaderFile
#define _Select3D_SensitiveSegment_OCWrappers_HeaderFile

// include the wrapped class
#include <Select3D_SensitiveSegment.hxx>
#include "../Converter.h"

#include "Select3D_SensitiveEntity.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pnt2d.h"


namespace OCNaroWrappers
{

ref class OCSelectBasics_EntityOwner;
ref class OCgp_Pnt;
ref class OCSelect3D_Projector;
ref class OCSelectBasics_ListOfBox2d;
ref class OCSelect3D_SensitiveEntity;
ref class OCTopLoc_Location;
ref class OCTColgp_Array1OfPnt2d;
ref class OCBnd_Box2d;
ref class OCgp_Lin;


//! A framework to define sensitive zones along a segment <br>
//!          One gives the 3D start and end point; <br>
//!          the maximum number of 2D boxes given <br>
//!          by this entity may be set by the user <br>
//!          if the projected segment is <br>
//!          vertical or horizontal, one needs only 1 box. <br>
//!          for a pi/4 angle -> MaxNumber 2D boxes <br>
public ref class OCSelect3D_SensitiveSegment : OCSelect3D_SensitiveEntity {

protected:
  // dummy constructor;
  OCSelect3D_SensitiveSegment(OCDummy^) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect3D_SensitiveSegment(Handle(Select3D_SensitiveSegment)* nativeHandle);

// Methods PUBLIC

//! Constructs the sensitive segment object defined by <br>
//! the owner OwnerId, the points FirstP, LastP and the <br>
//! maximum number of sensitive bounding boxes MaxRect. <br>
OCSelect3D_SensitiveSegment(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Pnt^ FirstP, OCNaroWrappers::OCgp_Pnt^ LastP, Standard_Integer MaxRect);

//!  Sets the maximum number of sensitive rectangles MaxRect. <br>
 /*instead*/  void Set(Standard_Integer MaxRect) ;

//! changes the start Point of the Segment; <br>
 /*instead*/  void StartPoint(OCNaroWrappers::OCgp_Pnt^ aPt) ;

//! changes the end point of the segment <br>
 /*instead*/  void EndPoint(OCNaroWrappers::OCgp_Pnt^ aPt) ;

//! gives the 3D start Point of the Segment <br>
 /*instead*/  OCgp_Pnt^ StartPoint() ;

//! gives the 3D End Point of the Segment <br>
 /*instead*/  OCgp_Pnt^ EndPoint() ;

//! gives the 3D start Point of the Segment <br>
 /*instead*/  OCgp_Pnt2d^ StartPoint2d() ;

//! gives the 3D End Point of the Segment <br>
 /*instead*/  OCgp_Pnt2d^ EndPoint2d() ;

//! projection of the sensitive primitive in order to <br>
//!          get 2D boxes for the Sort Algorithm <br>
virtual /*instead*/  void Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector) override;

//! gives the 2D boxes which represent the segment in the <br>
//!          selection process... <br>
virtual /*instead*/  void Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ boxes) ;


virtual /*instead*/  OCSelect3D_SensitiveEntity^ GetConnected(OCNaroWrappers::OCTopLoc_Location^ aLocation) override;

//! projection of the sensitive primitive in order to <br>
//!          get 2D boxes for the Sort Algorithm <br>
virtual /*instead*/  System::Boolean Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin) override;


virtual /*instead*/  System::Boolean Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol) override;


virtual /*instead*/  System::Boolean Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol) override;


virtual /*instead*/  Standard_Real ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine) ;

//!returns <mymaxrect> <br>
virtual /*instead*/  Standard_Integer MaxBoxes() override;


virtual /*instead*/  void Dump(Standard_OStream& S, System::Boolean FullDump) override;

~OCSelect3D_SensitiveSegment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif