#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG_MARKTEXTURECURVEASDIRTY_OFFSET UNITYSDK_OFFSET(0x1C51C610)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51C7A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXGIConfig_TypeDefinitionIndex = 27584;

	class RTXGIConfig : public ::System::Object
	{
	public:
		::System::Single Boost; // 0x10
		::System::Single MultibounceScale; // 0x14
		::System::Single MultiBounceFarDistScale; // 0x18
		::System::Single MultiBouncelndoorScale; // 0x1C
		::System::Single MultiBounceScaleMaxDist; // 0x20
		::System::Single SkyDiffuseScale; // 0x24
		::System::Single SkySpecularScale; // 0x28
		::System::Single LightMapBoost; // 0x2C
		::System::Single AOIntensity; // 0x30
		::System::Single AOLength; // 0x34
		::System::Single AOMinOcc; // 0x38
		::System::Single AODirectLightPreserve2; // 0x3C
		::System::Boolean AOHybridOffsetEnable; // 0x40
		::System::Single AORayBias; // 0x44
		::System::Single AODistanceBiasScale; // 0x48
		::System::Single RTXStylized2; // 0x4C
		::UnityEngine::Vector4 RTXWaterParams; // 0x50
		::System::Single ExtraEmissionScale2; // 0x60
		::System::Single ExtraEmissionScaleHighLum2; // 0x64
		::UnityEngine::Vector2 ExtraEmissionLumRange2; // 0x68
		::UnityEngine::Vector2 ExtraEmissionDistRange2; // 0x70
		::System::Single ExtraEmissionScaleSpecular2; // 0x78
		::System::Single AddLocallightScale2; // 0x7C
		::UnityEngine::Vector2 AddLocallightDist2; // 0x80
		::System::Single AddLocallightExtraScale2; // 0x88
		::UnityEngine::Vector2 AddLocallightExtraDist2; // 0x8C
		::UnityEngine::Vector2 HitSatThreshold2; // 0x94
		::System::Single HitSatBoost2; // 0x9C
		::UnityEngine::Vector2 HitValThreshold2; // 0xA0
		::System::Single HitValBoost2; // 0xA8
		::UnityEngine::Vector2 SpecularHitSatThreshold2; // 0xAC
		::System::Single SpecularHitSatBoost2; // 0xB4
		::UnityEngine::Vector2 SpecularHitValThreshold2; // 0xB8
		::System::Single SpecularHitValBoost2; // 0xC0
		::System::Single HitScatterScale2; // 0xC4
		::System::Single SpecularScatterScale2; // 0xC8
		::System::Single EmissionScatterScale2; // 0xCC
		::UnityEngine::Vector2 SatThreshold2; // 0xD0
		::System::Single SatBoost2; // 0xD8
		::UnityEngine::Vector2 ValThreshold2; // 0xDC
		::System::Single ValBoost2; // 0xE4
		::UnityEngine::Vector2 SpecularSatThreshold2; // 0xE8
		::System::Single SpecularSatBoost2; // 0xF0
		::UnityEngine::Vector2 SpecularValThreshold2; // 0xF4
		::System::Single SpecularValBoost2; // 0xFC
		::UnityEngine::Vector2 ReceiverSatRange2; // 0x100
		::System::Single ReceiverSatMinMultiplier2; // 0x108
		::System::Single ReceiverDownDotThreshold2; // 0x10C
		::System::Single ReceiverCameraZDiffThreshold2; // 0x110
		::System::Single ReceiverDownDotScale2; // 0x114
		::System::Boolean rtxColorAdj; // 0x118
		::UnityEngine::Vector4 rtxlift; // 0x11C
		::UnityEngine::Vector4 rtxgamma; // 0x12C
		::UnityEngine::Vector4 rtxgain; // 0x13C
		::System::Single redOutRedIn; // 0x14C
		::System::Single redOutGreenIn; // 0x150
		::System::Single redOutBlueIn; // 0x154
		::System::Single greenOutRedIn; // 0x158
		::System::Single greenOutGreenIn; // 0x15C
		::System::Single greenOutBlueIn; // 0x160
		::System::Single blueOutRedIn; // 0x164
		::System::Single blueOutGreenIn; // 0x168
		::System::Single blueOutBlueIn; // 0x16C
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x170
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x178
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x180
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x188
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x190
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x198
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0x1A8
		::UnityEngine::Color colorFilter; // 0x1B0
		::System::Single postExposure; // 0x1C0
		::System::Single contrast; // 0x1C4
		::System::Single hueShift; // 0x1C8
		::System::Single saturation; // 0x1CC
		::System::Single desaturate; // 0x1D0
		::UnityEngine::Texture* Lut; // 0x1D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG__CTOR_OFFSET))(this);
		}

		::System::Void MarkTextureCurveAsDirty(::System::Int32 curveId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG_MARKTEXTURECURVEASDIRTY_OFFSET))(this, curveId);
		}
	};
}
