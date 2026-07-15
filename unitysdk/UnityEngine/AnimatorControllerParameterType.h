#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorControllerParameterType_TypeDefinitionIndex = 5126;

	enum class AnimatorControllerParameterType : ::System::Int32
	{
		Float = 1,
		Int = 3,
		Bool = 4,
		Trigger = 9,
	};
}
