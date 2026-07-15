#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoAudioOutputMode_TypeDefinitionIndex = 6302;

	enum class VideoAudioOutputMode : ::System::Int32
	{
		None = 0,
		AudioSource = 1,
		Direct = 2,
		APIOnly = 3,
	};
}
