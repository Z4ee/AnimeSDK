#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::Rendering::Universal { class ComicDotTypeParameter; }
namespace UnityEngine::Rendering::Universal { class ComponentMaskParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1BDB9B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1BDB9BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB9C30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXComicDot_TypeDefinitionIndex = 27001;

	class FXComicDot : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::Universal::ComicDotTypeParameter* dotType; // 0x38
		::UnityEngine::NAPRenderPipeline0::ColorParameter* color; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* angle; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotSize; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotSpacing; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotOffsetX; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotOffsetY; // 0x68
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* starPower; // 0x70
		::UnityEngine::NAPRenderPipeline0::TextureParameter* customShape; // 0x78
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invert; // 0x80
		::UnityEngine::NAPRenderPipeline0::BoolParameter* antialiasing; // 0x88
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useWorldPositionAsOffset; // 0x90
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* offsetFactor; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation; // 0xA0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* alphaByLuminance; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invertLuminance; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* alphaMin; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* alphaMax; // 0xC0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* zClip; // 0xC8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invertClip; // 0xD0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* depthThreshold; // 0xD8
		::UnityEngine::Rendering::Universal::ComponentMaskParameter* mask; // 0xE0
		::UnityEngine::Rendering::Universal::ComicDotTypeParameter* dotType2; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* color2; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* angle2; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotSize2; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotSpacing2; // 0x108
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotOffsetX2; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotOffsetY2; // 0x118
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* starPower2; // 0x120
		::UnityEngine::NAPRenderPipeline0::TextureParameter* customShape2; // 0x128
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invert2; // 0x130
		::UnityEngine::NAPRenderPipeline0::BoolParameter* antialiasing2; // 0x138
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useWorldPositionAsOffset2; // 0x140
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* offsetFactor2; // 0x148
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation2; // 0x150
		::UnityEngine::NAPRenderPipeline0::BoolParameter* alphaByLuminance2; // 0x158
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invertLuminance2; // 0x160
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* alphaMin2; // 0x168
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* alphaMax2; // 0x170
		::UnityEngine::NAPRenderPipeline0::BoolParameter* zClip2; // 0x178
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invertClip2; // 0x180
		::UnityEngine::NAPRenderPipeline0::FloatParameter* depthThreshold2; // 0x188
		::UnityEngine::NAPRenderPipeline0::BoolParameter* pixelationOn; // 0x190
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* pixelSize; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOMICDOT_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
