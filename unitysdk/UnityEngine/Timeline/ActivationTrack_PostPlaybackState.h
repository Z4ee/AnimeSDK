#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationTrack_PostPlaybackState_TypeDefinitionIndex = 36611;

	enum class ActivationTrack_PostPlaybackState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Revert = 2,
		LeaveAsIs = 3,
	};
}
