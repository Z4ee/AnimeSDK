#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionChange_TypeDefinitionIndex = 32154;

	enum class InputActionChange : ::System::Int32
	{
		ActionEnabled = 0,
		ActionDisabled = 1,
		ActionMapEnabled = 2,
		ActionMapDisabled = 3,
		ActionStarted = 4,
		ActionPerformed = 5,
		ActionCanceled = 6,
		BoundControlsAboutToChange = 7,
		BoundControlsChanged = 8,
	};
}
