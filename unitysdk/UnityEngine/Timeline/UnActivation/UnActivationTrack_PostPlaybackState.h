#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline::UnActivation
{
	inline static constexpr unsigned int UnActivationTrack_PostPlaybackState_TypeDefinitionIndex = 33082;

	enum class UnActivationTrack_PostPlaybackState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Revert = 2,
		LeaveAsIs = 3,
	};
}
