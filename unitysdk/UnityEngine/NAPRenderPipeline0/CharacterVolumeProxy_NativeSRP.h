#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B2EF7C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2EF620)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EF4B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterVolumeProxy_NativeSRP_TypeDefinitionIndex = 6074;

	class CharacterVolumeProxy_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* indoorWeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP__CCTOR_OFFSET))();
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERVOLUMEPROXY_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
