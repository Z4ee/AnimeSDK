#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B185D20)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B185960)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B185990)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B185C20)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1859A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapContactShadow_NativeSRP_TypeDefinitionIndex = 6102;

	class NapContactShadow_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enabled; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* sampleCount; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* worldSpaceLength; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCONTACTSHADOW_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
