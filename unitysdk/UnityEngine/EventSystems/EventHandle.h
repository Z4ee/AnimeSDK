#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventHandle_TypeDefinitionIndex = 6900;

	enum class EventHandle : ::System::Int32
	{
		Unused = 0,
		Used = 1,
	};
}
