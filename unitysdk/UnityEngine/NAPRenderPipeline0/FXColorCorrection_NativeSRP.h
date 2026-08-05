#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1EDE2C70)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EDE2370)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISLUTOVERRIDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1EDE2230)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1EDE23F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISUBERCOLORCORRECTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x1EDE2310)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDE2B70)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE2400)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FXColorCorrection_NativeSRP_TypeDefinitionIndex = 6089;

	class FXColorCorrection_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::FloatParameter* postExposure; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contrast; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation; // 0x48
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* gamma; // 0x50
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lutInvert; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lutToneColors; // 0x60
		::UnityEngine::NAPRenderPipeline0::ColorParameter* lutToneA; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* lutToneB; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lutMiddlePoint; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lutSoftness; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* desaturate; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invert; // 0x90
		::UnityEngine::NAPRenderPipeline0::BoolParameter* toneColors; // 0x98
		::UnityEngine::NAPRenderPipeline0::ColorParameter* toneA; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* toneB; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* middlePoint; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* softness; // 0xB8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFogMaskPassOn; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxColorSaturation; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* giIntensity; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* emissionIntensity; // 0xD8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scenePostExposure; // 0xE0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overrideSceneKodamaGIParams; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* kodamaDynamicGIIntensity; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blurAmount; // 0xF8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* justControlParticleLight; // 0x100
		::UnityEngine::NAPRenderPipeline0::FloatParameter* localLightMultiplyIntensity; // 0x108
		::UnityEngine::NAPRenderPipeline0::FloatParameter* localLightThreadHold; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsLUTOverrideActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISLUTOVERRIDEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsUberColorCorrectionActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISUBERCOLORCORRECTIONACTIVE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXCOLORCORRECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
