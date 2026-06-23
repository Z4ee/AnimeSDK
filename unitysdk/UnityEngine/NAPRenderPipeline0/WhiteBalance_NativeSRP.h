#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1D58BFC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D58BC60)
#define UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D58BCB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D58BEC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58BCC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int WhiteBalance_NativeSRP_TypeDefinitionIndex = 6092;

	class WhiteBalance_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* temperature; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* tint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_WHITEBALANCE_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
