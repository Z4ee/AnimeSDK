#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFB8130)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AFB8150)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB7F60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenSpacePlanarReflection_NativeSRP_TypeDefinitionIndex = 6101;

	class ScreenSpacePlanarReflection_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* Enabled; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* FadeDistance; // 0x40
		::UnityEngine::NAPRenderPipeline0::FloatParameter* StretchScale; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* ScreenStretchThreshold; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACEPLANARREFLECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
