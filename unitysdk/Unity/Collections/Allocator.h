#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int Allocator_TypeDefinitionIndex = 3976;

	enum class Allocator : ::System::Int32
	{
		Invalid = 0,
		None = 1,
		Temp = 2,
		TempJob = 3,
		Persistent = 4,
		AudioKernel = 5,
		Swappable = 6,
	};
}
