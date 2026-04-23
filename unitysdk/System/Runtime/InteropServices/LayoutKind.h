#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int LayoutKind_TypeDefinitionIndex = 1422;

	enum class LayoutKind : ::System::Int32
	{
		Sequential = 0,
		Explicit = 2,
		Auto = 3,
	};
}
