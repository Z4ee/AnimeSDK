#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B0C1360)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B0C0FE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B0C1010)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1260)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1020)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GaussianBlur_NativeSRP_TypeDefinitionIndex = 6094;

	class GaussianBlur_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* downSample; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* radius; // 0x40
		::UnityEngine::NAPRenderPipeline0::TextureParameter* mask; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* maskTiling; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* maskRotation; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* maskDebug; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLUR_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
