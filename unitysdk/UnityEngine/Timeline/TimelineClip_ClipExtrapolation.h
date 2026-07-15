#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_ClipExtrapolation_TypeDefinitionIndex = 36631;

	enum class TimelineClip_ClipExtrapolation : ::System::Int32
	{
		None = 0,
		Hold = 1,
		Loop = 2,
		PingPong = 3,
		Continue = 4,
	};
}
