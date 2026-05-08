#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector2Composite_Mode_TypeDefinitionIndex = 29442;

	enum class Vector2Composite_Mode : ::System::Int32
	{
		Analog = 2,
		DigitalNormalized = 0,
		Digital = 1,
	};
}
