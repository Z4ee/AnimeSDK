#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GLITCH_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18FE6F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLITCH_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x18FE7050)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE7090)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Glitch_TypeDefinitionIndex = 30127;

	class Glitch : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glitchAngle; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rShift; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* gShift; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* bShift; // 0x50
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* noiseScale; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* noiseDistortion; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* distortionThreshold; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lineThresholdMin; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lineThresholdMax; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lineBrightness; // 0x80
		::UnityEngine::NAPRenderPipeline0::TextureParameter* texture; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* mask; // 0x90
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* maskTexTillingOffset; // 0x98
		::UnityEngine::NAPRenderPipeline0::BoolParameter* randomOpacity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* randomOpacityTillingOffset; // 0xA8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* randomOpacitySpeed; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* overrideMap3DColor; // 0xB8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterDistortionMaskOn; // 0xC0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchIntensity; // 0xC8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* glitchNoiseTex; // 0xD0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchNoiseTexSpeed; // 0xD8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchRand; // 0xE0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* glitchTex1; // 0xE8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* glitchTex1ScaleOffset; // 0xF0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchTex1Amount; // 0xF8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchTex1Range; // 0x100
		::UnityEngine::NAPRenderPipeline0::TextureParameter* glitchTex2; // 0x108
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* glitchTex2ScaleOffset; // 0x110
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchTex2Amount; // 0x118
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glitchTex2Range; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLITCH__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLITCH_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLITCH_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
