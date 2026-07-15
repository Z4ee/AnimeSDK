#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_Token_TypeDefinitionIndex = 1861;

	enum class XmlTextWriter_Token : ::System::Int32
	{
		PI = 0,
		Doctype = 1,
		Comment = 2,
		CData = 3,
		StartElement = 4,
		EndElement = 5,
		LongEndElement = 6,
		StartAttribute = 7,
		EndAttribute = 8,
		Content = 9,
		Base64 = 10,
		RawData = 11,
		Whitespace = 12,
		Empty = 13,
	};
}
