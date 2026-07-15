#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int FrameData_Flags_TypeDefinitionIndex = 4884;

	enum class FrameData_Flags : ::System::Int32
	{
		Evaluate = 1,
		SeekOccured = 2,
		Loop = 4,
		Hold = 8,
		EffectivePlayStateDelayed = 16,
		EffectivePlayStatePlaying = 32,
	};
}
