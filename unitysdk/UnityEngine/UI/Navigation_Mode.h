#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_Mode_TypeDefinitionIndex = 5961;

	enum class Navigation_Mode : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Automatic = 3,
		Explicit = 4,
	};
}
