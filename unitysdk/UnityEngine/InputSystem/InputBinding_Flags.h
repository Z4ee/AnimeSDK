#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBinding_Flags_TypeDefinitionIndex = 32196;

	enum class InputBinding_Flags : ::System::Int32
	{
		None = 0,
		Composite = 4,
		PartOfComposite = 8,
	};
}
