#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelClearFlags_TypeDefinitionIndex = 27458;

	enum class PanelClearFlags : ::System::Int32
	{
		None = 0,
		Color = 1,
		Depth = 2,
		All = 3,
	};
}
