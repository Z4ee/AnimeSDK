#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class SampleCountLevelParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B3C22C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B3C1D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B3C1D40)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C21C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C1D50)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int AmplifyOcclusion_NativeSRP_TypeDefinitionIndex = 5810;

	class AmplifyOcclusion_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::SampleCountLevelParameter* sampleCount; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x40
		::UnityEngine::NAPRenderPipeline0::ColorParameter* tint; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* radius; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* powerExponent; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* bias; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* thickness; // 0x68
		::UnityEngine::NAPRenderPipeline0::BoolParameter* downSample; // 0x70
		::UnityEngine::NAPRenderPipeline0::BoolParameter* cacheAware; // 0x78
		::UnityEngine::NAPRenderPipeline0::BoolParameter* blurEnabled; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* blurRadius; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* blurPasses; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blurSharpness; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
