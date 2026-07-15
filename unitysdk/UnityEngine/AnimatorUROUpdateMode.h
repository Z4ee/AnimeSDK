#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorUROUpdateMode_TypeDefinitionIndex = 5139;

	enum class AnimatorUROUpdateMode : ::System::Int32
	{
		Disabled = 0,
		FrameCount = 1,
		TimeOut = 2,
	};
}
