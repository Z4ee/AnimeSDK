#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_AUDIO_AUDIOMIXERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB100)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerGroup_TypeDefinitionIndex = 18362;

	class AudioMixerGroup : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERGROUP__CTOR_OFFSET))(this);
		}
	};
}
