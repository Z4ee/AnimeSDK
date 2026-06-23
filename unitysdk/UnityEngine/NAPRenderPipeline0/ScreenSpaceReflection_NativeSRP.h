#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class SsrQualityParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1DF5B630)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1DF5B4F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1DF5B520)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5B530)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5B1F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenSpaceReflection_NativeSRP_TypeDefinitionIndex = 6099;

	class ScreenSpaceReflection_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enabled; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* depthBufferThickness; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* screenFadeDistance; // 0x50
		::UnityEngine::NAPRenderPipeline0::SsrQualityParameter* quality; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overrideGlobalPlanarReflectionConfig; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* planarReflectionBlurAmount; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEREFLECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
