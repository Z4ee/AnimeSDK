#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class IntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector3Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }
namespace UnityEngine::Rendering::Universal { class ChannelMappingParameter; }
namespace UnityEngine::Rendering::Universal { class DistanceDistortionBlendModeParameter; }
namespace UnityEngine::Rendering::Universal { class ScanMaskTypeParameter; }
namespace UnityEngine::Rendering::Universal { class ScanTypeParameter; }
namespace UnityEngine::Rendering::Universal { class ScanlineBlendModeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_GET_USESTENCIL_OFFSET UNITYSDK_OFFSET(0x1F8232F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISFXOVERLAYOUTLINEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F823520)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISLENSDISTORTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x1F823300)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISOPAQUEOUTLINEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F8233E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISSCANMASKACTIVE_OFFSET UNITYSDK_OFFSET(0x1F8235D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISUBERPOSTOUTLINEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F823480)
#define UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8236D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VREffects_TypeDefinitionIndex = 27941;

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
		::UnityEngine::Rendering::Universal::ScanlineBlendModeParameter* scanlineBlendMode; // 0x2E8
		::UnityEngine::Rendering::Universal::ScanTypeParameter* scanType; // 0x2F0
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* scanCustomCenterPosition; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useCustomScanDirection; // 0x300
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* customScanDirection; // 0x308
		::UnityEngine::Rendering::Universal::ScanMaskTypeParameter* scanMaskType; // 0x310
		::UnityEngine::NAPRenderPipeline0::TextureParameter* scanMaskTex; // 0x318
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* scanMaskTexChannel; // 0x320
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexTiling; // 0x328
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexOffset; // 0x330
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* scanMaskTexUVSpeed; // 0x338
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanMaskBaseY; // 0x340
		::UnityEngine::NAPRenderPipeline0::FloatParameter* scanMaskYRange; // 0x348
		::UnityEngine::NAPRenderPipeline0::BoolParameter* keepInFrontForUberPost; // 0x350
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor0End; // 0x358
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity0; // 0x360
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor1End; // 0x368
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity1; // 0x370
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor2End; // 0x378
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity2; // 0x380
		::UnityEngine::NAPRenderPipeline0::ColorParameter* scanColor3End; // 0x388
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanMaskIntensity3; // 0x390
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionIntensity; // 0x398
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionXMultiplier; // 0x3A0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionYMultiplier; // 0x3A8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* lensDistortionCenter; // 0x3B0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensDistortionScale; // 0x3B8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableDistanceDistortionColorization; // 0x3C0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* distanceColorizationEffect; // 0x3C8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* distanceDistortionTexture; // 0x3D0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* distanceColorizeTexture; // 0x3D8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* distanceDistortionColor; // 0x3E0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionStart; // 0x3E8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionEnd; // 0x3F0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionFadeRange; // 0x3F8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightStart; // 0x400
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightEnd; // 0x408
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionHeightFadeRange; // 0x410
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* distanceDistortionOffsetSpeed; // 0x418
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionTiling; // 0x420
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceDistortionIntensity; // 0x428
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* distanceColorizationOffsetSpeed; // 0x430
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceColorizationTiling; // 0x438
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendModeParameter* distanceDistortionBlendMode; // 0x440
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable2DSpot; // 0x448
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* spotCenter; // 0x450
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* spotRadius; // 0x458
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blackIntensity; // 0x460
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* overlayIntensity; // 0x468
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* curvePower; // 0x470

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

		::System::Boolean IsOpaqueOutlineActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISOPAQUEOUTLINEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsUberPostOutlineActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISUBERPOSTOUTLINEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsFxOverlayOutlineActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISFXOVERLAYOUTLINEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsScanMaskActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VREFFECTS_ISSCANMASKACTIVE_OFFSET))(this);
		}
	};
}
