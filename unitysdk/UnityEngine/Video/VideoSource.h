#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoSource_TypeDefinitionIndex = 6019;

	enum class VideoSource : ::System::Int32
	{
		VideoClip = 0,
		Url = 1,
	};
}
