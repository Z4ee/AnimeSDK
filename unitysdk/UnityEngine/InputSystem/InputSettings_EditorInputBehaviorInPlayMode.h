#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSettings_EditorInputBehaviorInPlayMode_TypeDefinitionIndex = 31694;

	enum class InputSettings_EditorInputBehaviorInPlayMode : ::System::Int32
	{
		PointersAndKeyboardsRespectGameViewFocus = 0,
		AllDevicesRespectGameViewFocus = 1,
		AllDeviceInputAlwaysGoesToGameView = 2,
	};
}
