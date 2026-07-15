#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugAction_TypeDefinitionIndex = 34078;

	enum class DebugAction : ::System::Int32
	{
		EnableDebugMenu = 0,
		PreviousDebugPanel = 1,
		NextDebugPanel = 2,
		Action = 3,
		MakePersistent = 4,
		MoveVertical = 5,
		MoveHorizontal = 6,
		Multiplier = 7,
		ResetAll = 8,
		DebugActionCount = 9,
	};
}
