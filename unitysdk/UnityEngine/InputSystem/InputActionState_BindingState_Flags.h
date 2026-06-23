#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_BindingState_Flags_TypeDefinitionIndex = 31565;

	enum class InputActionState_BindingState_Flags : ::System::Int32
	{
		ChainsWithNext = 1,
		EndOfChain = 2,
		Composite = 4,
		PartOfComposite = 8,
		InitialStateCheckPending = 16,
		WantsInitialStateCheck = 32,
	};
}
