#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector3Composite_Mode_TypeDefinitionIndex = 29444;

	enum class Vector3Composite_Mode : ::System::Int32
	{
		Analog = 0,
		DigitalNormalized = 1,
		Digital = 2,
	};
}
