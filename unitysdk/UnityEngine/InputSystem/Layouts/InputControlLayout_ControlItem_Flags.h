#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_ControlItem_Flags_TypeDefinitionIndex = 31978;

	enum class InputControlLayout_ControlItem_Flags : ::System::Int32
	{
		isModifyingExistingControl = 1,
		IsNoisy = 2,
		IsSynthetic = 4,
		IsFirstDefinedInThisLayout = 8,
		DontReset = 16,
	};
}
