#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int UIPointerBehavior_TypeDefinitionIndex = 32386;

	enum class UIPointerBehavior : ::System::Int32
	{
		SingleMouseOrPenButMultiTouchAndTrack = 0,
		SingleUnifiedPointer = 1,
		AllPointersAsIs = 2,
	};
}
