#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventHandle_TypeDefinitionIndex = 6070;

	enum class EventHandle : ::System::Int32
	{
		Unused = 0,
		Used = 1,
	};
}
