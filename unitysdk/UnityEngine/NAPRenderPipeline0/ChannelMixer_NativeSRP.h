#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1E8A9220)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E8A8CE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1E8A8E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9120)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8E30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ChannelMixer_NativeSRP_TypeDefinitionIndex = 6090;

	class ChannelMixer_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* redOutRedIn; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* redOutGreenIn; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* redOutBlueIn; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* greenOutRedIn; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* greenOutGreenIn; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* greenOutBlueIn; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blueOutRedIn; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blueOutGreenIn; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blueOutBlueIn; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHANNELMIXER_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
