#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_Quality.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTSHAFTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F33DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTSHAFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F33DC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightShaftConfig_TypeDefinitionIndex = 29963;

	class LightShaftConfig : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightShaftConfig** StaticGet_DefaultLightShaftConfig()
		{
			return (::UnityEngine::Rendering::Universal::LightShaftConfig**)Il2CppClass::FromTypeDefinitionIndex(LightShaftConfig_TypeDefinitionIndex)->GetStaticField(0x24A70);
		}
		::System::Boolean lightShaft; // 0x10
		::System::Single lightShaftThreshold; // 0x14
		::System::Single lightShaftIntensity; // 0x18
		::UnityEngine::Color lightShaftColor; // 0x1C
		::System::Single lightShaftLength; // 0x2C
		::System::Single lightShaftFadeLength; // 0x30
		::System::Boolean lightShaftBlur; // 0x34
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_Quality lightShaftRTQuality; // 0x38
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_Quality lightShaftSampleQuality; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTSHAFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTSHAFTCONFIG__CCTOR_OFFSET))();
		}
	};
}
