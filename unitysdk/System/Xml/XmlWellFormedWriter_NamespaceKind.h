#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_NamespaceKind_TypeDefinitionIndex = 1869;

	enum class XmlWellFormedWriter_NamespaceKind : ::System::Int32
	{
		Written = 0,
		NeedToWrite = 1,
		Implied = 2,
		Special = 3,
	};
}
