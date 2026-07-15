#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNodeType_TypeDefinitionIndex = 1971;

	enum class XPathNodeType : ::System::Int32
	{
		Root = 0,
		Element = 1,
		Attribute = 2,
		Namespace = 3,
		Text = 4,
		SignificantWhitespace = 5,
		Whitespace = 6,
		ProcessingInstruction = 7,
		Comment = 8,
		All = 9,
	};
}
