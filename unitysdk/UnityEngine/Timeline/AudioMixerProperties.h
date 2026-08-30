#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1ECB9E30)
#define UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECBA200)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioMixerProperties_TypeDefinitionIndex = 37509;

	class AudioMixerProperties : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single volume; // 0x10
		::System::Single stereoPan; // 0x14
		::System::Single spatialBlend; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_PREPAREFRAME_OFFSET))(this, a1, a2);
		}
	};
}
