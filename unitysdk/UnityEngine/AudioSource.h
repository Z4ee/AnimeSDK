#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"

namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET UNITYSDK_OFFSET(0x189E1F70)
#define UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x189E1FB0)
#define UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET UNITYSDK_OFFSET(0x189E1FC0)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x189E1F80)
#define UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x189E1FA0)
#define UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x189E1F90)
#define UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E1FD0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSource_TypeDefinitionIndex = 5090;

	class AudioSource : public ::UnityEngine::AudioBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void PlayHelper(::UnityEngine::AudioSource* source, ::System::UInt64 delay)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET))(source, delay);
		}

		::System::Void Play(::System::Double delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(this, delay);
		}

		::System::Void set_volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET))(this);
		}

		::System::Void Play_2(::System::UInt64 delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET))(this, delay);
		}
	};
}
