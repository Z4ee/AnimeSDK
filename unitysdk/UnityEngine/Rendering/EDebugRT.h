#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int EDebugRT_TypeDefinitionIndex = 4804;

	enum class EDebugRT : ::System::Int32
	{
		None = 0,
		MainLight = 1,
		AddLight = 2,
		CustomGBuffer = 3,
		DebugRT = 4,
		Num = 5,
	};
}
