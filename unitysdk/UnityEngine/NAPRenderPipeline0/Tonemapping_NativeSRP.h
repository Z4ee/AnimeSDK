#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TonemappingModeParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1B661840)
#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B661420)
#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B661440)
#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B661740)
#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B661450)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Tonemapping_NativeSRP_TypeDefinitionIndex = 6073;

	class Tonemapping_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TonemappingModeParameter* mode; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* toeStrength; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* toeLength; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* shoulderStrength; // 0x50
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* shoulderLength; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* shoulderAngle; // 0x60
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* customGamma; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPING_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
