#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int QueryTriggerInteraction_TypeDefinitionIndex = 7779;

	enum class QueryTriggerInteraction : ::System::Int32
	{
		UseGlobal = 0,
		Ignore = 1,
		Collide = 2,
	};
}
