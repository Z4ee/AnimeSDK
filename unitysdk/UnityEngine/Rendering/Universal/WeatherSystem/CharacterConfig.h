#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem { class CharacterConfig_ToneMappingCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1B89A820)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89B420)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int CharacterConfig_TypeDefinitionIndex = 27349;

	class CharacterConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig*>
	{
	public:
		::System::Single characterLightTonemapStart; // 0x18
		::System::Single characterLightTonemapMax; // 0x1C
		::System::Single characterLightTonemapFaceAdd; // 0x20
		::System::Single characterLightTonemapFaceEnd; // 0x24
		::System::Boolean characterColorGradingEnabled; // 0x28
		::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig_ToneMappingCurve* charaToneMappingCurve; // 0x30
		::UnityEngine::Color mainLightColorForChara; // 0x38
		::System::Single mainLightIntensityForChara; // 0x48
		::System::Single mainLightShadowStrengthForChara; // 0x4C
		::System::Single rimGlowIntensityForChara; // 0x50
		::UnityEngine::Color ambient; // 0x54
		::UnityEngine::Color skinFrontTint; // 0x64
		::UnityEngine::Color frontTint; // 0x74
		::UnityEngine::Color skinSssTint; // 0x84
		::UnityEngine::Color sssTint; // 0x94
		::UnityEngine::Color skinShallowTint; // 0xA4
		::UnityEngine::Color shallowTint; // 0xB4
		::UnityEngine::Color skinShallowFadeTint; // 0xC4
		::UnityEngine::Color shallowFadeTint; // 0xD4
		::UnityEngine::Color skinShadowTint; // 0xE4
		::UnityEngine::Color shadowTint; // 0xF4
		::UnityEngine::Color skinShadowFadeTint; // 0x104
		::UnityEngine::Color shadowFadeTint; // 0x114
		::UnityEngine::Color ambientGradient; // 0x124
		::UnityEngine::Color outlineTint; // 0x134
		::UnityEngine::Color mainLightColorForCharaIndoor; // 0x144
		::System::Single mainLightIntensityForCharaIndoor; // 0x154
		::System::Single mainLightShadowStrengthForCharaIndoor; // 0x158
		::System::Single rimGlowIntensityForCharaIndoor; // 0x15C
		::UnityEngine::Color ambientIndoor; // 0x160
		::UnityEngine::Color skinFrontTintIndoor; // 0x170
		::UnityEngine::Color frontTintIndoor; // 0x180
		::UnityEngine::Color skinSssTintIndoor; // 0x190
		::UnityEngine::Color sssTintIndoor; // 0x1A0
		::UnityEngine::Color skinShadowTintIndoor; // 0x1B0
		::UnityEngine::Color shadowTintIndoor; // 0x1C0
		::UnityEngine::Color skinShallowFadeTintIndoor; // 0x1D0
		::UnityEngine::Color shallowFadeTintIndoor; // 0x1E0
		::UnityEngine::Color skinShallowTintIndoor; // 0x1F0
		::UnityEngine::Color shallowTintIndoor; // 0x200
		::UnityEngine::Color skinShadowFadeTintIndoor; // 0x210
		::UnityEngine::Color shadowFadeTintIndoor; // 0x220
		::UnityEngine::Color ambientGradientIndoor; // 0x230
		::System::Boolean useShadowTintAsOutlineIndoor; // 0x240
		::UnityEngine::Color outlineTintIndoor; // 0x244
		::System::Single characterPostExposure; // 0x254
		::System::Single contrast; // 0x258
		::System::Single saturation; // 0x25C
		::System::Single characterPostExposureIndoor; // 0x260
		::System::Single contrastIndoor; // 0x264
		::System::Single saturationIndoor; // 0x268
		::UnityEngine::Vector4 lift; // 0x26C
		::UnityEngine::Vector4 gamma; // 0x27C
		::UnityEngine::Vector4 gain; // 0x28C
		::UnityEngine::Vector4 liftIndoor; // 0x29C
		::UnityEngine::Vector4 gammaIndoor; // 0x2AC
		::UnityEngine::Vector4 gainIndoor; // 0x2BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::CharacterConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
