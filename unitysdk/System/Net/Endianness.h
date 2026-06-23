#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int Endianness_TypeDefinitionIndex = 3302;

	enum class Endianness : ::System::Int32
	{
		Network = 0,
		Native = 16,
	};
}
