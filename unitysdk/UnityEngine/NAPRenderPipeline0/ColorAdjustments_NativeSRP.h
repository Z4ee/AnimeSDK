#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B0C0220)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B0BFA50)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B0BFC50)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C0120)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BFC60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorAdjustments_NativeSRP_TypeDefinitionIndex = 6078;

	class ColorAdjustments_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorFilter; // 0x38
		::UnityEngine::NAPRenderPipeline0::FloatParameter* postExposure; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contrast; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hueShift; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* desaturate; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skySaturation; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skyContrast; // 0x70
		::UnityEngine::NAPRenderPipeline0::BoolParameter* keepVolumetricFogInFrontOfTransparent; // 0x78
		::UnityEngine::NAPRenderPipeline0::BoolParameter* applyLutToSkybox; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORADJUSTMENTS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
