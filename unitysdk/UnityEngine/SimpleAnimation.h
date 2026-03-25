#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace System { class String; }

#define UNITYENGINE_SIMPLEANIMATION_PAUSE_OFFSET UNITYSDK_OFFSET(0x189DE3F0)
#define UNITYENGINE_SIMPLEANIMATION_PLAYCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x189DE3C0)
#define UNITYENGINE_SIMPLEANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0x189DE3E0)
#define UNITYENGINE_SIMPLEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x189DE3D0)
#define UNITYENGINE_SIMPLEANIMATION_SET_TIME_OFFSET UNITYSDK_OFFSET(0x189DE3B0)

namespace UnityEngine
{
	inline static constexpr unsigned int SimpleAnimation_TypeDefinitionIndex = 5052;

	class SimpleAnimation : public ::UnityEngine::Component
	{
	public:
		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_SET_TIME_OFFSET))(this, value);
		}

		::System::Boolean PlayClipByName(::System::String* clipName, ::System::Single targetTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PLAYCLIPBYNAME_OFFSET))(this, clipName, targetTime);
		}

		::System::Boolean Play(::System::String* clipName, ::System::Single targetTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PLAY_OFFSET))(this, clipName, targetTime);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PLAY_1_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PAUSE_OFFSET))(this);
		}
	};
}
