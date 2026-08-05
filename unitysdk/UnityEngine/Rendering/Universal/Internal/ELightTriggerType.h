#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerType_TypeDefinitionIndex = 27875;

	enum class ELightTriggerType : ::System::Int32
	{
		CustomType = -2,
		JustOnNight = 1,
		JustOnDay = 2,
		AllTime = 7,
		Evening = 4,
		DayAndEvening = 6,
		NoTime = 8,
		EveningAndNight = 5,
	};
}
