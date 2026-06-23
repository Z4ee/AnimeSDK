#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FXColorCorrection_NativeSRP.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector3Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection_FxScreenLightModeParameter; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection_GradientParameter; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection_WeatherConfigScriptableObjectParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GET_WEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B1794C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_ISLUTWITHMASKACTIVE_OFFSET UNITYSDK_OFFSET(0x1B179520)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_VALIDATELUT_OFFSET UNITYSDK_OFFSET(0x1B1795D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B17ACF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B179760)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_TypeDefinitionIndex = 27339;

	class FXColorCorrection : public ::UnityEngine::NAPRenderPipeline0::FXColorCorrection_NativeSRP
	{
	public:
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientB()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B10);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientD()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B18);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientF()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B20);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientG()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B28);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientE()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B30);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientC()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B38);
		}
		static ::UnityEngine::Gradient** StaticGet_s_TempGradientA()
		{
			return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(FXColorCorrection_TypeDefinitionIndex)->GetStaticField(0x20B40);
		}
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableCameraClip; // 0x118
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* cameraClipDistance; // 0x120
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* cameraClipExtension; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cameraClipAlpha; // 0x130
		::UnityEngine::Rendering::Universal::FXColorCorrection_WeatherConfigScriptableObjectParameter* weatherConfig; // 0x138
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* weatherConfigWeight; // 0x140
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxScreenLightMaskOn; // 0x148
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightModeParameter* fxFxScreenLightMode; // 0x150
		::UnityEngine::NAPRenderPipeline0::ColorParameter* fxScreenLightColor; // 0x158
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sceneSpecialPPSEffectIntensity; // 0x160
		::UnityEngine::NAPRenderPipeline0::BoolParameter* sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x168
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sceneSpecialPPSGBufferSaturation; // 0x170
		::UnityEngine::NAPRenderPipeline0::BoolParameter* sceneSpecialPPSUseSaturationLut; // 0x178
		::UnityEngine::NAPRenderPipeline0::TextureParameter* sceneSpecialPPSSaturationLut; // 0x180
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampGap; // 0x188
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampValue; // 0x190
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampGap2; // 0x198
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampValue2; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampGap3; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* sceneSpecialPPSSaturationRampValue3; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* applySaturationLutToUberPost; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* sceneSpecialPPSIgnoreRidus; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* sceneSpecialPPSRadiusAlphaPow; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* sceneSpecialPPSEmissionColor; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sceneSpecialSkySaturation; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useLutWithMask; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* lutWithMaskTex; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lutWithMaskContribution; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* indirectSpecularIntensity; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableLightShaft; // 0x200
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightShaftThreshold; // 0x208
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightShaftIntensity; // 0x210
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lightShaftColorClamp; // 0x218
		::UnityEngine::NAPRenderPipeline0::ColorParameter* lightShaftColor; // 0x220
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightShaftLength; // 0x228
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightShaftFadeLength; // 0x230
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lightShaftBlur; // 0x238
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lightShaftUseCustomCenter; // 0x240
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* lightShaftCustomCenter; // 0x248
		::UnityEngine::NAPRenderPipeline0::BoolParameter* fxLightShaftMaskOn; // 0x250
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lightShaftIgnoreSceneDepthMask; // 0x258
		::UnityEngine::NAPRenderPipeline0::BoolParameter* ForceUseMsaa; // 0x260
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overrideWeatherConfig; // 0x268
		::UnityEngine::NAPRenderPipeline0::ColorParameter* rainDropColor; // 0x270
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* wetnessNoiseClamp; // 0x278
		::UnityEngine::NAPRenderPipeline0::ColorParameter* rainDropSplashColor; // 0x280
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* rainDropSplashCount; // 0x288
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distanceFogStart; // 0x290
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* fogHorizontalGradient; // 0x298
		::UnityEngine::NAPRenderPipeline0::FloatParameter* heightFogHeight; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* heightFogStart; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* volumetricFogColor; // 0x2B0
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* skyVerticalGradient; // 0x2B8
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* skyHorizontalGradient; // 0x2C0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skyHorizontalHeight; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skyHorizontalOffset; // 0x2D0
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* skyCloudHorizontalGradient; // 0x2D8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* sunDiscColor; // 0x2E0
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* layer1MiddleCloudGradient; // 0x2E8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer1CloudAroundSunColor; // 0x2F0
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* layer2MiddleCloudGradient; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer2CloudAroundSunColor; // 0x300
		::UnityEngine::Rendering::Universal::FXColorCorrection_GradientParameter* layer3MiddleCloudGradient; // 0x308
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer3CloudAroundSunColor; // 0x310
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* sceneLutContribution; // 0x318
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ambientSkyColor; // 0x320
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ambientEquatorColor; // 0x328
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ambientGroundColor; // 0x330
		::UnityEngine::NAPRenderPipeline0::BoolParameter* overrideWeatherGIConfig; // 0x338
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skyColor; // 0x340
		::UnityEngine::NAPRenderPipeline0::ColorParameter* middleColor; // 0x348
		::UnityEngine::NAPRenderPipeline0::ColorParameter* groundColor; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION__CCTOR_OFFSET))();
		}

		::System::Single get_WeatherConfigWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GET_WEATHERCONFIGWEIGHT_OFFSET))(this);
		}

		::System::Boolean IsLutWithMaskActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_ISLUTWITHMASKACTIVE_OFFSET))(this);
		}

		::System::Boolean ValidateLUT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_VALIDATELUT_OFFSET))(this);
		}
	};
}
