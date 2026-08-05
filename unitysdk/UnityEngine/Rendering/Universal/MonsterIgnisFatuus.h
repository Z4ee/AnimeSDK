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

#define UNITYENGINE_RENDERING_UNIVERSAL_MONSTERIGNISFATUUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79EFE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonsterIgnisFatuus_TypeDefinitionIndex = 27737;

	class MonsterIgnisFatuus : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* monsterIgnisFatuusActive; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* monsterIgnisFatuusDownSample; // 0x40
		::UnityEngine::NAPRenderPipeline0::BoolParameter* monsterIgnisFatuusSelfMask; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDepthMaskOffset; // 0x50
		::UnityEngine::Rendering::Universal::BlendModesParameter* monsterIgnisFatuusColorBlendMode; // 0x58
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useMonsterIgnisFatuusColorTextureAlpha; // 0x60
		::UnityEngine::NAPRenderPipeline0::ColorParameter* monsterIgnisFatuusColor; // 0x68
		::UnityEngine::NAPRenderPipeline0::TextureParameter* monsterIgnisFatuusColorTexture; // 0x70
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusColorTextureUVScale; // 0x78
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusColorTextureUVSpeed; // 0x80
		::UnityEngine::NAPRenderPipeline0::TextureParameter* monsterIgnisFatuusNoiseTexture; // 0x88
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusNoiseTextureUVScale; // 0x90
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusNoiseTextureUVSpeed; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDistortionIntensity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDistortionOffset; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusBlurPow; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusColorDistortionIntensity; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* monsterIgnisFatuusColor2; // 0xC0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* monsterIgnisFatuusColorTexture2; // 0xC8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusColorTextureUVScale2; // 0xD0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusColorTextureUVSpeed2; // 0xD8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* monsterIgnisFatuusNoiseTexture2; // 0xE0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusNoiseTextureUVScale2; // 0xE8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* monsterIgnisFatuusNoiseTextureUVSpeed2; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDistortionIntensity2; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDistortionOffset2; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusBlurPow2; // 0x108
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusColorDistortionIntensity2; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusSoftEdgePow; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusSoftEdgeRange; // 0x120
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDisappearStart; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusDisappearEnd; // 0x130
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusFadeIn; // 0x138
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* monsterIgnisFatuusFadeOut; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONSTERIGNISFATUUS__CTOR_OFFSET))(this);
		}
	};
}
