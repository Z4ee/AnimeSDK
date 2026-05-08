#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NoInterpClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NoInterpMinFloatParameter; }
namespace UnityEngine::Rendering::Universal { class CascadePartitionSplitParameter; }
namespace UnityEngine::Rendering::Universal { class MainLightShadowQualityParameter; }
namespace UnityEngine::Rendering::Universal { class OtherLightShadowQualityParameter; }
namespace UnityEngine::Rendering::Universal { class SimulatingPlatformParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTING_INITNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1B36C580)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36B960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Lighting_TypeDefinitionIndex = 30131;

	class Lighting : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* shadowBlurRadius; // 0x38
		::UnityEngine::NAPRenderPipeline0::BoolParameter* disableMainLightShadow; // 0x40
		::UnityEngine::NAPRenderPipeline0::BoolParameter* bakeShadowMask; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cascade0ToNextBlendIntensity; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cascade1ToNextBlendIntensity; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cascade2ToNextBlendIntensity; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cascade3ToNextBlendIntensity; // 0x68
		::Il2CppArray<::System::Single>* m_CascadeShadowSplits; // 0x70
		::UnityEngine::NAPRenderPipeline0::NoInterpMinFloatParameter* maxShadowDistance; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* outOfRangeLightStrength; // 0x80
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lockMaxShadowDistance; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* disableShadowMapCache; // 0x90
		::UnityEngine::NAPRenderPipeline0::BoolParameter* disableShadowCasterHiz; // 0x98
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lockSplitByMetric; // 0xA0
		::UnityEngine::NAPRenderPipeline0::NoInterpClampedIntParameter* cascadeShadowSplitCount; // 0xA8
		::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* cascadeShadowSplit0; // 0xB0
		::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* cascadeShadowSplit1; // 0xB8
		::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* cascadeShadowSplit2; // 0xC0
		::UnityEngine::Rendering::Universal::MainLightShadowQualityParameter* mainLightShadowResolution; // 0xC8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* isContactShadowOn; // 0xD0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overridePunctualLightShadowResolutionConfig; // 0xD8
		::UnityEngine::Rendering::Universal::OtherLightShadowQualityParameter* otherLightShadowResolution; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* localLightShadowSampleCount; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* localLightShadowRadius; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* punctualLightShadowStrength; // 0xF8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableCustomMaxLightCount; // 0x100
		::UnityEngine::NAPRenderPipeline0::NoInterpClampedIntParameter* maxLocalLightCount; // 0x108
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x110
		::UnityEngine::NAPRenderPipeline0::FloatParameter* additionalLightsDiffuseOnlyDistThreshold; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* localLightLodBiasMultiply; // 0x120
		::UnityEngine::NAPRenderPipeline0::BoolParameter* disableLocalLightShadowMapCached; // 0x128
		::UnityEngine::Rendering::Universal::SimulatingPlatformParameter* disableLocalLightShadowOnPlatform; // 0x130
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useConstantLodBiasValue; // 0x138
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableLocalLightGroundDiscard; // 0x140
		::UnityEngine::NAPRenderPipeline0::FloatParameter* localLightDiscardGround1Position; // 0x148
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* microShadowIntensity; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void InitNormalized(::System::Boolean normalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTING_INITNORMALIZED_OFFSET))(this, normalized);
		}
	};
}
