#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_Token_TypeDefinitionIndex = 1866;

	enum class XmlWellFormedWriter_Token : ::System::Int32
	{
		StartDocument = 0,
		EndDocument = 1,
		PI = 2,
		Comment = 3,
		Dtd = 4,
		StartElement = 5,
		EndElement = 6,
		StartAttribute = 7,
		EndAttribute = 8,
		Text = 9,
		CData = 10,
		AtomicValue = 11,
		Base64 = 12,
		RawData = 13,
		Whitespace = 14,
	};
}
