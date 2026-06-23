#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatRangeParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::Rendering::Universal { class DownSampleParameter; }
namespace UnityEngine::Rendering::Universal { class SampleDistanceModeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D4E74B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D4E7550)
#define UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E7590)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RadialBlur_TypeDefinitionIndex = 27218;

	class RadialBlur : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::Universal::DownSampleParameter* downSample; // 0x38
		::UnityEngine::Rendering::Universal::SampleDistanceModeParameter* sampleDistanceMode; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* sampleCount; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* radius; // 0x50
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* centerPosition; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* noiseScale; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* threshold; // 0x68
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useCircleRange; // 0x70
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* circleRange; // 0x78
		::UnityEngine::NAPRenderPipeline0::BoolParameter* forceActiveOverlayDistortion; // 0x80
		::UnityEngine::NAPRenderPipeline0::BoolParameter* canBeDisabledByGlobalConfig; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useBloomMode; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareIntensity; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareThreshold; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareCenterFadeRange; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareFadeShapeRatio; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* BloomModeRadiusAdd; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* BloomModeSampleCountAdd; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RADIALBLUR_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
