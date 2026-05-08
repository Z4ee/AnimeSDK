#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserChange_TypeDefinitionIndex = 29103;

	enum class InputUserChange : ::System::Int32
	{
		Added = 0,
		Removed = 1,
		DevicePaired = 2,
		DeviceUnpaired = 3,
		DeviceLost = 4,
		DeviceRegained = 5,
		AccountChanged = 6,
		AccountNameChanged = 7,
		AccountSelectionInProgress = 8,
		AccountSelectionCanceled = 9,
		AccountSelectionComplete = 10,
		ControlSchemeChanged = 11,
		ControlsChanged = 12,
	};
}
