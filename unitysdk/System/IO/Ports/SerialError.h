#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialError_TypeDefinitionIndex = 4157;

	enum class SerialError : ::System::Int32
	{
		Frame = 8,
		Overrun = 2,
		RXOver = 1,
		RXParity = 4,
		TXFull = 256,
	};
}
