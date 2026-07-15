#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int NewLineHandling_TypeDefinitionIndex = 1813;

	enum class NewLineHandling : ::System::Int32
	{
		Replace = 0,
		Entitize = 1,
		None = 2,
	};
}
