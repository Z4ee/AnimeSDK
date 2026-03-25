#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioSettings_AudioConfigurationChangeHandler; }

#define UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x189E1B20)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSettings_TypeDefinitionIndex = 5083;

	class AudioSettings : public ::System::Object
	{
	public:
		static ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler** StaticGet_OnAudioConfigurationChanged()
		{
			return (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler**)Il2CppClass::FromTypeDefinitionIndex(AudioSettings_TypeDefinitionIndex)->GetStaticField(0x250);
		}

		static ::System::Void InvokeOnAudioConfigurationChanged(::System::Boolean deviceWasChanged)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOCONFIGURATIONCHANGED_OFFSET))(deviceWasChanged);
		}
	};
}
