#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1AFBC5C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFBC1A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AFBC220)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFBC4C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBC230)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShadowsMidtonesHighlights_NativeSRP_TypeDefinitionIndex = 6079;

	class ShadowsMidtonesHighlights_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* shadows; // 0x38
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* midtones; // 0x40
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* highlights; // 0x48
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* shadowsStart; // 0x50
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* shadowsEnd; // 0x58
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* highlightsStart; // 0x60
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* highlightsEnd; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADOWSMIDTONESHIGHLIGHTS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
