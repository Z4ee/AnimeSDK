#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1A711400)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A711A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A711920)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WaterConfig_TypeDefinitionIndex = 30313;

	class WaterConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig*>
	{
	public:
		static ::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig** StaticGet_s_CachedConfig()
		{
			return (::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig**)Il2CppClass::FromTypeDefinitionIndex(WaterConfig_TypeDefinitionIndex)->GetStaticField(0x23FF0);
		}
		::UnityEngine::GameObject* OceanFFTBakeData; // 0x18
		::UnityEngine::Vector2 WaveScale; // 0x20
		::System::Single WaveMapSize; // 0x28
		::System::Single NormalScale; // 0x2C
		::System::Single TimeScale; // 0x30
		::System::Single WindAngle; // 0x34
		::UnityEngine::Texture2D* DetailNoramalMap; // 0x38
		::System::Single DetailNormalMapSize; // 0x40
		::System::Single DetailNormalMapSpeed; // 0x44
		::System::Single DetailNormalScale; // 0x48
		::UnityEngine::Color ShallowWaterColor; // 0x4C
		::UnityEngine::Color DeepWaterColor; // 0x5C
		::System::Single WaterDensityForColor; // 0x6C
		::System::Single WaterDensityForRefraction; // 0x70
		::UnityEngine::Color ScatteringColor; // 0x74
		::System::Single IndirectScateringIntensity; // 0x84
		::System::Single ScateringPow; // 0x88
		::System::Single Smothness; // 0x8C
		::System::Single SpecularOffset; // 0x90
		::System::Single SpecularDetailNormalEnhance; // 0x94
		::UnityEngine::Cubemap* ReflectionCube; // 0x98
		::System::Single ReflectSmothness; // 0xA0
		::UnityEngine::Texture2D* FoamNoiseTexture; // 0xA8
		::System::Single FoamNoiseSize; // 0xB0
		::System::Single EdgeFoamRange; // 0xB4
		::System::Single FoamRange; // 0xB8
		::System::Single FoamFade; // 0xBC
		::System::Single FoamIntensity; // 0xC0
		::System::Single WetnessHeightOffset; // 0xC4
		::System::Single WetnessFade; // 0xC8
		::System::Single WetnessIntensity; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::WaterConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WATERCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
