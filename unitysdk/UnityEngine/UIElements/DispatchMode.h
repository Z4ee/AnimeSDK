#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DispatchMode_TypeDefinitionIndex = 6129;

	enum class DispatchMode : ::System::Int32
	{
		Default = 1,
		Queued = 1,
		Immediate = 2,
	};
}
