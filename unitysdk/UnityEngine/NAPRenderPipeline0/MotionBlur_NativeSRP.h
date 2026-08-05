#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MotionBlurDirectionParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MotionBlurModeParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MotionBlurQualityParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1EBE5CF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EBE57D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1EBE5850)
#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBE5BF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE5860)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlur_NativeSRP_TypeDefinitionIndex = 6098;

	class MotionBlur_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::MotionBlurModeParameter* mode; // 0x38
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirectionParameter* direction; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* motionVectorBlendRadius; // 0x48
		::UnityEngine::NAPRenderPipeline0::MotionBlurQualityParameter* quality; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* clamp; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLUR_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
