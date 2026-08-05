#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerAnimationType_TypeDefinitionIndex = 27195;

	enum class ELightTriggerAnimationType : ::System::Int32
	{
		LinearAnimation = 2,
		NoneAnimation = 1,
		SparkAnimation = 0,
	};
}
