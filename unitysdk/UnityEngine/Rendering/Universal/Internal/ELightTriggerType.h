#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerType_TypeDefinitionIndex = 30415;

	enum class ELightTriggerType : ::System::Int32
	{
		CustomType = -2,
		JustOnNight = 1,
		JustOnDay = 2,
		Evening = 4,
		EveningAndNight = 5,
		DayAndEvening = 6,
		AllTime = 7,
		NoTime = 8,
	};
}
