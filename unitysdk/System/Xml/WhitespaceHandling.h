#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int WhitespaceHandling_TypeDefinitionIndex = 1824;

	enum class WhitespaceHandling : ::System::Int32
	{
		All = 0,
		Significant = 1,
		None = 2,
	};
}
