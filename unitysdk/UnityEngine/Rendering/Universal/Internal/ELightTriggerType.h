#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerType_TypeDefinitionIndex = 27039;

	enum class ELightTriggerType : ::System::Int32
	{
		JustOnDay = 2,
		CustomType = -2,
		NoTime = 8,
		Evening = 4,
		JustOnNight = 1,
		AllTime = 7,
		DayAndEvening = 6,
		EveningAndNight = 5,
	};
}
