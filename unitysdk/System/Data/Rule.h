#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int Rule_TypeDefinitionIndex = 37056;

	enum class Rule : ::System::Int32
	{
		None = 0,
		Cascade = 1,
		SetNull = 2,
		SetDefault = 3,
	};
}
