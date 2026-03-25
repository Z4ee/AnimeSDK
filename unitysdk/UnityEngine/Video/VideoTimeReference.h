#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoTimeReference_TypeDefinitionIndex = 6006;

	enum class VideoTimeReference : ::System::Int32
	{
		Freerun = 0,
		InternalTime = 1,
		ExternalTime = 2,
	};
}
