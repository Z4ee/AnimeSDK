#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_SpecialAttribute_TypeDefinitionIndex = 1872;

	enum class XmlWellFormedWriter_SpecialAttribute : ::System::Int32
	{
		No = 0,
		DefaultXmlns = 1,
		PrefixedXmlns = 2,
		XmlSpace = 3,
		XmlLang = 4,
	};
}
