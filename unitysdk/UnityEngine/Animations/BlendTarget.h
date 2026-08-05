#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int BlendTarget_TypeDefinitionIndex = 6683;

	enum class BlendTarget : ::System::Int32
	{
		DefaultPose = 0,
		PreviousPose = 1,
	};
}
