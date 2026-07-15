#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int BatteryStatus_TypeDefinitionIndex = 4377;

	enum class BatteryStatus : ::System::Int32
	{
		Unknown = 0,
		Charging = 1,
		Discharging = 2,
		NotCharging = 3,
		Full = 4,
	};
}
