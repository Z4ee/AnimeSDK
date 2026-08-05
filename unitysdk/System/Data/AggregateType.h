#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int AggregateType_TypeDefinitionIndex = 39214;

	enum class AggregateType : ::System::Int32
	{
		None = 0,
		Sum = 4,
		Mean = 5,
		Min = 6,
		Max = 7,
		First = 8,
		Count = 9,
		Var = 10,
		StDev = 11,
	};
}
