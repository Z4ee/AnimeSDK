#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace System { class String; }

#define UNITYENGINE_SIMPLEANIMATION_PAUSE_OFFSET UNITYSDK_OFFSET(0x1ECF8360)
#define UNITYENGINE_SIMPLEANIMATION_PLAYCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x1ECF8330)
#define UNITYENGINE_SIMPLEANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1ECF8350)
#define UNITYENGINE_SIMPLEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1ECF8340)
#define UNITYENGINE_SIMPLEANIMATION_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1ECF8320)

namespace UnityEngine
{
	inline static constexpr unsigned int SimpleAnimation_TypeDefinitionIndex = 5722;

	class SimpleAnimation : public ::UnityEngine::Component
	{
	public:
		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_SET_TIME_OFFSET))(this, a1);
		}

		::System::Boolean PlayClipByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PLAYCLIPBYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean Play(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPLEANIMATION_PLAY_OFFSET))(this, a1, a2);
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
