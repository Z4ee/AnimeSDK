#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorSkipStepMode_TypeDefinitionIndex = 6628;

	enum class AnimatorSkipStepMode : ::System::Int32
	{
		NoSkip = 0,
		SkipWriteTransform = 1,
		SkipPoseEvaluation = 2,
		SkipRootMotion = 3,
	};
}
