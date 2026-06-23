#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions_RebindingOperation_Flags_TypeDefinitionIndex = 31550;

	enum class InputActionRebindingExtensions_RebindingOperation_Flags : ::System::Int32
	{
		Started = 1,
		Completed = 2,
		Canceled = 4,
		OnEventHooked = 8,
		OnAfterUpdateHooked = 16,
		DontIgnoreNoisyControls = 64,
		DontGeneralizePathOfSelectedControl = 128,
		AddNewBinding = 256,
		SuppressMatchingEvents = 512,
	};
}
