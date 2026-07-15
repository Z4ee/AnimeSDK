#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_Versions_TypeDefinitionIndex = 36629;

	enum class TimelineClip_Versions : ::System::Int32
	{
		Initial = 0,
		ClipInFromGlobalToLocal = 1,
	};
}
