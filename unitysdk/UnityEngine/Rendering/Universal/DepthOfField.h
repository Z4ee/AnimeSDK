#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::Rendering::Universal { class DepthOfFieldModeParameter; }
namespace UnityEngine::Rendering::Universal { class DofDebugModeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C5AFE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1C5AFF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AFFD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfField_TypeDefinitionIndex = 27519;

	class DepthOfField : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* mode; // 0x38
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* gaussianStart; // 0x40
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* gaussianEnd; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* gaussianMaxRadius; // 0x50
		::UnityEngine::NAPRenderPipeline0::BoolParameter* highQualitySampling; // 0x58
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* focusDistance; // 0x60
		::UnityEngine::NAPRenderPipeline0::BoolParameter* discardNearCoc; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* aperture; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* focalLength; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* bladeCount; // 0x80
		::UnityEngine::NAPRenderPipeline0::BoolParameter* blurQualityHigh; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* bladeCurvature; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* bladeRotation; // 0x98
		::UnityEngine::NAPRenderPipeline0::BoolParameter* forceNoDefaultDof; // 0xA0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* doDofBeforeTransparent; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* doDofBeforeTransparentAfterVolumetricFog; // 0xB0
		::UnityEngine::Rendering::Universal::DofDebugModeParameter* debugMode; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
