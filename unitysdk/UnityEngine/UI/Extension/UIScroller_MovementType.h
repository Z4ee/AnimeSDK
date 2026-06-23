#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIScroller_MovementType_TypeDefinitionIndex = 69080;

	enum class UIScroller_MovementType : ::System::Int32
	{
		Elastic = 0,
		Clamped = 1,
	};
}
