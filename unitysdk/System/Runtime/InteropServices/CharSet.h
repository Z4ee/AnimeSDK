#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CharSet_TypeDefinitionIndex = 1419;

	enum class CharSet : ::System::Int32
	{
		None = 1,
		Ansi = 2,
		Unicode = 3,
		Auto = 4,
	};
}
