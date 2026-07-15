#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CallingConvention_TypeDefinitionIndex = 1418;

	enum class CallingConvention : ::System::Int32
	{
		Winapi = 1,
		Cdecl = 2,
		StdCall = 3,
		ThisCall = 4,
		FastCall = 5,
	};
}
