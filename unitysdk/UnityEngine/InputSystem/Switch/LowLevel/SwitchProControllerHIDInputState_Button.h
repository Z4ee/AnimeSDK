#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Switch::LowLevel
{
	inline static constexpr unsigned int SwitchProControllerHIDInputState_Button_TypeDefinitionIndex = 32401;

	enum class SwitchProControllerHIDInputState_Button : ::System::Int32
	{
		North = 11,
		South = 8,
		West = 10,
		East = 9,
		StickL = 18,
		StickR = 19,
		L = 12,
		R = 13,
		ZL = 14,
		ZR = 15,
		Plus = 17,
		Minus = 16,
		X = 11,
		B = 8,
		Y = 10,
		A = 9,
	};
}
