#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D10E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Culling_TypeDefinitionIndex = 26314;

	class Culling : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* EnableHizCulling; // 0x38
		::UnityEngine::NAPRenderPipeline0::BoolParameter* EnableShadowHizCulling; // 0x40
		::UnityEngine::NAPRenderPipeline0::BoolParameter* ForceUseSMAA; // 0x48
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineOverrideGlobalConfig; // 0x50
		::UnityEngine::NAPRenderPipeline0::BoolParameter* BlitOutlineBeforeTransparent; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineEnableMultiLayer; // 0x60
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineUseSingleColor; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineSingleColor; // 0x70
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineSingleColor1; // 0x78
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineSingleColor2; // 0x80
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineDisable; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineFillInner; // 0x90
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineFillInnerBehindScene; // 0x98
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineFillInnerColor; // 0xA0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineFillInnerColorIntensity; // 0xA8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineThickness; // 0xB0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineFlicker; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CULLING__CTOR_OFFSET))(this);
		}
	};
}
