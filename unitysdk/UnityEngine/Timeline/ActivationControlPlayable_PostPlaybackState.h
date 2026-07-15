#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationControlPlayable_PostPlaybackState_TypeDefinitionIndex = 36686;

	enum class ActivationControlPlayable_PostPlaybackState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Revert = 2,
	};
}
