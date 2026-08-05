#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationFlags_TypeDefinitionIndex = 33027;

	enum class NotificationFlags : ::System::Int16
	{
		TriggerInEditMode = 1,
		Retroactive = 2,
		TriggerOnce = 4,
		TriggerOnceWithPause = 8,
	};
}
