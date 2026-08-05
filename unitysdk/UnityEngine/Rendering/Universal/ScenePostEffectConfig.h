#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTEFFECTCONFIG_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1DDFF420)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF490)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScenePostEffectConfig_TypeDefinitionIndex = 27655;

	class ScenePostEffectConfig : public ::System::Object
	{
	public:
		::System::Boolean overrideVolumeConfig; // 0x10
		::System::Boolean overrideChannelMixer; // 0x11
		::System::Single ChannelMixer_redOutRedIn; // 0x14
		::System::Single ChannelMixer_redOutGreenIn; // 0x18
		::System::Single ChannelMixer_redOutBlueIn; // 0x1C
		::System::Single ChannelMixer_greenOutRedIn; // 0x20
		::System::Single ChannelMixer_greenOutGreenIn; // 0x24
		::System::Single ChannelMixer_greenOutBlueIn; // 0x28
		::System::Single ChannelMixer_blueOutRedIn; // 0x2C
		::System::Single ChannelMixer_blueOutGreenIn; // 0x30
		::System::Single ChannelMixer_blueOutBlueIn; // 0x34
		::System::Boolean overrideColorAdjustments; // 0x38
		::UnityEngine::Color ColorAdjustments_colorFilter; // 0x3C
		::System::Single ColorAdjustments_contrast; // 0x4C
		::System::Single ColorAdjustments_hueShift; // 0x50
		::System::Single ColorAdjustments_saturation; // 0x54
		::System::Single GBufferOnlySaturation; // 0x58
		::System::Boolean overrideWhiteBalance; // 0x5C
		::System::Boolean WhiteBalance_active; // 0x5D
		::System::Single WhiteBalance_temperature; // 0x60
		::System::Single WhiteBalance_tint; // 0x64
		::System::Boolean overrideLiftGammaGain; // 0x68
		::UnityEngine::Vector4 LiftGammaGain_lift; // 0x6C
		::UnityEngine::Vector4 LiftGammaGain_gamma; // 0x7C
		::UnityEngine::Vector4 LiftGammaGain_gain; // 0x8C
		::System::Boolean overrideShadowsMidtonesHighlights; // 0x9C
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_shadows; // 0xA0
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_midtones; // 0xB0
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_highlights; // 0xC0
		::System::Single ShadowsMidtonesHighlights_shadowsStart; // 0xD0
		::System::Single ShadowsMidtonesHighlights_shadowsEnd; // 0xD4
		::System::Single ShadowsMidtonesHighlights_highlightsStart; // 0xD8
		::System::Single ShadowsMidtonesHighlights_highlightsEnd; // 0xDC
		::System::Boolean overrideSplitToning; // 0xE0
		::UnityEngine::Color SplitTonings_shadows; // 0xE4
		::UnityEngine::Color splitToning_highlights; // 0xF4
		::System::Single splitToning_balance; // 0x104
		::System::Boolean overrideColorCurve; // 0x108
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_master; // 0x110
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_red; // 0x118
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_green; // 0x120
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_blue; // 0x128
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_hueVsHue; // 0x130
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_hueVsSat; // 0x138
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_satVsSat; // 0x140
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_lumVsSat; // 0x148
		::System::Boolean overrideExposureConfig; // 0x150
		::System::Boolean EnableAutoExposure; // 0x151
		::System::Single CharacterAutoExposureIntensity; // 0x154
		::System::Single AutoExposureCompensation; // 0x158
		::System::Single FallbackConstantExposureCompensation; // 0x15C
		::UnityEngine::Texture* lerpResult_Master; // 0x160
		::UnityEngine::Texture* lerpResult_Red; // 0x168
		::UnityEngine::Texture* lerpResult_Green; // 0x170
		::UnityEngine::Texture* lerpResult_Blue; // 0x178
		::UnityEngine::Texture* lerpResult_HueVsHue; // 0x180
		::UnityEngine::Texture* lerpResult_HueVsSat; // 0x188
		::UnityEngine::Texture* lerpResult_satVsSat; // 0x190
		::UnityEngine::Texture* lerpResult_luVsSat; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::TextureFormat GetTextureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTEFFECTCONFIG_GETTEXTUREFORMAT_OFFSET))();
		}
	};
}
