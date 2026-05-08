#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCLOUDCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1ABA99D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCLOUDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA9C70)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SkyCloudConfig_TypeDefinitionIndex = 30302;

	class SkyCloudConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig*>
	{
	public:
		::UnityEngine::Gradient* cloudColorRamp; // 0x18
		::UnityEngine::Color CloudPhaseColor; // 0x20
		::System::Single cloudPhaseG; // 0x30
		::System::Single cloudScatteringIntensity; // 0x34
		::System::Single cloudDistortIntensity; // 0x38
		::System::Single horizonFade; // 0x3C
		::System::Single cloudOffsetY; // 0x40
		::System::Single cloudBaseRot; // 0x44
		::System::Single cloudRotSpeed; // 0x48
		::UnityEngine::Color highCloudColor; // 0x4C
		::System::Single highCloudIntensity0; // 0x5C
		::System::Single highCloudIntensity1; // 0x60
		::System::Single highCloudIntensity2; // 0x64
		::System::Single highCloudHeight; // 0x68
		::System::Single cloudMoveSpeed; // 0x6C
		::System::Boolean lowCloudTextureIsCubeMap; // 0x70
		::System::Boolean lowCloudFillDome; // 0x71
		::UnityEngine::Texture* lowCloudTexture; // 0x78
		::UnityEngine::Texture* highCloudTexture; // 0x80
		::UnityEngine::Texture* cloudDistortMap; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCLOUDCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyCloudConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCLOUDCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
