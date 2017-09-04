// File generated by CPPExt (CPP file)
//

#include "Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "Resource_DataMapOfAsciiStringExtendedString.h"
#include "Resource_DataMapNodeOfDataMapOfAsciiStringExtendedString.h"


using namespace OCNaroWrappers;

OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString(Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString();
}

OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString(OCNaroWrappers::OCResource_DataMapOfAsciiStringExtendedString^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString(*((Resource_DataMapOfAsciiStringExtendedString*)aMap->Handle));
}

 void OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::Initialize(OCNaroWrappers::OCResource_DataMapOfAsciiStringExtendedString^ aMap)
{
  ((Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString*)nativeHandle)->Initialize(*((Resource_DataMapOfAsciiStringExtendedString*)aMap->Handle));
}

OCTCollection_AsciiString^ OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::Key()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString*)nativeHandle)->Key();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCTCollection_ExtendedString^ OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString::Value()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString*)nativeHandle)->Value();
  return gcnew OCTCollection_ExtendedString(tmp);
}

