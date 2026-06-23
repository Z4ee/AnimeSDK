#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathResultType_TypeDefinitionIndex = 1845;

	enum class XPathResultType : ::System::Int32
	{
		Number = 0,
		String = 1,
		Boolean = 2,
		NodeSet = 3,
		Navigator = 1,
		Any = 5,
		Error = 6,
	};
}
