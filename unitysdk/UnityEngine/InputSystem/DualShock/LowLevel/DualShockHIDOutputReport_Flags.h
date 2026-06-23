#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport_Flags_TypeDefinitionIndex = 31838;

	enum class DualShockHIDOutputReport_Flags : ::System::Int32
	{
		Rumble = 1,
		Color = 2,
	};
}
