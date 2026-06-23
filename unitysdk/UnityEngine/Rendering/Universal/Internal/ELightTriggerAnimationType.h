#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerAnimationType_TypeDefinitionIndex = 26623;

	enum class ELightTriggerAnimationType : ::System::Int32
	{
		NoneAnimation = 1,
		SparkAnimation = 0,
		LinearAnimation = 2,
	};
}
