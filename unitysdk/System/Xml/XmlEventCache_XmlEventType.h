#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_XmlEventType_TypeDefinitionIndex = 1830;

	enum class XmlEventCache_XmlEventType : ::System::Int32
	{
		Unknown = 0,
		DocType = 1,
		StartElem = 2,
		StartAttr = 3,
		EndAttr = 4,
		CData = 5,
		Comment = 6,
		PI = 7,
		Whitespace = 8,
		String = 9,
		Raw = 10,
		EntRef = 11,
		CharEnt = 12,
		SurrCharEnt = 13,
		Base64 = 14,
		BinHex = 15,
		XmlDecl1 = 16,
		XmlDecl2 = 17,
		StartContent = 18,
		EndElem = 19,
		FullEndElem = 20,
		Nmsp = 21,
		EndBase64 = 22,
		Close = 23,
		Flush = 24,
		Dispose = 25,
	};
}
