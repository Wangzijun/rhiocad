// File generated by CPPExt (Transient)
//
#ifndef _PCDM_ReadWriter_1_OCWrappers_HeaderFile
#define _PCDM_ReadWriter_1_OCWrappers_HeaderFile

// include the wrapped class
#include <PCDM_ReadWriter_1.hxx>
#include "../Converter.h"

#include "PCDM_ReadWriter.h"



namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCStorage_Data;
ref class OCCDM_Document;
ref class OCTCollection_ExtendedString;
ref class OCCDM_MessageDriver;
ref class OCPCDM_SequenceOfReference;
ref class OCTColStd_SequenceOfExtendedString;



public ref class OCPCDM_ReadWriter_1 : OCPCDM_ReadWriter {

protected:
  // dummy constructor;
  OCPCDM_ReadWriter_1(OCDummy^) : OCPCDM_ReadWriter((OCDummy^)nullptr) {};

public:

// constructor from native
OCPCDM_ReadWriter_1(Handle(PCDM_ReadWriter_1)* nativeHandle);

// Methods PUBLIC


OCPCDM_ReadWriter_1();

//! returns PCDM_ReadWriter_1. <br>
 /*instead*/  OCTCollection_AsciiString^ Version() ;


 /*instead*/  void WriteReferenceCounter(OCNaroWrappers::OCStorage_Data^ aData, OCNaroWrappers::OCCDM_Document^ aDocument) ;


 /*instead*/  void WriteReferences(OCNaroWrappers::OCStorage_Data^ aData, OCNaroWrappers::OCCDM_Document^ aDocument, OCNaroWrappers::OCTCollection_ExtendedString^ theReferencerFileName) ;


 /*instead*/  void WriteExtensions(OCNaroWrappers::OCStorage_Data^ aData, OCNaroWrappers::OCCDM_Document^ aDocument) ;


 /*instead*/  void WriteVersion(OCNaroWrappers::OCStorage_Data^ aData, OCNaroWrappers::OCCDM_Document^ aDocument) ;


 /*instead*/  Standard_Integer ReadReferenceCounter(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName, OCNaroWrappers::OCCDM_MessageDriver^ theMsgDriver) ;


 /*instead*/  void ReadReferences(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName, OCNaroWrappers::OCPCDM_SequenceOfReference^ theReferences, OCNaroWrappers::OCCDM_MessageDriver^ theMsgDriver) ;


 /*instead*/  void ReadExtensions(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ theExtensions, OCNaroWrappers::OCCDM_MessageDriver^ theMsgDriver) ;


 /*instead*/  Standard_Integer ReadDocumentVersion(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName, OCNaroWrappers::OCCDM_MessageDriver^ theMsgDriver) ;

~OCPCDM_ReadWriter_1()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif