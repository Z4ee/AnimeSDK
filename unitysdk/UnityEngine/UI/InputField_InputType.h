#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_InputType_TypeDefinitionIndex = 6732;

	enum class InputField_InputType : ::System::Int32
	{
		Standard = 0,
		AutoCorrect = 1,
		Password = 2,
	};
}
