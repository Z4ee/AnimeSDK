#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamespaceScope_TypeDefinitionIndex = 1833;

	enum class XmlNamespaceScope : ::System::Int32
	{
		All = 0,
		ExcludeXml = 1,
		Local = 2,
	};
}
