#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1C457F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG_GENERATERAINANIMTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C457D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C458980)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int RainConfig_TypeDefinitionIndex = 27175;

	class RainConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig*>
	{
	public:
		::UnityEngine::Texture* rainDropTexture; // 0x18
		::UnityEngine::Color rainDropColor; // 0x20
		::System::Single rainDropMultiplyLightColor; // 0x30
		::System::Int32 rainDropBatchCount; // 0x34
		::System::Single rainDropSpeed; // 0x38
		::System::Single rainDropMaxHeight; // 0x3C
		::System::Single rainDropMinHeight; // 0x40
		::UnityEngine::Vector2 rainDropSizeX; // 0x44
		::UnityEngine::Vector2 rainDropSizeY; // 0x4C
		::System::Single rainDropAngle; // 0x54
		::System::Single rainDropAngleIntensity; // 0x58
		::System::Single rainDropOuterCircleRadius; // 0x5C
		::System::Single rainDropInnerCircleRadius; // 0x60
		::System::Boolean EnableScreenRainDrop; // 0x64
		::UnityEngine::Texture2D* ScreenRainDropTexture; // 0x68
		::UnityEngine::AnimationCurve* ScreenRainDropAnimCurve; // 0x70
		::UnityEngine::Texture2D* ScreenRainDropAnimTexture; // 0x78
		::System::Single ScreenRainDropSpeed; // 0x80
		::System::Single ScreenRainDropDistortIntensity; // 0x84
		::System::Single ScreenRainDropBrightness; // 0x88
		::System::Single ScreenRainDropColorShift; // 0x8C
		::UnityEngine::Texture* rainFlowTexture; // 0x90
		::System::Single rainFlowTilling; // 0x98
		::System::Single rainFlowSpeed; // 0x9C
		::System::Single rainFlowIntensity; // 0xA0
		::UnityEngine::Texture* rainTexture2; // 0xA8
		::System::Single rippleTextureTilling; // 0xB0
		::System::Single rippleSpeed; // 0xB4
		::System::Single rippleDensity; // 0xB8
		::System::Single rippleFoamIntensity; // 0xBC
		::UnityEngine::Texture* rainSplashTexture; // 0xC0
		::UnityEngine::Texture* rainSplashTexture2; // 0xC8
		::UnityEngine::Texture* rainSplashTexture3; // 0xD0
		::UnityEngine::Color rainSplashColor; // 0xD8
		::UnityEngine::Vector2 rainSplashIntensityRange; // 0xE8
		::UnityEngine::Vector2 rainSplashSizeRange; // 0xF0
		::System::Single rainSplashPlayTime; // 0xF8
		::System::Int32 rainSplashCount; // 0xFC
		::System::Single rainSplashRange; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void GenerateRainAnimTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG_GENERATERAINANIMTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::RainConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_RAINCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
