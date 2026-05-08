#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class VREffects_NativeSRP_ColorBlendMethodParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AD558D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AD558F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD54920)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VREffects_NativeSRP_TypeDefinitionIndex = 6104;

	class VREffects_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hue; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* brightness; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contrast; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contrastMiddlePoint; // 0x60
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorTintNear; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorTintFar; // 0x70
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorTintStart; // 0x78
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorTintEnd; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanlineWidth; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanlineContrast; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanlineDistortion; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sliceWidth; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sliceAngle; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* reverse; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sliceOffset; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* sliceColorA; // 0xC0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* sliceColorAMode; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* sliceColorB; // 0xD0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* sliceColorBMode; // 0xD8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanStart0; // 0xE0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanEnd0; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanStart0Soft; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanEnd0Soft; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor0; // 0x100
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* scanColor0Mode; // 0x108
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanStart1; // 0x110
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanEnd1; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanStart1Soft; // 0x120
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanEnd1Soft; // 0x128
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor1; // 0x130
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* scanColor1Mode; // 0x138
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanStart2; // 0x140
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanEnd2; // 0x148
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanStart2Soft; // 0x150
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanEnd2Soft; // 0x158
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor2; // 0x160
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* scanColor2Mode; // 0x168
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanStart3; // 0x170
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanEnd3; // 0x178
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanStart3Soft; // 0x180
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanEnd3Soft; // 0x188
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor3; // 0x190
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* scanColor3Mode; // 0x198
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* uvOffsetR; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorR; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* uvOffsetG; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorG; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* uvOffsetB; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorB; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fadeSourceImage; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
