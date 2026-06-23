#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERRAMPCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1B0B9760)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERRAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B9820)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideCharacterRampConfig_TypeDefinitionIndex = 27169;

	class OverrideCharacterRampConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig*>
	{
	public:
		::UnityEngine::Color skinFrontTint; // 0x18
		::UnityEngine::Color frontTint; // 0x28
		::UnityEngine::Color skinSssTint; // 0x38
		::UnityEngine::Color sssTint; // 0x48
		::UnityEngine::Color skinShallowTint; // 0x58
		::UnityEngine::Color shallowTint; // 0x68
		::UnityEngine::Color skinShallowFadeTint; // 0x78
		::UnityEngine::Color shallowFadeTint; // 0x88
		::UnityEngine::Color skinShadowTint; // 0x98
		::UnityEngine::Color shadowTint; // 0xA8
		::UnityEngine::Color skinShadowFadeTint; // 0xB8
		::UnityEngine::Color shadowFadeTint; // 0xC8
		::UnityEngine::Color ambientGradient; // 0xD8
		::UnityEngine::Color outlineTint; // 0xE8
		::UnityEngine::Color skinFrontTintIndoor; // 0xF8
		::UnityEngine::Color frontTintIndoor; // 0x108
		::UnityEngine::Color skinSssTintIndoor; // 0x118
		::UnityEngine::Color sssTintIndoor; // 0x128
		::UnityEngine::Color skinShadowTintIndoor; // 0x138
		::UnityEngine::Color shadowTintIndoor; // 0x148
		::UnityEngine::Color skinShallowFadeTintIndoor; // 0x158
		::UnityEngine::Color shallowFadeTintIndoor; // 0x168
		::UnityEngine::Color skinShallowTintIndoor; // 0x178
		::UnityEngine::Color shallowTintIndoor; // 0x188
		::UnityEngine::Color skinShadowFadeTintIndoor; // 0x198
		::UnityEngine::Color shadowFadeTintIndoor; // 0x1A8
		::UnityEngine::Color ambientGradientIndoor; // 0x1B8
		::UnityEngine::Color outlineTintIndoor; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERRAMPCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig* DoLerp(::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig* from, ::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig*, ::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDECHARACTERRAMPCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
