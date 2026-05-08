#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FXFog_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FXFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE6C00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXFog_TypeDefinitionIndex = 29877;

	class FXFog : public ::UnityEngine::NAPRenderPipeline0::FXFog_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* PPFogEnable; // 0xA0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* PPFogStartDistance; // 0xA8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* PPFogEndDistance; // 0xB0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* PPFogEnd2Distance; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* PPFogColor; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* PPFogMaxDensity; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxFogIntensityForSceneAndChar; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxFogIntensityScaleForChar; // 0xD8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFogFixFxFogFinalColorANotWork; // 0xE0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxFogKeepCharFogSameAsScene; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fxFogBlendWithFogCard; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXFOG__CTOR_OFFSET))(this);
		}
	};
}
