#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int JudgeMethod_TypeDefinitionIndex = 49360;

	enum class JudgeMethod : ::System::Int32
	{
		UseRangeEx = 1,
		UseRange = 0,
	};
}
