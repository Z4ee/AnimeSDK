#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Handles_TypeDefinitionIndex = 459;

	enum class Handles : ::System::Int32
	{
		STD_INPUT = -10,
		STD_OUTPUT = -11,
		STD_ERROR = -12,
	};
}
