#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISCAUSTICACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585F60)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISDISTORTIONACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585F40)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISGAUSSIANBLURACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585EA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISLUTOVERRIDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585E30)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMACTIVEFORHDR_OFFSET UNITYSDK_OFFSET(0x1D585F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585EE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMSECONDARYGLAREACTIVE_OFFSET UNITYSDK_OFFSET(0x1D585EC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D585F70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int InterpolatedVolumeData_TypeDefinitionIndex = 6042;

	class InterpolatedVolumeData : public ::System::Object
	{
	public:
		::UnityEngine::Texture* ColorCurves_master; // 0x10
		::UnityEngine::Texture* ColorCurves_red; // 0x18
		::UnityEngine::Texture* ColorCurves_green; // 0x20
		::UnityEngine::Texture* ColorCurves_blue; // 0x28
		::UnityEngine::Texture* ColorCurves_hueVsHue; // 0x30
		::UnityEngine::Texture* ColorCurves_hueVsSat; // 0x38
		::UnityEngine::Texture* ColorCurves_satVsSat; // 0x40
		::UnityEngine::Texture* ColorCurves_lumVsSat; // 0x48
		::System::Int32 ColorCurves_HashCode; // 0x50
		::UnityEngine::Vector4 LiftGammaGain_lift; // 0x54
		::UnityEngine::Vector4 LiftGammaGain_gamma; // 0x64
		::UnityEngine::Vector4 LiftGammaGain_gain; // 0x74
		::System::Int32 LiftGammaGain_HashCode; // 0x84
		::System::Single ChannelMixer_redOutRedIn; // 0x88
		::System::Single ChannelMixer_redOutGreenIn; // 0x8C
		::System::Single ChannelMixer_redOutBlueIn; // 0x90
		::System::Single ChannelMixer_greenOutRedIn; // 0x94
		::System::Single ChannelMixer_greenOutGreenIn; // 0x98
		::System::Single ChannelMixer_greenOutBlueIn; // 0x9C
		::System::Single ChannelMixer_blueOutRedIn; // 0xA0
		::System::Single ChannelMixer_blueOutGreenIn; // 0xA4
		::System::Single ChannelMixer_blueOutBlueIn; // 0xA8
		::System::Single ColorAdjustments_postExposure; // 0xAC
		::System::Single ColorAdjustments_contrast; // 0xB0
		::UnityEngine::Vector4 ColorAdjustments_colorFilter; // 0xB4
		::System::Single ColorAdjustments_hueShift; // 0xC4
		::System::Single ColorAdjustments_saturation; // 0xC8
		::System::Single ColorAdjustments_desaturate; // 0xCC
		::System::Boolean ColorAdjustments_applyLutToSkybox; // 0xD0
		::System::Single ColorAdjustments_skySaturation; // 0xD4
		::System::Single ColorAdjustments_skyContrast; // 0xD8
		::System::Boolean ColorAdjustments_keepVolumetricFogInFrontOfTransparent; // 0xDC
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_shadows; // 0xE0
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_midtones; // 0xF0
		::UnityEngine::Vector4 ShadowsMidtonesHighlights_highlights; // 0x100
		::System::Single ShadowsMidtonesHighlights_shadowsStart; // 0x110
		::System::Single ShadowsMidtonesHighlights_shadowsEnd; // 0x114
		::System::Single ShadowsMidtonesHighlights_highlightsStart; // 0x118
		::System::Single ShadowsMidtonesHighlights_highlightsEnd; // 0x11C
		::UnityEngine::Vector4 SplitToning_shadows; // 0x120
		::UnityEngine::Vector4 SplitToning_highlights; // 0x130
		::System::Single SplitToning_balance; // 0x140
		::System::UInt32 Tonemapping_mode; // 0x144
		::System::Single Tonemapping_toeStrength; // 0x148
		::System::Single Tonemapping_toeLength; // 0x14C
		::System::Single Tonemapping_shoulderStrength; // 0x150
		::System::Single Tonemapping_shoulderLength; // 0x154
		::System::Single Tonemapping_shoulderAngle; // 0x158
		::System::Single Tonemapping_customGamma; // 0x15C
		::System::Single WhiteBalance_temperature; // 0x160
		::System::Single WhiteBalance_tint; // 0x164
		::System::Single FXColorCorrection_postExposure; // 0x168
		::System::Single FXColorCorrection_contrast; // 0x16C
		::System::Single FXColorCorrection_saturation; // 0x170
		::System::Single FXColorCorrection_gamma; // 0x174
		::System::Boolean FXColorCorrection_lutInvert; // 0x178
		::System::Boolean FXColorCorrection_lutToneColors; // 0x179
		::UnityEngine::Vector4 FXColorCorrection_lutToneA; // 0x17C
		::UnityEngine::Vector4 FXColorCorrection_lutToneB; // 0x18C
		::System::Single FXColorCorrection_lutMiddlePoint; // 0x19C
		::System::Single FXColorCorrection_lutSoftness; // 0x1A0
		::System::Single FXColorCorrection_desaturate; // 0x1A4
		::System::Boolean FXColorCorrection_invert; // 0x1A8
		::System::Boolean FXColorCorrection_toneColors; // 0x1A9
		::UnityEngine::Vector4 FXColorCorrection_toneA; // 0x1AC
		::UnityEngine::Vector4 FXColorCorrection_toneB; // 0x1BC
		::System::Single FXColorCorrection_middlePoint; // 0x1CC
		::System::Single FXColorCorrection_softness; // 0x1D0
		::System::Boolean FXColorCorrection_fxFogMaskPassOn; // 0x1D4
		::System::Single FXColorCorrection_fxColorSaturation; // 0x1D8
		::System::Single FXColorCorrection_giIntensity; // 0x1DC
		::System::Single FXColorCorrection_emissionIntensity; // 0x1E0
		::System::Single FXColorCorrection_scenePostExposure; // 0x1E4
		::System::Boolean FXColorCorrection_overrideSceneKodamaGIParams; // 0x1E8
		::System::Single FXColorCorrection_kodamaDynamicGIIntensity; // 0x1EC
		::System::Single FXColorCorrection_blurAmount; // 0x1F0
		::System::Boolean FXColorCorrection_justControlParticleLight; // 0x1F4
		::System::Single FXColorCorrection_localLightMultiplyIntensity; // 0x1F8
		::System::Single FXColorCorrection_localLightThreadHold; // 0x1FC
		::System::Boolean CharacterColorCorrection_enable; // 0x200
		::UnityEngine::Vector4 CharacterColorCorrection_ambient; // 0x204
		::UnityEngine::Vector4 CharacterColorCorrection_shallowTint; // 0x214
		::UnityEngine::Vector4 CharacterColorCorrection_shallowFadeTint; // 0x224
		::UnityEngine::Vector4 CharacterColorCorrection_shadowTint; // 0x234
		::UnityEngine::Vector4 CharacterColorCorrection_frontTint; // 0x244
		::UnityEngine::Vector4 CharacterColorCorrection_sssTint; // 0x254
		::UnityEngine::Vector4 CharacterColorCorrection_shadowFadeTint; // 0x264
		::UnityEngine::Vector4 CharacterColorCorrection_skinFrontTint; // 0x274
		::UnityEngine::Vector4 CharacterColorCorrection_skinShallowTint; // 0x284
		::UnityEngine::Vector4 CharacterColorCorrection_skinShallowFadeTint; // 0x294
		::UnityEngine::Vector4 CharacterColorCorrection_skinShadowTint; // 0x2A4
		::UnityEngine::Vector4 CharacterColorCorrection_skinSssTint; // 0x2B4
		::UnityEngine::Vector4 CharacterColorCorrection_skinShadowFadeTint; // 0x2C4
		::UnityEngine::Vector4 CharacterColorCorrection_ambientGradient; // 0x2D4
		::System::Boolean CharacterColorCorrection_useShadowTintAsOutline; // 0x2E4
		::System::Boolean CharacterColorCorrection_revertSaturation; // 0x2E5
		::UnityEngine::Vector4 CharacterColorCorrection_outlineTint; // 0x2E8
		::System::Single CharacterColorCorrection_toeStrength; // 0x2F8
		::System::Single CharacterColorCorrection_toeLength; // 0x2FC
		::System::Single CharacterColorCorrection_shoulderStrength; // 0x300
		::System::Single CharacterColorCorrection_shoulderLength; // 0x304
		::System::Single CharacterColorCorrection_shoulderAngle; // 0x308
		::System::Single CharacterColorCorrection_customGamma; // 0x30C
		::System::Single CharacterColorCorrection_postExposure; // 0x310
		::System::Single CharacterColorCorrection_contrast; // 0x314
		::System::Single CharacterColorCorrection_saturation; // 0x318
		::UnityEngine::Vector4 CharacterColorCorrection_lift; // 0x31C
		::UnityEngine::Vector4 CharacterColorCorrection_gamma; // 0x32C
		::UnityEngine::Vector4 CharacterColorCorrection_gain; // 0x33C
		::UnityEngine::Texture* CharacterColorCorrection_master; // 0x350
		::UnityEngine::Texture* CharacterColorCorrection_red; // 0x358
		::UnityEngine::Texture* CharacterColorCorrection_green; // 0x360
		::UnityEngine::Texture* CharacterColorCorrection_blue; // 0x368
		::UnityEngine::Texture* CharacterColorCorrection_hueVsHue; // 0x370
		::UnityEngine::Texture* CharacterColorCorrection_hueVsSat; // 0x378
		::UnityEngine::Texture* CharacterColorCorrection_satVsSat; // 0x380
		::UnityEngine::Texture* CharacterColorCorrection_lumVsSat; // 0x388
		::System::Single CharacterVolumeProxy_indoorWeight; // 0x390
		::System::UInt32 AmplifyOcclusion_sampleCount; // 0x394
		::System::Single AmplifyOcclusion_intensity; // 0x398
		::UnityEngine::Vector4 AmplifyOcclusion_tint; // 0x39C
		::System::Single AmplifyOcclusion_radius; // 0x3AC
		::System::Single AmplifyOcclusion_powerExponent; // 0x3B0
		::System::Single AmplifyOcclusion_bias; // 0x3B4
		::System::Single AmplifyOcclusion_thickness; // 0x3B8
		::System::Boolean AmplifyOcclusion_downSample; // 0x3BC
		::System::Boolean AmplifyOcclusion_cacheAware; // 0x3BD
		::System::Boolean AmplifyOcclusion_blurEnabled; // 0x3BE
		::System::Int32 AmplifyOcclusion_blurRadius; // 0x3C0
		::System::Int32 AmplifyOcclusion_blurPasses; // 0x3C4
		::System::Single AmplifyOcclusion_blurSharpness; // 0x3C8
		::System::Int32 Distortion_downScaleFactor; // 0x3CC
		::System::Single Distortion_intensity; // 0x3D0
		::UnityEngine::Vector3 Distortion_rgbShift; // 0x3D4
		::System::Single Distortion_separateRGBIntensity; // 0x3E0
		::System::Boolean Distortion_forceActive; // 0x3E4
		::System::UInt32 Distortion_effectRenderQueue; // 0x3E8
		::System::Int32 GaussianBlur_downSample; // 0x3EC
		::System::Single GaussianBlur_radius; // 0x3F0
		::UnityEngine::Texture* GaussianBlur_mask; // 0x3F8
		::System::Single GaussianBlur_maskTiling; // 0x400
		::System::Single GaussianBlur_maskRotation; // 0x404
		::System::Boolean GaussianBlur_maskDebug; // 0x408
		::System::Single NapBloom_glareThreshold; // 0x40C
		::System::Single NapBloom_glareThresholdForHDR; // 0x410
		::System::Single NapBloom_glareScaler; // 0x414
		::System::Single NapBloom_glareScalerForHDR; // 0x418
		::UnityEngine::Vector4 NapBloom_blurLevelWeights; // 0x41C
		::System::Single NapBloom_secondaryGlareThreshold; // 0x42C
		::System::Single NapBloom_secondaryGlareContrast; // 0x430
		::System::Single NapBloom_secondaryGlareWeight; // 0x434
		::System::Int32 NapBloom_secondaryBlurRadius; // 0x438
		::System::Single NapBloom_glareIntensity; // 0x43C
		::System::UInt32 NapBloom_quality; // 0x440
		::UnityEngine::Vector4 NapBloom_blurLevelBufferHeights; // 0x444
		::System::Int32 NapBloom_secondaryBlurLevelBufferHeight; // 0x454
		::UnityEngine::Texture* NapBloom_dirtTexture; // 0x458
		::System::Single NapBloom_dirtIntensity; // 0x460
		::System::Boolean NapBloom_HasExtraDownsample; // 0x464
		::System::Boolean NapBloom_enableSpriteFlare; // 0x465
		::System::Single NapBloom_flareThreshold; // 0x468
		::System::Single NapBloom_areaThreshold; // 0x46C
		::System::Single NapBloom_saturate; // 0x470
		::System::Single NapBloom_randomize; // 0x474
		::System::Single NapBloom_sizeClamp; // 0x478
		::System::Single NapBloom_intensityClamp; // 0x47C
		::System::Int32 NapBloom_iterationNum; // 0x480
		::System::Object* NapBloom_flareProfile; // 0x488
		::System::Int32 PartialBlur_downScaleFactor; // 0x490
		::System::Single PartialBlur_radius; // 0x494
		::System::Int32 PartialBlur_sampleCountMain; // 0x498
		::System::Int32 PartialBlur_sampleCount; // 0x49C
		::System::Single PartialBlur_standardDeviation; // 0x4A0
		::System::Boolean NapCapsuleAOLighting_useMainLightDirection; // 0x4A4
		::System::Boolean NapCapsuleAOLighting_isPointLight; // 0x4A5
		::UnityEngine::Vector3 NapCapsuleAOLighting_lightVector; // 0x4A8
		::System::Single NapCapsuleAOLighting_lightRange; // 0x4B4
		::System::Single NapCapsuleAOLighting_lightAngle; // 0x4B8
		::System::Single NapCapsuleAOLighting_shadowStrength; // 0x4BC
		::System::Boolean NapContactShadow_enabled; // 0x4C0
		::System::Int32 NapContactShadow_sampleCount; // 0x4C4
		::System::Single NapContactShadow_worldSpaceLength; // 0x4C8
		::System::UInt32 MotionBlur_mode; // 0x4CC
		::System::UInt32 MotionBlur_direction; // 0x4D0
		::System::Single MotionBlur_motionVectorBlendRadius; // 0x4D4
		::System::UInt32 MotionBlur_quality; // 0x4D8
		::System::Single MotionBlur_intensity; // 0x4DC
		::System::Single MotionBlur_clamp; // 0x4E0
		::System::Boolean ScreenSpaceReflection_enabled; // 0x4E4
		::System::Single ScreenSpaceReflection_intensity; // 0x4E8
		::System::Single ScreenSpaceReflection_depthBufferThickness; // 0x4EC
		::System::Single ScreenSpaceReflection_screenFadeDistance; // 0x4F0
		::System::UInt32 ScreenSpaceReflection_quality; // 0x4F4
		::System::Boolean ScreenSpaceReflection_overrideGlobalPlanarReflectionConfig; // 0x4F8
		::System::Single ScreenSpaceReflection_planarReflectionBlurAmount; // 0x4FC
		::System::Boolean Caustics_Use_Caustics; // 0x500
		::System::Single Caustics_Brightness; // 0x504
		::System::Single Caustics_Speed; // 0x508
		::System::Single Caustics_Range; // 0x50C
		::System::Single Caustics_HeightOffset; // 0x510
		::System::Single Caustics_MainLightScale; // 0x514
		::System::Single Caustics_LocalLightScale; // 0x518
		::System::Single Caustics_IndirectScale; // 0x51C
		::System::Single Caustics_Tilling; // 0x520
		::UnityEngine::Vector4 Caustics_Tint; // 0x524
		::System::Single Caustics_Strength; // 0x534
		::UnityEngine::Texture* Caustics_Tex; // 0x538
		::System::Boolean FXColorCorrection_scenePostExposureOverridden; // 0x540
		::System::Boolean CapsuleAO_enableCapsuleAO; // 0x541
		::System::Single CapsuleAO_ambientIntensity; // 0x544
		::System::Single CapsuleAO_shadowIntensity; // 0x548
		::System::Single CapsuleAO_shadowSharpness; // 0x54C
		::System::Single CapsuleAO_luminanceBlend; // 0x550
		::System::Boolean RTX_enabled; // 0x554
		::System::Single RTX_boost; // 0x558
		::System::Single RTX_specularBoost; // 0x55C
		::System::Single RTX_skyDiffuseScale; // 0x560
		::System::Single RTX_skySpecularScale; // 0x564
		::System::Single RTX_splitSpecThreshold; // 0x568
		::System::Single RTX_microAOStrength; // 0x56C
		::System::Single RTX_multiBounceScale; // 0x570
		::System::Single RTX_multiBounceFarDistScale; // 0x574
		::System::Single RTX_multiBounceIndoorScale; // 0x578
		::System::Single RTX_multiBounceScaleMaxDist; // 0x57C
		::System::Single RTX_lightmapBoost; // 0x580
		::System::Single RTX_aoLength; // 0x584
		::System::Single RTX_aoIntensity; // 0x588
		::System::Single RTX_extraEmissionMinDist; // 0x58C
		::System::Single RTX_extraEmissionMaxDist; // 0x590
		::System::Single RTX_extraEmissionScale; // 0x594
		::System::Single RTX_extraEmissionDelta; // 0x598
		::System::Single RTX_extraEmissionInteriorMinDist; // 0x59C
		::System::Single RTX_extraEmissionInteriorMaxDist; // 0x5A0
		::System::Single RTX_extraEmissionInteriorScale; // 0x5A4
		::System::Single RTX_extraEmissionInteriorDelta; // 0x5A8
		::System::Single RTX_addLocallightMinDist; // 0x5AC
		::System::Single RTX_addLocallightMaxDist; // 0x5B0
		::System::Single RTX_addLocallightScale; // 0x5B4
		::System::Single RTX_addLocallightDelta; // 0x5B8
		::System::Single RTX_extraColorbleedingMinDist; // 0x5BC
		::System::Single RTX_extraColorbleedingMaxDist; // 0x5C0
		::System::Single RTX_extraColorbleedingScale; // 0x5C4
		::System::Single RTX_extraColorbleedingDelta; // 0x5C8
		::System::Single RTX_diffuseProxyIntensity; // 0x5CC
		::System::Single RTX_diffuseColorValue; // 0x5D0
		::System::Single RTX_diffuseColorSaturate; // 0x5D4
		::UnityEngine::Vector3 RTX_diffuseColorDiffThreshold; // 0x5D8
		::UnityEngine::Texture* RTX_lut; // 0x5E8
		::UnityEngine::Texture* RTX_roughnessLut; // 0x5F0
		::UnityEngine::Texture* RTX_multiBounceAlbedoLut; // 0x5F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsLutOverrideActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISLUTOVERRIDEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsGaussianBlurActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISGAUSSIANBLURACTIVE_OFFSET))(this);
		}

		::System::Boolean IsNapBloomSecondaryGlareActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMSECONDARYGLAREACTIVE_OFFSET))(this);
		}

		::System::Boolean IsNapBloomActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMACTIVE_OFFSET))(this);
		}

		::System::Boolean IsNapBloomActiveForHDR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISNAPBLOOMACTIVEFORHDR_OFFSET))(this);
		}

		::System::Boolean IsDistortionActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISDISTORTIONACTIVE_OFFSET))(this);
		}

		::System::Boolean IsCausticActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEDVOLUMEDATA_ISCAUSTICACTIVE_OFFSET))(this);
		}
	};
}
