#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoSource_TypeDefinitionIndex = 19426;

	enum class VideoSource : ::System::Int32
	{
		VideoClip = 0,
		Url = 1,
	};
}
