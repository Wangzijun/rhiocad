// File generated by CPPExt (MPV)
//
#ifndef _Poly_Connect_OCWrappers_HeaderFile
#define _Poly_Connect_OCWrappers_HeaderFile

// include native header
#include <Poly_Connect.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_Array1OfInteger.h"


namespace OCNaroWrappers
{

ref class OCPoly_Triangulation;



//! Provides an algorithm to explore, inside a triangulation, the <br>
//! adjacency data for a node or a triangle. <br>
//! Adjacency data for a node consists of triangles which <br>
//! contain the node. <br>
//! Adjacency data for a triangle consists of: <br>
//! -   the 3 adjacent triangles which share an edge of the triangle, <br>
//! -   and the 3 nodes which are the other nodes of these adjacent triangles. <br>
//! Example <br>
//! Inside a triangulation, a triangle T <br>
//! has nodes n1, n2 and n3. <br>
//! It has adjacent triangles AT1, AT2 and AT3 where: <br>
//! - AT1 shares the nodes n2 and n3, <br>
//! - AT2 shares the nodes n3 and n1, <br>
//! - AT3 shares the nodes n1 and n2. <br>
//! It has adjacent nodes an1, an2 and an3 where: <br>
//! - an1 is the third node of AT1, <br>
//! - an2 is the third node of AT2, <br>
//! - an3 is the third node of AT3. <br>
//! So triangle AT1 is composed of nodes n2, n3 and an1. <br>
//! There are two ways of using this algorithm. <br>
//! -   From a given node you can look for one triangle that <br>
//!   passes through the node, then look for the triangles <br>
//!   adjacent to this triangle, then the adjacent nodes. You <br>
//!   can thus explore the triangulation step by step (functions <br>
//!   Triangle, Triangles and Nodes). <br>
//! -   From a given node you can look for all the triangles <br>
//!   that pass through the node (iteration method, using the <br>
//!   functions Initialize, More, Next and Value). <br>
//! A Connect object can be seen as a tool which analyzes a <br>
//! triangulation and translates it into a series of triangles. By <br>
//! doing this, it provides an interface with other tools and <br>
//! applications working on basic triangles, and which do not <br>
//! work directly with a Poly_Triangulation. <br>
public ref class OCPoly_Connect  {

protected:
  Poly_Connect* nativeHandle;
  OCPoly_Connect(OCDummy^) {};

public:
  property Poly_Connect* Handle
  {
    Poly_Connect* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCPoly_Connect(Poly_Connect* nativeHandle);

// Methods PUBLIC

//! Constructs an algorithm to explore the adjacency data of <br>
//! nodes or triangles for the triangulation T. <br>
OCPoly_Connect(OCNaroWrappers::OCPoly_Triangulation^ T);

//! Returns the triangulation analyzed by this tool. <br>
 /*instead*/  OCPoly_Triangulation^ Triangulation() ;

//! Returns the index of a triangle containing the node at <br>
//! index N in the nodes table specific to the triangulation analyzed by this tool <br>
 /*instead*/  Standard_Integer Triangle(Standard_Integer N) ;

//! Returns in t1, t2 and t3, the indices of the 3 triangles <br>
//! adjacent to the triangle at index T in the triangles table <br>
//! specific to the triangulation analyzed by this tool. <br>
//! Warning <br>
//! Null indices are returned when there are fewer than 3 <br>
//! adjacent triangles. <br>
 /*instead*/  void Triangles(Standard_Integer T, Standard_Integer& t1, Standard_Integer& t2, Standard_Integer& t3) ;

//! Returns, in n1, n2 and n3, the indices of the 3 nodes <br>
//! adjacent to the triangle referenced at index T in the <br>
//! triangles table specific to the triangulation analyzed by this tool. <br>
//! Warning <br>
//! Null indices are returned when there are fewer than 3 adjacent nodes. <br>
 /*instead*/  void Nodes(Standard_Integer T, Standard_Integer& n1, Standard_Integer& n2, Standard_Integer& n3) ;

//! Initializes an iterator to search for all the triangles <br>
//! containing the node referenced at index N in the nodes <br>
//! table, for the triangulation analyzed by this tool. <br>
//! The iterator is managed by the following functions: <br>
//! -   More, which checks if there are still elements in the iterator <br>
//! -   Next, which positions the iterator on the next element <br>
//! -   Value, which returns the current element. <br>
//! The use of such an iterator provides direct access to the <br>
//! triangles around a particular node, i.e. it avoids iterating on <br>
//! all the component triangles of a triangulation. <br>
//! Example <br>
//! Poly_Connect C(Tr); <br>
//! for <br>
//! (C.Initialize(n1);C.More();C.Next()) <br>
//! { <br>
//!        t = C.Value(); <br>
//! } <br>
 /*instead*/  void Initialize(Standard_Integer N) ;

//! Returns true if there is another element in the iterator <br>
//! defined with the function Initialize (i.e. if there is another <br>
//! triangle containing the given node). <br>
 /*instead*/  System::Boolean More() ;

//! Advances the iterator defined with the function Initialize to <br>
//! access the next triangle. <br>
//! Note: There is no action if the iterator is empty (i.e. if the <br>
//! function More returns false).- <br>
 /*instead*/  void Next() ;

//! Returns the index of the current triangle to which the <br>
//! iterator, defined with the function Initialize, points. This is <br>
//! an index in the triangles table specific to the triangulation <br>
//! analyzed by this tool <br>
 /*instead*/  Standard_Integer Value() ;

~OCPoly_Connect()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif