#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatRangeParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class IntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class VREffects_NativeSRP_ColorBlendMethodParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector3Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }
namespace UnityEngine::Rendering::Universal { class ChannelMappingParameter; }
namespace UnityEngine::Rendering::Universal { class DistanceDistortionBlendModeParameter; }
namespace UnityEngine::Rendering::Universal { class ScanMaskTypeParameter; }
namespace UnityEngine::Rendering::Universal { class ScanTypeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_GET_USESTENCIL_OFFSET UNITYSDK_OFFSET(0xF7FD7B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISLENSDISTORTIONACTIVE_OFFSET UNITYSDK_OFFSET(0xF7FD7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISOUTLINEDISTORTIONACTIVE_OFFSET UNITYSDK_OFFSET(0xF7FD8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISSCANMASKACTIVE_OFFSET UNITYSDK_OFFSET(0xF7FD930)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0xF7FDA40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VREffects_TypeDefinitionIndex = 29886;

	class VREffects : public ::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useStencil; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* applyBeforeUberPost; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* gridOn; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* gridDistance; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* gridBlendScanLine; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* gridColor; // 0x200
		::UnityEngine::NAPRenderPipeline0::FloatParameter* gridPower; // 0x208
		::UnityEngine::NAPRenderPipeline0::FloatParameter* groundYPos; // 0x210
		::UnityEngine::NAPRenderPipeline0::BoolParameter* screenSpaceGrid; // 0x218
		::UnityEngine::NAPRenderPipeline0::FloatParameter* screenSpaceGridScale; // 0x220
		::UnityEngine::NAPRenderPipeline0::FloatParameter* screenSpaceGridWidth; // 0x228
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineOn; // 0x230
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineBlendScanLine; // 0x238
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* outlineOpacity; // 0x240
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineDiffOffset; // 0x248
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineDepthThreshold; // 0x250
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineNormalThreshold; // 0x258
		::UnityEngine::NAPRenderPipeline0::FloatParameter* outlineNormalThresholdScale; // 0x260
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineColor; // 0x268
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineInUberShader; // 0x270
		::UnityEngine::NAPRenderPipeline0::TextureParameter* outlineScreenSpaceMaskTex; // 0x278
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* outlineScreenSpaceMaskTexScaleOffset; // 0x280
		::UnityEngine::NAPRenderPipeline0::BoolParameter* outlineDistortion; // 0x288
		::UnityEngine::NAPRenderPipeline0::TextureParameter* outlineDistortionTex; // 0x290
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* outlineDistortionTexTiling; // 0x298
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* outlineDistortionTexOffset; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* outlineDistortionUVSpeed; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* outlineDistortionOffset; // 0x2B0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* outlineDistortionIntensity; // 0x2B8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* textureSheetOn; // 0x2C0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* textureSheetTex; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* textureSheetXY; // 0x2D0
		::UnityEngine::NAPRenderPipeline0::IntParameter* textureSheetIndex; // 0x2D8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* textureSheetColor; // 0x2E0
		::UnityEngine::Rendering::Universal::ScanTypeParameter* scanType; // 0x2E8
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* scanCustomCenterPosition; // 0x2F0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useCustomScanDirection; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* customScanDirection; // 0x300
		::UnityEngine::Rendering::Universal::ScanMaskTypeParameter* scanMaskType; // 0x308
		::UnityEngine::NAPRenderPipeline0::TextureParameter* scanMaskTex; // 0x310
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* scanMaskTexChannel; // 0x318
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexTiling; // 0x320
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexOffset; // 0x328
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexUVSpeed; // 0x330
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanMaskBaseY; // 0x338
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanMaskYRange; // 0x340
		::UnityEngine::NAPRenderPipeline0::BoolParameter* keepInFrontForUberPost; // 0x348
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor0End; // 0x350
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity0; // 0x358
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor1End; // 0x360
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity1; // 0x368
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor2End; // 0x370
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity2; // 0x378
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor3End; // 0x380
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity3; // 0x388
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionIntensity; // 0x390
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionXMultiplier; // 0x398
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionYMultiplier; // 0x3A0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* lensDistortionCenter; // 0x3A8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionScale; // 0x3B0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useComicDot; // 0x3B8
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethodParameter* dotBlendMode; // 0x3C0
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* dotUnitSize; // 0x3C8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dotPercentage; // 0x3D0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* comicDotAngle; // 0x3D8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* comicDotColor; // 0x3E0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fadeByDepth; // 0x3E8
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* depthRange; // 0x3F0
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* depthFadeOpacity; // 0x3F8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fadeByDepthInvert; // 0x400
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fadeByLuminance; // 0x408
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* luminanceRange; // 0x410
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* luminanceFadeOpacity; // 0x418
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fadeByLuminanceInvert; // 0x420
		::UnityEngine::NAPRenderPipeline0::ColorParameter* blackColor; // 0x428
		::UnityEngine::NAPRenderPipeline0::ColorParameter* whiteColor; // 0x430
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* tint; // 0x438
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableDistanceDistortionColorization; // 0x440
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* distanceColorizationEffect; // 0x448
		::UnityEngine::NAPRenderPipeline0::TextureParameter* distanceDistortionTexture; // 0x450
		::UnityEngine::NAPRenderPipeline0::TextureParameter* distanceColorizeTexture; // 0x458
		::UnityEngine::NAPRenderPipeline0::ColorParameter* distanceDistortionColor; // 0x460
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionStart; // 0x468
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionEnd; // 0x470
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionFadeRange; // 0x478
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightStart; // 0x480
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightEnd; // 0x488
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightFadeRange; // 0x490
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* distanceDistortionOffsetSpeed; // 0x498
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionTiling; // 0x4A0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionIntensity; // 0x4A8
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* distanceColorizationOffsetSpeed; // 0x4B0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceColorizationTiling; // 0x4B8
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendModeParameter* distanceDistortionBlendMode; // 0x4C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseStencil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_GET_USESTENCIL_OFFSET))(this);
		}

		::System::Boolean IsLensDistortionActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISLENSDISTORTIONACTIVE_OFFSET))(this);
		}

		::System::Boolean IsOutlineDistortionActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISOUTLINEDISTORTIONACTIVE_OFFSET))(this);
		}

		::System::Boolean IsScanMaskActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISSCANMASKACTIVE_OFFSET))(this);
		}
	};
}
