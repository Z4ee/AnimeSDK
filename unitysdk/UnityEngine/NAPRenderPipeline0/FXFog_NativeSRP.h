#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFB0040)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AFB0080)
#define UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFAFC60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FXFog_NativeSRP_TypeDefinitionIndex = 6103;

	class FXFog_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFogOverrideCustomData; // 0x38
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFog; // 0x40
		::UnityEngine::NAPRenderPipeline0::FloatParameter* fxFogStart; // 0x48
		::UnityEngine::NAPRenderPipeline0::ColorParameter* fxFogStartColor; // 0x50
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* fxFogDistance; // 0x58
		::UnityEngine::NAPRenderPipeline0::ColorParameter* fxFogEndColor; // 0x60
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* fxFogDistance2; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* fxFogFinalColor; // 0x70
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFogForCharacter; // 0x78
		::UnityEngine::NAPRenderPipeline0::FloatParameter* fxFogStartForChar; // 0x80
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* fxFogDistanceForChar; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxFogIntensityForSky; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxVolumetricFogIntensity; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FXFOG_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
