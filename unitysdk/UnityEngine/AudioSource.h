#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"

namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET UNITYSDK_OFFSET(0x1B26E6E0)
#define UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1B26E720)
#define UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1B26E730)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x1B26E6F0)
#define UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B26E710)
#define UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1B26E700)
#define UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26E740)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSource_TypeDefinitionIndex = 5192;

	class AudioSource : public ::UnityEngine::AudioBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void PlayHelper(::UnityEngine::AudioSource* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET))(a1, a2);
		}

		::System::Void Play(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(this, a1);
		}

		::System::Void set_volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET))(this);
		}

		::System::Void Play_2(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET))(this, a1);
		}
	};
}
