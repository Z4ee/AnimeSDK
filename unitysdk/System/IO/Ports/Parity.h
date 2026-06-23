#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int Parity_TypeDefinitionIndex = 4153;

	enum class Parity : ::System::Int32
	{
		Even = 2,
		Mark = 3,
		None = 0,
		Odd = 1,
		Space = 4,
	};
}
