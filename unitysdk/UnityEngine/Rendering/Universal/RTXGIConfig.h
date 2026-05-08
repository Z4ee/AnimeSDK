#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG_MARKTEXTURECURVEASDIRTY_OFFSET UNITYSDK_OFFSET(0x1914B350)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1914B500)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXGIConfig_TypeDefinitionIndex = 29978;

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
		::System::Single RTXStylized2; // 0x3C
		::System::Single ExtraEmissionScale2; // 0x40
		::System::Single ExtraEmissionScaleHighLum2; // 0x44
		::UnityEngine::Vector2 ExtraEmissionLumRange2; // 0x48
		::UnityEngine::Vector2 ExtraEmissionDistRange2; // 0x50
		::System::Single ExtraEmissionScaleSpecular2; // 0x58
		::System::Single AddLocallightScale2; // 0x5C
		::UnityEngine::Vector2 AddLocallightDist2; // 0x60
		::System::Single AddLocallightExtraScale2; // 0x68
		::UnityEngine::Vector2 AddLocallightExtraDist2; // 0x6C
		::UnityEngine::Vector2 HitSatThreshold2; // 0x74
		::System::Single HitSatBoost2; // 0x7C
		::UnityEngine::Vector2 HitValThreshold2; // 0x80
		::System::Single HitValBoost2; // 0x88
		::UnityEngine::Vector2 SpecularHitSatThreshold2; // 0x8C
		::System::Single SpecularHitSatBoost2; // 0x94
		::UnityEngine::Vector2 SpecularHitValThreshold2; // 0x98
		::System::Single SpecularHitValBoost2; // 0xA0
		::System::Single HitScatterScale2; // 0xA4
		::System::Single SpecularScatterScale2; // 0xA8
		::System::Single EmissionScatterScale2; // 0xAC
		::UnityEngine::Vector2 SatThreshold2; // 0xB0
		::System::Single SatBoost2; // 0xB8
		::UnityEngine::Vector2 ValThreshold2; // 0xBC
		::System::Single ValBoost2; // 0xC4
		::UnityEngine::Vector2 SpecularSatThreshold2; // 0xC8
		::System::Single SpecularSatBoost2; // 0xD0
		::UnityEngine::Vector2 SpecularValThreshold2; // 0xD4
		::System::Single SpecularValBoost2; // 0xDC
		::UnityEngine::Vector2 ReceiverSatRange2; // 0xE0
		::System::Single ReceiverSatMinMultiplier2; // 0xE8
		::System::Single ReceiverDownDotThreshold2; // 0xEC
		::System::Single ReceiverCameraZDiffThreshold2; // 0xF0
		::System::Single ReceiverDownDotScale2; // 0xF4
		::System::Boolean rtxColorAdj; // 0xF8
		::UnityEngine::Vector4 rtxlift; // 0xFC
		::UnityEngine::Vector4 rtxgamma; // 0x10C
		::UnityEngine::Vector4 rtxgain; // 0x11C
		::System::Single redOutRedIn; // 0x12C
		::System::Single redOutGreenIn; // 0x130
		::System::Single redOutBlueIn; // 0x134
		::System::Single greenOutRedIn; // 0x138
		::System::Single greenOutGreenIn; // 0x13C
		::System::Single greenOutBlueIn; // 0x140
		::System::Single blueOutRedIn; // 0x144
		::System::Single blueOutGreenIn; // 0x148
		::System::Single blueOutBlueIn; // 0x14C
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x150
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x158
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x160
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x168
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x170
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x178
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x180
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0x188
		::UnityEngine::Color colorFilter; // 0x190
		::System::Single postExposure; // 0x1A0
		::System::Single contrast; // 0x1A4
		::System::Single hueShift; // 0x1A8
		::System::Single saturation; // 0x1AC
		::System::Single desaturate; // 0x1B0
		::UnityEngine::Texture* Lut; // 0x1B8

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
