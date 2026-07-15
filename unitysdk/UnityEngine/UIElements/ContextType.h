#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextType_TypeDefinitionIndex = 6144;

	enum class ContextType : ::System::Int32
	{
		Player = 0,
		Editor = 1,
	};
}
