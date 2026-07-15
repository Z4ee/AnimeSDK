#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int EntityHandling_TypeDefinitionIndex = 1793;

	enum class EntityHandling : ::System::Int32
	{
		ExpandEntities = 1,
		ExpandCharEntities = 2,
	};
}
