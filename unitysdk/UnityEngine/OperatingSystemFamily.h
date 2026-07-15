#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int OperatingSystemFamily_TypeDefinitionIndex = 4378;

	enum class OperatingSystemFamily : ::System::Int32
	{
		Other = 0,
		MacOSX = 1,
		Windows = 2,
		Linux = 3,
	};
}
