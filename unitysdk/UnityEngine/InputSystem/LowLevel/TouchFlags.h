#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchFlags_TypeDefinitionIndex = 29237;

	enum class TouchFlags : ::System::Byte
	{
		IndirectTouch = 0x1,
		PrimaryTouch = 0x8,
		TapPress = 0x10,
		TapRelease = 0x20,
		OrphanedPrimaryTouch = 0x40,
		BeganInSameFrame = 0x80,
	};
}
