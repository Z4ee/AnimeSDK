#pragma once
#include "unitysdk/unitysdk.h"

namespace Utilities
{
	inline static constexpr unsigned int MaterialQuality_TypeDefinitionIndex = 34006;

	enum class MaterialQuality : ::System::Int32
	{
		Low = 1,
		Medium = 2,
		High = 4,
	};
}
