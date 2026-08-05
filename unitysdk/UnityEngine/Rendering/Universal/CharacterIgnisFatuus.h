#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::Rendering::Universal { class BlendModesParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF0F40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterIgnisFatuus_TypeDefinitionIndex = 27216;

	class CharacterIgnisFatuus : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterIgnisFatuusActive; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* characterIgnisFatuusDownSample; // 0x40
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterIgnisFatuusSelfMask; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDepthMaskOffset; // 0x50
		::UnityEngine::Rendering::Universal::BlendModesParameter* characterIgnisFatuusColorBlendMode; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useIgnisFatuusColorTextureAlpha; // 0x60
		::UnityEngine::NAPRenderPipeline0::ColorParameter* characterIgnisFatuusColor; // 0x68
		::UnityEngine::NAPRenderPipeline0::TextureParameter* characterIgnisFatuusColorTexture; // 0x70
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusColorTextureUVScale; // 0x78
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusColorTextureUVSpeed; // 0x80
		::UnityEngine::NAPRenderPipeline0::TextureParameter* characterIgnisFatuusNoiseTexture; // 0x88
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusNoiseTextureUVScale; // 0x90
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusNoiseTextureUVSpeed; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDistortionIntensity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDistortionOffset; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusBlurPow; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusColorDistortionIntensity; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* characterIgnisFatuusColor2; // 0xC0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* characterIgnisFatuusColorTexture2; // 0xC8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusColorTextureUVScale2; // 0xD0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusColorTextureUVSpeed2; // 0xD8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* characterIgnisFatuusNoiseTexture2; // 0xE0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusNoiseTextureUVScale2; // 0xE8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterIgnisFatuusNoiseTextureUVSpeed2; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDistortionIntensity2; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDistortionOffset2; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusBlurPow2; // 0x108
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusColorDistortionIntensity2; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusSoftEdgePow; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusSoftEdgeRange; // 0x120
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDisappearStart; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusDisappearEnd; // 0x130
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusFadeIn; // 0x138
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterIgnisFatuusFadeOut; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERIGNISFATUUS__CTOR_OFFSET))(this);
		}
	};
}
