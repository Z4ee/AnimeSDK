#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int FrameData_EvaluationType_TypeDefinitionIndex = 4885;

	enum class FrameData_EvaluationType : ::System::Int32
	{
		Evaluate = 0,
		Playback = 1,
	};
}
