#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoTimeSource_TypeDefinitionIndex = 6299;

	enum class VideoTimeSource : ::System::Int32
	{
		AudioDSPTimeSource = 0,
		GameTimeSource = 1,
	};
}
