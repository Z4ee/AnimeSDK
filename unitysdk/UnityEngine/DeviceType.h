#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DeviceType_TypeDefinitionIndex = 4379;

	enum class DeviceType : ::System::Int32
	{
		Unknown = 0,
		Handheld = 1,
		Console = 2,
		Desktop = 3,
	};
}
