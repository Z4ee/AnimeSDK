#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDCollectionType_TypeDefinitionIndex = 31790;

	enum class HID_HIDCollectionType : ::System::Int32
	{
		Physical = 0,
		Application = 1,
		Logical = 2,
		Report = 3,
		NamedArray = 4,
		UsageSwitch = 5,
		UsageModifier = 6,
	};
}
