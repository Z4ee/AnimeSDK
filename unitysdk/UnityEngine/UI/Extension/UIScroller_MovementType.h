#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIScroller_MovementType_TypeDefinitionIndex = 68554;

	enum class UIScroller_MovementType : ::System::Int32
	{
		Clamped = 1,
		Elastic = 0,
	};
}
