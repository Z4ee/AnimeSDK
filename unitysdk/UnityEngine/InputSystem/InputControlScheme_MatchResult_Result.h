#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_MatchResult_Result_TypeDefinitionIndex = 31588;

	enum class InputControlScheme_MatchResult_Result : ::System::Int32
	{
		AllSatisfied = 0,
		MissingRequired = 1,
		MissingOptional = 2,
	};
}
