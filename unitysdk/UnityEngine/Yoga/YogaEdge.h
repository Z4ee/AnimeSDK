#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaEdge_TypeDefinitionIndex = 24930;

	enum class YogaEdge : ::System::Int32
	{
		Left = 0,
		Top = 1,
		Right = 2,
		Bottom = 3,
		Start = 4,
		End = 5,
		Horizontal = 6,
		Vertical = 7,
		All = 8,
	};
}
