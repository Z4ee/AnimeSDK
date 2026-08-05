#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EB5F9D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1EB5FA30)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5FA40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensDirt_NativeSRP_TypeDefinitionIndex = 6111;

	class LensDirt_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable; // 0x38
		::UnityEngine::NAPRenderPipeline0::FloatParameter* intensity; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSDIRT_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
