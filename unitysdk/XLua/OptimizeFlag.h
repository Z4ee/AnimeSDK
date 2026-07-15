#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int OptimizeFlag_TypeDefinitionIndex = 5611;

	enum class OptimizeFlag : ::System::Int32
	{
		Default = 0,
		PackAsTable = 1,
	};
}
