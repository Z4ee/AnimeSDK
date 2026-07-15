#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PropagationPaths_Type_TypeDefinitionIndex = 6249;

	enum class PropagationPaths_Type : ::System::Int32
	{
		None = 0,
		TrickleDown = 1,
		BubbleUp = 2,
	};
}
