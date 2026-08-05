#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int TreeAccessMethod_TypeDefinitionIndex = 39324;

	enum class TreeAccessMethod : ::System::Int32
	{
		KEY_SEARCH_AND_INDEX = 1,
		INDEX_ONLY = 2,
	};
}
