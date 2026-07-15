#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int NamespaceHandling_TypeDefinitionIndex = 1812;

	enum class NamespaceHandling : ::System::Int32
	{
		Default = 0,
		OmitDuplicates = 1,
	};
}
