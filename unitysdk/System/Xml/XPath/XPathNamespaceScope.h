#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNamespaceScope_TypeDefinitionIndex = 1975;

	enum class XPathNamespaceScope : ::System::Int32
	{
		All = 0,
		ExcludeXml = 1,
		Local = 2,
	};
}
