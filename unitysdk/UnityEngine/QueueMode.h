#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int QueueMode_TypeDefinitionIndex = 5163;

	enum class QueueMode : ::System::Int32
	{
		CompleteOthers = 0,
		PlayNow = 2,
	};
}
