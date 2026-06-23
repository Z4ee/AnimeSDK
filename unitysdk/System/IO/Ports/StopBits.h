#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int StopBits_TypeDefinitionIndex = 4164;

	enum class StopBits : ::System::Int32
	{
		None = 0,
		One = 1,
		OnePointFive = 3,
		Two = 2,
	};
}
