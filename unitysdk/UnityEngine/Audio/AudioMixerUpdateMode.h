#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerUpdateMode_TypeDefinitionIndex = 18360;

	enum class AudioMixerUpdateMode : ::System::Int32
	{
		Normal = 0,
		UnscaledTime = 1,
	};
}
