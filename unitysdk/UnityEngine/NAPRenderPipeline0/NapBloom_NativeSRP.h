#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NapBloomFlareParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NapBloomQualityParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1D4F80C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISACTIVEFORHDR_OFFSET UNITYSDK_OFFSET(0x1D4F7730)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D4F76E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISSECONDARYGLAREACTIVE_OFFSET UNITYSDK_OFFSET(0x1D4F7780)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D4F77B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F77C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapBloom_NativeSRP_TypeDefinitionIndex = 6110;

	class NapBloom_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareThreshold; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareThresholdForHDR; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareScaler; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareScalerForHDR; // 0x50
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* blurLevelWeights; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* secondaryGlareThreshold; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* secondaryGlareContrast; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* secondaryGlareWeight; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* secondaryBlurRadius; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareIntensity; // 0x80
		::UnityEngine::NAPRenderPipeline0::NapBloomQualityParameter* quality; // 0x88
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* blurLevelBufferHeights; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* secondaryBlurLevelBufferHeight; // 0x98
		::UnityEngine::NAPRenderPipeline0::TextureParameter* dirtTexture; // 0xA0
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* dirtIntensity; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* HasExtraDownsample; // 0xB0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableSpriteFlare; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* flareThreshold; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* areaThreshold; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturate; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* randomize; // 0xD8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sizeClamp; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensityClamp; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* iterationNum; // 0xF0
		::UnityEngine::NAPRenderPipeline0::NapBloomFlareParameter* flareProfile; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsActiveForHDR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISACTIVEFORHDR_OFFSET))(this);
		}

		::System::Boolean IsSecondaryGlareActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISSECONDARYGLAREACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOM_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
