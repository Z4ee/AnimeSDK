#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeType_TypeDefinitionIndex = 1959;

	enum class XmlNodeType : ::System::Int32
	{
		None = 0,
		Element = 1,
		Attribute = 2,
		Text = 3,
		CDATA = 4,
		EntityReference = 5,
		Entity = 6,
		ProcessingInstruction = 7,
		Comment = 8,
		Document = 9,
		DocumentType = 10,
		DocumentFragment = 11,
		Notation = 12,
		Whitespace = 13,
		SignificantWhitespace = 14,
		EndElement = 15,
		EndEntity = 16,
		XmlDeclaration = 17,
	};
}
