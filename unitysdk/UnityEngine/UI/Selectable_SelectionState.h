#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Selectable_SelectionState_TypeDefinitionIndex = 6001;

	enum class Selectable_SelectionState : ::System::Int32
	{
		Normal = 0,
		Highlighted = 1,
		Pressed = 2,
		Selected = 3,
		Disabled = 4,
	};
}
