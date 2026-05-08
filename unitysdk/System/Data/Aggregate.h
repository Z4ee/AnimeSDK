#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int Aggregate_TypeDefinitionIndex = 37009;

	enum class Aggregate : ::System::Int32
	{
		None = -1,
		Sum = 30,
		Avg = 31,
		Min = 32,
		Max = 33,
		Count = 34,
		StDev = 35,
		Var = 37,
	};
}
