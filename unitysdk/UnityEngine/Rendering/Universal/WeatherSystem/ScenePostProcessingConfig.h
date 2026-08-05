#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class ScenePostProcessingConfig_ColorCurves; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1C458AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C458A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4590A0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int ScenePostProcessingConfig_TypeDefinitionIndex = 26956;

	class ScenePostProcessingConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig*>
	{
	public:
		::System::Boolean overrideVolumeConfig; // 0x18
		::System::Single ChannelMixer_redOutRedIn; // 0x1C
		::System::Single ChannelMixer_redOutGreenIn; // 0x20
		::System::Single ChannelMixer_redOutBlueIn; // 0x24
		::System::Single ChannelMixer_greenOutRedIn; // 0x28
		::System::Single ChannelMixer_greenOutGreenIn; // 0x2C
		::System::Single ChannelMixer_greenOutBlueIn; // 0x30
		::System::Single ChannelMixer_blueOutRedIn; // 0x34
		::System::Single ChannelMixer_blueOutGreenIn; // 0x38
		::System::Single ChannelMixer_blueOutBlueIn; // 0x3C
		::UnityEngine::Color ColorAdjustments_colorFilter; // 0x40
		::System::Single ColorAdjustments_contrast; // 0x50
		::System::Single ColorAdjustments_hueShift; // 0x54
		::System::Single ColorAdjustments_saturation; // 0x58
		::System::Boolean WhiteBalance_active; // 0x5C
		::System::Single WhiteBalance_temperature; // 0x60
		::System::Single WhiteBalance_tint; // 0x64
		::UnityEngine::Vector4 LiftGammaGain_lift; // 0x68
		::UnityEngine::Vector4 LiftGammaGain_gamma; // 0x78
		::UnityEngine::Vector4 LiftGammaGain_gain; // 0x88
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_shadows; // 0x98
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_midtones; // 0xA8
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_highlights; // 0xB8
		::System::Single ShadowsMidtonesHighlights_shadowsStart; // 0xC8
		::System::Single ShadowsMidtonesHighlights_shadowsEnd; // 0xCC
		::System::Single ShadowsMidtonesHighlights_highlightsStart; // 0xD0
		::System::Single ShadowsMidtonesHighlights_highlightsEnd; // 0xD4
		::UnityEngine::Color SplitTonings_shadows; // 0xD8
		::UnityEngine::Color splitToning_highlights; // 0xE8
		::System::Single splitToning_balance; // 0xF8
		::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig_ColorCurves* ColorCurve; // 0x100
		::UnityEngine::Texture* lerpResult_Master; // 0x108
		::UnityEngine::Texture* lerpResult_Red; // 0x110
		::UnityEngine::Texture* lerpResult_Green; // 0x118
		::UnityEngine::Texture* lerpResult_Blue; // 0x120
		::UnityEngine::Texture* lerpResult_HueVsHue; // 0x128
		::UnityEngine::Texture* lerpResult_HueVsSat; // 0x130
		::UnityEngine::Texture* lerpResult_satVsSat; // 0x138
		::UnityEngine::Texture* lerpResult_luVsSat; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::TextureFormat GetTextureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_GETTEXTUREFORMAT_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::ScenePostProcessingConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}
