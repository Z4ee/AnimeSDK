#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D854550)
#define UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D8545D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D854310)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int UnsharpMask_NativeSRP_TypeDefinitionIndex = 6118;

	class UnsharpMask_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable; // 0x38
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* radius; // 0x40
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* amount; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* sampleCount; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* threshold; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* debugMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_UNSHARPMASK_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
