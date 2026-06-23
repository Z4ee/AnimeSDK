#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialDebugMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScriptableRenderer.h"
#include "unitysdk/UnityEngine/Vector4.h"

class CharacterRampTexPass;
class DrawAfterSkyboxPass;
class DrawSkyCloudPass;
class OceanEdgeFoamPass;
class VolumetricCloudBlitPass;
class VolumetricCloudPass;
class VolumetricCloudV2CombinePass;
class VolumetricCloudV2ReconstructionPass;
class VolumetricCloudV2RenderPass;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline { class CopyCharacterColorPass; }
namespace UnityEngine::NAPRenderPipeline0 { class AmplifyOcclusionPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class CameraCacheData; }
namespace UnityEngine::NAPRenderPipeline0 { class CapsuleAOPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorGradingLutPass; }
namespace UnityEngine::NAPRenderPipeline0 { class CopyColorPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DeferredShadingPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DistortionPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class Draw3DUIPass; }
namespace UnityEngine::NAPRenderPipeline0 { class Draw3DUIPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawOffScreenTransparentObjectsPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawOpaqueObjectsPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawOverlayPass; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawOverlayPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawPartialBlurMaskPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class DrawSkyboxPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class FinalBlitPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class FrameEstimateInfoPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class FrameEstimateUIInfoPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class FxFogMaskPass; }
namespace UnityEngine::NAPRenderPipeline0 { class FxFogMaskPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class GBufferPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class GaussianBlurPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class GenerateLightShaftPass; }
namespace UnityEngine::NAPRenderPipeline0 { class GenerateLightShaftPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class InvokeOnRenderObjectCallbackPass; }
namespace UnityEngine::NAPRenderPipeline0 { class LateGbufferPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareOcclusionPass; }
namespace UnityEngine::NAPRenderPipeline0 { class MainLightShadowCasterPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class NapSecondaryBloomPass; }
namespace UnityEngine::NAPRenderPipeline0 { class NapSecondaryBloomPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class OffscreenParticleUpdatePass; }
namespace UnityEngine::NAPRenderPipeline0 { class OpaquePostProcessPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class PerObjectShadowPass; }
namespace UnityEngine::NAPRenderPipeline0 { class PerObjectShadowPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class PreProcessPass; }
namespace UnityEngine::NAPRenderPipeline0 { class PresentFrozenTexturePass; }
namespace UnityEngine::NAPRenderPipeline0 { class PresentFrozenTexturePass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class PunctualLightShadowCasterPass; }
namespace UnityEngine::NAPRenderPipeline0 { class PunctualLightShadowCasterPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class RTXBuildAccelerationStructurePass; }
namespace UnityEngine::NAPRenderPipeline0 { class ReflectionPass; }
namespace UnityEngine::NAPRenderPipeline0 { class ReflectionPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class SSGIPass; }
namespace UnityEngine::NAPRenderPipeline0 { class SSRPass; }
namespace UnityEngine::NAPRenderPipeline0 { class SSRPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class ScreenSpacePlanarReflectionsPass; }
namespace UnityEngine::NAPRenderPipeline0 { class ScreenSpaceShadowResolvePass; }
namespace UnityEngine::NAPRenderPipeline0 { class ScreenSpaceShadowResolvePass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class ScriptableRenderPass; }
namespace UnityEngine::NAPRenderPipeline0 { class SkyLutPass; }
namespace UnityEngine::NAPRenderPipeline0 { class SkyLutPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class SunShadowCachePass; }
namespace UnityEngine::NAPRenderPipeline0 { class TBLLightDataAfterGbufferPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class TBLLightDataPass; }
namespace UnityEngine::NAPRenderPipeline0 { class TBLLightDataPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class TransparentSettingsPass; }
namespace UnityEngine::NAPRenderPipeline0 { class TransparentSettingsPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFogPass; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFogPass_NativeImpl; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusionPass_NotNative; }
namespace UnityEngine::Rendering::Universal { class BlendUIColorPass; }
namespace UnityEngine::Rendering::Universal { class BrightSpotsFlarePass; }
namespace UnityEngine::Rendering::Universal { class CapturePass; }
namespace UnityEngine::Rendering::Universal { class CharacterGhostPass; }
namespace UnityEngine::Rendering::Universal { class CharacterIgnisFatuusPass; }
namespace UnityEngine::Rendering::Universal { class ColorGradingLutPass_SceneNotNative; }
namespace UnityEngine::Rendering::Universal { class ExtraMotionVectorPass; }
namespace UnityEngine::Rendering::Universal { class FluidSimPass; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class MKGlarePass; }
namespace UnityEngine::Rendering::Universal { class NapCapturePass; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }
namespace UnityEngine::Rendering::Universal { class OffDLSSFrameGenPass; }
namespace UnityEngine::Rendering::Universal { class OffFSR3FrameGenPass; }
namespace UnityEngine::Rendering::Universal { class OffScreenUISettingPass; }
namespace UnityEngine::Rendering::Universal { class OpaquePostProcessSecond; }
namespace UnityEngine::Rendering::Universal { class RTXAODebugBlitPass; }
namespace UnityEngine::Rendering::Universal { class RTXAOPass; }
namespace UnityEngine::Rendering::Universal { class SplineOutlinePass; }
namespace UnityEngine::Rendering::Universal { class StaticEnvironment; }
namespace UnityEngine::Rendering::Universal { class TransparentMaskPass; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal::Internal { class CopyColorPass_NotNative; }
namespace UnityEngine::Rendering::Universal::Internal { class DamageDecalLUTPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawFootPrintPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawFullResOffScreenTransparentObjectsPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawOpaqueAfterDeferredShadingPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawOutlineObjectsPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawTransparentObjectsPass; }
namespace UnityEngine::Rendering::Universal::Internal { class EntityPreparePass; }
namespace UnityEngine::Rendering::Universal::Internal { class EtherEyeInteractablePass; }
namespace UnityEngine::Rendering::Universal::Internal { class ForwardLights; }
namespace UnityEngine::Rendering::Universal::Internal { class FrameEstimateInfoPass_Managed; }
namespace UnityEngine::Rendering::Universal::Internal { class GPUGrassUpdatePass; }
namespace UnityEngine::Rendering::Universal::Internal { class GpuBoidUpdatePass; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraAfterDeferredShading; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraApplyPass; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraDebugPass; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraUpdateClipmapPass; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraUpdateProbePass; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass; }
namespace UnityEngine::Rendering::Universal::Internal { class ReactiveMaskDitherPass; }
namespace UnityEngine::Rendering::Universal::Internal { class ReactiveMaskPass; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectHighlightPass; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterInteractionPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_BINDNATIVERENDERPIPELINECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AECDC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_CREATECAMERARENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1AEE5CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEE6A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_DRAWGPUCROWDGBUFFER_OFFSET UNITYSDK_OFFSET(0x1AECEF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1AED0340)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERINGPERCAMERA_OFFSET UNITYSDK_OFFSET(0x1AEE77B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x1AEE7870)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETETHEREYEINTERACTABLEPASSEVENT_OFFSET UNITYSDK_OFFSET(0x1AED0680)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETJITTEREDPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1AEE7A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETOPAQUESORTCRITERIA_OFFSET UNITYSDK_OFFSET(0x1AED0640)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_INITIALIZECAMERAVIEWCONSTANTS_OFFSET UNITYSDK_OFFSET(0x1AEE4350)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDEFERREDJUSTDIRECTLIGHTPASS_OFFSET UNITYSDK_OFFSET(0x1AECF7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDRAWFORWARDGBUFFERPASS_OFFSET UNITYSDK_OFFSET(0x1AECF6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERFIRSTDEFERREDSHADINGPASS_OFFSET UNITYSDK_OFFSET(0x1AECF900)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET UNITYSDK_OFFSET(0x1AECDFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREBEGINRENDERPASSINDEFERREDPASS_OFFSET UNITYSDK_OFFSET(0x1AECF870)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET UNITYSDK_OFFSET(0x1AECDF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONDEFERREDSHADINGPASSAFTERDRAWOPAQUEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1AECF650)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDECAL_OFFSET UNITYSDK_OFFSET(0x1AECE0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDEPTHCOPY_OFFSET UNITYSDK_OFFSET(0x1AECF2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERHIZTEST_OFFSET UNITYSDK_OFFSET(0x1AECF540)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTEROPAQUE_OFFSET UNITYSDK_OFFSET(0x1AECE660)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONINNERRENDERSHADOWSLICE_OFFSET UNITYSDK_OFFSET(0x1AECFB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REGISTERSTATICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1AEE6E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REQUIRESINTERMEDIATECOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AEE5900)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AEE70B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x1AEE7030)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0x1AED7750)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETWITHOUTUIBLURRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1AEE4260)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE7F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED0790)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEE7F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x1AEE8010)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AEE80A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x1AEE8140)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRenderer_TypeDefinitionIndex = 26514;

	class ForwardRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativePerObjectShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B50);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeNAPCapsuleAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeAmplifyOcclusion()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B60);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSSSR()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B68);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSceneColorGradingLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B70);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeGenerateLightShaft()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B78);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSkyLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B80);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeVolumetricFog()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B88);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_ScreenCullingRatioTmp()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B90);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20B98);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeReflection()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x20BA0);
		}
		static ::System::Int32* StaticGet_s_DefaultTAAPhaseCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5520);
		}
		static ::System::Boolean* StaticGet_overrideScreenRatioCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5524);
		}
		static ::System::Boolean* StaticGet_s_EnableShadowCullSimplification()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5525);
		}
		static ::System::Boolean* StaticGet_s_ConsoleVariablesInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5526);
		}
		static ::System::Boolean* StaticGet_UseNativeCopyColor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5527);
		}
		static ::System::Int32* StaticGet_s_PassHideFlag()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5528);
		}
		static ::UnityEngine::NAPRenderPipeline0::MaterialDebugMode* StaticGet_m_DebugFeature()
		{
			return (::UnityEngine::NAPRenderPipeline0::MaterialDebugMode*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x552C);
		}
		// static const ::System::Int32 k_DepthStencilBufferBits = 0x18; // 0x0
		// static const ::System::String* k_CreateCameraTextures; // 0x0
		// static const ::System::String* kProfileTagPresentFrozenTexturePass; // 0x0
		// static const ::System::String* kProfileTagRTXBuildAccelerationStructurePass; // 0x0
		// static const ::System::String* kProfileTagMainLightShadowCasterPass; // 0x0
		// static const ::System::String* kProfileTagSunShadowCachePass; // 0x0
		// static const ::System::String* kProfileTagPerObjectShadowCasterPass; // 0x0
		// static const ::System::String* kRenderEntitySettingPass; // 0x0
		// static const ::System::String* kProfileTagMirrorReflectionPassPass; // 0x0
		// static const ::System::String* kProfileTagPunctualLightsShadowCasterPass; // 0x0
		// static const ::System::String* kProfileTagGBufferPass; // 0x0
		// static const ::System::String* kProfileTagShadingRateImagePass; // 0x0
		// static const ::System::String* kProfileTagLateGbufferPass; // 0x0
		// static const ::System::String* kProfileTagColorGradingLutPass; // 0x0
		// static const ::System::String* kProfileTagSkyLutPass; // 0x0
		// static const ::System::String* kProfileTagCharColorGradingLutPass; // 0x0
		// static const ::System::String* kProfileCharacterRampTexPass; // 0x0
		// static const ::System::String* kProfileTagSceneColorGradingLutPass; // 0x0
		// static const ::System::String* kProfileTagFluidSimPass; // 0x0
		// static const ::System::String* kProfileTagRenderOpaqueForwardPass; // 0x0
		// static const ::System::String* kProfileTagOutlineEffectPass; // 0x0
		// static const ::System::String* kProfileTagAmplifyOcclusionPass; // 0x0
		// static const ::System::String* kProfileTagRTXAOPass; // 0x0
		// static const ::System::String* kProfileTagRTXAODebugBlitPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudBlitPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudBlitPassAfterColorGrading; // 0x0
		// static const ::System::String* kProfileTagDrawSkyCloudPass; // 0x0
		// static const ::System::String* kProfileTagDrawAfterSkyboxPass; // 0x0
		// static const ::System::String* kProfileTagCopyColorPass; // 0x0
		// static const ::System::String* kProfileTagCopyCharacterColorPass; // 0x0
		// static const ::System::String* kProfileTagMKGlarePass; // 0x0
		// static const ::System::String* kProfileTagOpaquePostProcessSecond; // 0x0
		// static const ::System::String* kProfileTagSsrPass; // 0x0
		// static const ::System::String* kProfileTagSSGIPass; // 0x0
		// static const ::System::String* kProfileTagSSPRPass; // 0x0
		// static const ::System::String* kProfileTagCopyDepthPass; // 0x0
		// static const ::System::String* kProfileTagDrawSkyboxPass; // 0x0
		// static const ::System::String* kProfileTagLightCullingPass; // 0x0
		// static const ::System::String* kProfileTagLightCullingAfterGbufferPass; // 0x0
		// static const ::System::String* kProfileTagEntityPreparePass; // 0x0
		// static const ::System::String* kProfileTagFootPrintPass; // 0x0
		// static const ::System::String* kProfileTagLensFlareOcclusionPass; // 0x0
		// static const ::System::String* kProfileTagTransparentSettingPass; // 0x0
		// static const ::System::String* kProfileTagRenderTransparentForwardPass; // 0x0
		// static const ::System::String* kProfileTagOffScreenUISettingPass; // 0x0
		// static const ::System::String* kProfileTagOffscreenParticleUpdatePass; // 0x0
		// static const ::System::String* kProfileTagRenderHalfResOffScreenTransparentForwardPassWithDelay; // 0x0
		// static const ::System::String* kProfileTagRenderHalfResOffScreenTransparentForwardPassWithoutDelay; // 0x0
		// static const ::System::String* kProfileTagRenderFullResOffScreenTransparentForwardPass; // 0x0
		// static const ::System::String* kProfileTagReactiveMaskPass; // 0x0
		// static const ::System::String* kProfileTagReactiveMaskDitherPass; // 0x0
		// static const ::System::String* kProfileTagSceneObjectHighlightPass; // 0x0
		// static const ::System::String* kProfileTagEtherEyeInteractablePass; // 0x0
		// static const ::System::String* kProfileTagRenderObjectCallbackPass; // 0x0
		// static const ::System::String* kProfileTagGenerateLightShaftPass; // 0x0
		// static const ::System::String* kProfileTagGenerateLightShaftPassInEditor; // 0x0
		// static const ::System::String* kProfileTagGaussianBlurPass; // 0x0
		// static const ::System::String* kProfileTagDistortionPass; // 0x0
		// static const ::System::String* kProfileTagDistortionPassForOpaquePostProcess; // 0x0
		// static const ::System::String* kProfileTagFinalPostProcessPass; // 0x0
		// static const ::System::String* kProfileTagPostProcessPass; // 0x0
		// static const ::System::String* kProfileTagCharacterGhostPass; // 0x0
		// static const ::System::String* kProfileTagCharacterIgnisFatuusPass; // 0x0
		// static const ::System::String* kProfileTagCapturePass; // 0x0
		// static const ::System::String* kProfileTagFinalBlitPass; // 0x0
		// static const ::System::String* kProfileTagSceneViewDepthCopyPass; // 0x0
		// static const ::System::String* kProfileTagScreenSpaceShadowResolvePass; // 0x0
		// static const ::System::String* kProfileTagPerObjectShadowResolvePass; // 0x0
		// static const ::System::String* kProfileTagDeferredShadingPass; // 0x0
		// static const ::System::String* kProfileTagSpineOutlinePass; // 0x0
		// static const ::System::String* kProfileTagDrawOutlineObjectsPass; // 0x0
		// static const ::System::String* kProfileTagDamageDecalLUTPass; // 0x0
		// static const ::System::String* kProfileTagVfxVolumetricShadowPass; // 0x0
		// static const ::System::String* kProfileTagOpaqueAfterDeferredShadingPass; // 0x0
		// static const ::System::String* kProfileTagWaterGen; // 0x0
		// static const ::System::String* kProfileTagWaterGenBeforeGbufferPass; // 0x0
		// static const ::System::String* kProfileTagWaterInteraction; // 0x0
		// static const ::System::String* kProfileTagWaterInteractionBeforeGbufferPass; // 0x0
		// static const ::System::String* kProfileTagGpuBoidUpdatePass; // 0x0
		// static const ::System::String* kProfileTagGpuGrassUpdatePass; // 0x0
		// static const ::System::String* kProfileTagOpaquePostProcessPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricFogPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudV2RenderPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudV2ReconstructionPass; // 0x0
		// static const ::System::String* kProfileTagVolumetricCloudV2CombinePass; // 0x0
		// static const ::System::String* kProfileTagOceanEdgeFoamPass; // 0x0
		// static const ::System::String* kProfileTagRenderIntoDBufferPass; // 0x0
		// static const ::System::String* kProfileTagPreprocessPassReset; // 0x0
		// static const ::System::String* kProfileTagPreprocessPassResetAfterShadowCaster; // 0x0
		// static const ::System::String* kProfileTagBeginInitPass; // 0x0
		// static const ::System::String* kProfileTagCameraMotionVectorPass; // 0x0
		// static const ::System::String* kProfileTagSecondaryBloomPass; // 0x0
		// static const ::System::String* kProfileTagPartialBlurMaskPass; // 0x0
		// static const ::System::String* kProfileTagRender3DUIPass; // 0x0
		// static const ::System::String* kProfileTagCapsuleAOPass; // 0x0
		// static const ::System::String* kProfileTagNapCapturePass; // 0x0
		// static const ::System::String* kProfileTagFxFogMaskPass; // 0x0
		// static const ::System::String* kProfileTagFxOverlayPass; // 0x0
		// static const ::System::String* kProfileTagCriwareBlitPass; // 0x0
		// static const ::System::String* kProfileTagFrameEstimateInfoPass; // 0x0
		// static const ::System::String* kProfileTagFrameEstimateUIInfoPass; // 0x0
		// static const ::System::String* kProfileTagLyraUpdateClipmap; // 0x0
		// static const ::System::String* kProfileTagLyraGIUpdateBakedData; // 0x0
		// static const ::System::String* kProfileTagLyraBakedLightingVolumePass; // 0x0
		// static const ::System::String* kProfileTagLyraUpdateProbesPass; // 0x0
		// static const ::System::String* kProfileTagLyraApplyPass; // 0x0
		// static const ::System::String* kProfileTagLyraAfterDeferredShadingPass; // 0x0
		// static const ::System::String* kProfileTagLyraDebugPass; // 0x0
		// static const ::System::String* kProfileTagExtraMotionVectorPass; // 0x0
		// static const ::System::String* kProfileTagTransparentMaskPass; // 0x0
		// static const ::System::String* kProfileTagBlendUIColorPass; // 0x0
		// static const ::System::String* kProfileTagOffFSR3FrameGenPass; // 0x0
		// static const ::System::String* kProfileTagOffDLSSFrameGenPass; // 0x0
		// static const ::System::String* kProfileTagBrightSpotsFlarePass; // 0x0
		::UnityEngine::Rendering::Universal::OffFSR3FrameGenPass* m_OffFSR3FrameGenPass; // 0xB0
		::OceanEdgeFoamPass* m_OceanEdgeFoamPass; // 0xB8
		::UnityEngine::NAPRenderPipeline0::SSRPass_NativeImpl* m_SsrPass_Native; // 0xC0
		::UnityEngine::Rendering::Universal::RTXAODebugBlitPass* m_RTXAODebugBlitPass; // 0xC8
		::UnityEngine::NAPRenderPipeline0::VolumetricFogPass_NativeImpl* m_VolumetricFogPass_Native; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::GPUGrassUpdatePass* m_GpuGrassUpdatePass; // 0xD8
		::UnityEngine::Rendering::Universal::Internal::DamageDecalLUTPass* m_DamageDecalLUTPass; // 0xE0
		::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass* m_PunctualLightShadowCasterPass; // 0xE8
		::UnityEngine::NAPRenderPipeline0::DrawOffScreenTransparentObjectsPass_NativeImpl* m_RenderOffScreenTransparentObjectsPass_Native; // 0xF0
		::UnityEngine::NAPRenderPipeline0::LensFlareOcclusionPass* m_LensFlareOcclusionPass; // 0xF8
		::UnityEngine::NAPRenderPipeline0::PreProcessPass* m_PreProcessPassReset; // 0x100
		::UnityEngine::NAPRenderPipeline0::RTXBuildAccelerationStructurePass* m_RTXBuildAccelerationStructurePass; // 0x108
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* m_LyraUpdateProbePass; // 0x110
		::UnityEngine::NAPRenderPipeline0::PresentFrozenTexturePass_NativeImpl* m_PresentFrozenTexturePass_Native; // 0x118
		::UnityEngine::NAPRenderPipeline0::NapSecondaryBloomPass* m_NapSecondaryBloomPass; // 0x120
		::UnityEngine::NAPRenderPipeline0::GenerateLightShaftPass* m_GenerateLightShaftPass; // 0x128
		::UnityEngine::NAPRenderPipeline0::DrawSkyboxPass_NativeImpl* m_DrawSkyboxPass_Native; // 0x130
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_PreProcessPassReset_Native; // 0x138
		::UnityEngine::Rendering::Universal::Internal::DrawFootPrintPass* m_DrawFootPrintPass; // 0x140
		::UnityEngine::NAPRenderPipeline0::VolumetricFogPass* m_VolumetricFogPass; // 0x148
		::UnityEngine::Rendering::Universal::CharacterIgnisFatuusPass* m_CharacterIgnisFatuusPass; // 0x150
		::UnityEngine::NAPRenderPipeline0::TransparentSettingsPass* m_TransparentSettingsPass; // 0x158
		::UnityEngine::Rendering::Universal::Internal::DrawOpaqueAfterDeferredShadingPass* m_DrawOpaqueAfterDeferredShadingPass; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* RenderPassEventConfig; // 0x168
		::UnityEngine::NAPRenderPipeline0::SunShadowCachePass* m_SunShadowCachePass; // 0x170
		::UnityEngine::NAPRenderPipeline0::PerObjectShadowPass* m_PerObjectShadowPass; // 0x178
		::UnityEngine::NAPRenderPipeline0::OpaquePostProcessPass_NativeImpl* m_OpaquePostProcessPass_Native; // 0x180
		::UnityEngine::NAPRenderPipeline0::ScreenSpacePlanarReflectionsPass* m_SSPRPass; // 0x188
		::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_NativeImpl* m_PunctualLightShadowCasterPass_Native; // 0x190
		::UnityEngine::NAPRenderPipeline0::TransparentSettingsPass_NativeImpl* m_TransparentSettingsPass_Native; // 0x198
		::UnityEngine::Rendering::Universal::Internal::LyraAfterDeferredShading* m_LyraAfterDeferredShadingPass; // 0x1A0
		::UnityEngine::Rendering::Universal::Internal::ReactiveMaskDitherPass* m_ReactiveMaskDitherPass; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::FrameEstimateUIInfoPass_NativeImpl* m_FrameEstimateUIInfoPass_Native; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::TBLLightDataPass* m_TblLightDataPass; // 0x1B8
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_FinalPostProcessPass; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::SkyLutPass_NativeImpl* m_SkyLutPass_Native; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::PerObjectShadowPass_NativeImpl* m_PerObjectShadowPass_Native; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::DrawPartialBlurMaskPass_NativeImpl* m_DrawPartialBlurMaskPass_Native; // 0x1D8
		::UnityEngine::Rendering::Universal::Internal::LyraApplyPass* m_LyraApplyPass; // 0x1E0
		::UnityEngine::Rendering::Universal::BlendUIColorPass* m_BlendUIColorPass; // 0x1E8
		::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass; // 0x1F0
		::VolumetricCloudPass* m_VolumetricCloudPass; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::Draw3DUIPass* m_Draw3DUIPass; // 0x200
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_CharColorGradingLutPass_Native; // 0x208
		::UnityEngine::Rendering::Universal::OffDLSSFrameGenPass* m_OffDLSSFrameGenPass; // 0x210
		::UnityEngine::NAPRenderPipeline0::GenerateLightShaftPass_NativeImpl* m_GenerateLightShaftPass_Native; // 0x218
		::UnityEngine::NAPRenderPipeline0::PresentFrozenTexturePass* m_PresentFrozenTexturePass; // 0x220
		::UnityEngine::Rendering::Universal::AmplifyOcclusionPass_NotNative* m_AmplifyOcclusionPass; // 0x228
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_PreProcessPassResetAfterShadowCaster_Native; // 0x230
		::UnityEngine::NAPRenderPipeline0::ColorGradingLutPass* m_ColorGradingLutPass; // 0x238
		::UnityEngine::Rendering::Universal::Internal::WaterGenPass* m_WaterGenPass; // 0x240
		::UnityEngine::NAPRenderPipeline0::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass; // 0x248
		::DrawAfterSkyboxPass* m_DrawAfterSkyboxPass; // 0x250
		::UnityEngine::Rendering::Universal::Internal::GpuBoidUpdatePass* m_GpuBoidUpdatePass; // 0x258
		::UnityEngine::Rendering::Universal::FluidSimPass* m_FluidSimPass; // 0x260
		::UnityEngine::Rendering::Universal::MKGlarePass* m_MKGlarePass; // 0x268
		::UnityEngine::NAPRenderPipeline0::FxFogMaskPass* m_FxFogMaskPass; // 0x270
		::UnityEngine::Rendering::Universal::Internal::CopyColorPass_NotNative* m_CopyColorPass; // 0x278
		::UnityEngine::NAPRenderPipeline0::ReflectionPass_NativeImpl* m_MirrorReflectionPass_Native; // 0x280
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_BeginInitPass_Native; // 0x288
		::UnityEngine::Rendering::Universal::ColorGradingLutPass_SceneNotNative* m_SceneColorGradingLutPass; // 0x290
		::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass* m_ScreenSpaceShadowResolvePass; // 0x298
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_SceneColorGradingLutPass_Native; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::ReflectionPass* m_MirrorReflectionPass; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::FinalBlitPass_NativeImpl* m_FinalBlitPass_Native; // 0x2B0
		::UnityEngine::Rendering::Universal::BrightSpotsFlarePass* m_BrightSpotsFlarePass; // 0x2B8
		::UnityEngine::NAPRenderPipeline::CopyCharacterColorPass* m_CopyCharacterColorPass; // 0x2C0
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleUpdatePass* m_OffscreenParticleUpdatePass; // 0x2C8
		::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights; // 0x2D0
		::UnityEngine::Rendering::Universal::TransparentMaskPass* m_TransparentMaskPass; // 0x2D8
		::UnityEngine::Rendering::Universal::Internal::SceneObjectHighlightPass* m_SceneObjectHighlightPass; // 0x2E0
		::UnityEngine::NAPRenderPipeline0::SkyLutPass* m_SkyLutPass; // 0x2E8
		::UnityEngine::Rendering::Universal::OpaquePostProcessSecond* m_OpaquePostProcessSecond; // 0x2F0
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_ColorGradingLutPass_Native; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::DrawOverlayPass* m_DrawOverlayPass; // 0x300
		::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs* curConfigs; // 0x308
		::UnityEngine::NAPRenderPipeline0::FxFogMaskPass_NativeImpl* m_FxFogMaskPass_Native; // 0x310
		::VolumetricCloudV2CombinePass* m_VolumetricCloudV2CombinePass; // 0x318
		::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass_NativeImpl* m_ScreenSpaceShadowResolvePass_Native; // 0x320
		::UnityEngine::Rendering::Universal::Internal::LyraDebugPass* m_LyraDebugPass; // 0x328
		::UnityEngine::Rendering::Universal::Internal::ReactiveMaskPass* m_ReactiveMaskPass; // 0x330
		::UnityEngine::Rendering::Universal::Internal::EtherEyeInteractablePass* m_EtherEyeInteractablePass; // 0x338
		::UnityEngine::NAPRenderPipeline0::DeferredShadingPass_NativeImpl* m_DeferredShadingPass_Native; // 0x340
		::UnityEngine::Rendering::Universal::ExtraMotionVectorPass* m_ExtraMotionVectorPass; // 0x348
		::UnityEngine::NAPRenderPipeline0::CapsuleAOPass_NativeImpl* m_CapsuleAOPass_Native; // 0x350
		::UnityEngine::NAPRenderPipeline0::DistortionPass_NativeImpl* m_DistortionPass_Native; // 0x358
		::DrawSkyCloudPass* m_DrawSkyCloudPass; // 0x360
		::UnityEngine::Rendering::Universal::CharacterGhostPass* m_CharacterGhostPass; // 0x368
		::UnityEngine::NAPRenderPipeline0::CopyColorPass_NativeImpl* m_CopyColorPass_Native; // 0x370
		::UnityEngine::Rendering::Universal::Internal::DrawOutlineObjectsPass* m_DrawOutlineObjectsPass; // 0x378
		::UnityEngine::Rendering::Universal::Internal::DrawFullResOffScreenTransparentObjectsPass* m_FullResOffScreenTransparentObjectsPass; // 0x380
		::UnityEngine::NAPRenderPipeline0::DrawOpaqueObjectsPass_NativeImpl* m_RenderOpaqueForwardPass_Native; // 0x388
		::UnityEngine::NAPRenderPipeline0::FrameEstimateInfoPass_NativeImpl* m_FrameEstimateInfoPass_Native; // 0x390
		::UnityEngine::Rendering::Universal::SplineOutlinePass* m_SpineOutlinePass; // 0x398
		::UnityEngine::NAPRenderPipeline0::MainLightShadowCasterPass_NativeImpl* m_MainLightShadowCasterpass_Native; // 0x3A0
		::UnityEngine::NAPRenderPipeline0::SSRPass* m_SsrPass; // 0x3A8
		::CharacterRampTexPass* m_CharacterRampTexPass; // 0x3B0
		::UnityEngine::Rendering::Universal::Internal::WaterInteractionPass* m_WaterInteractionPass; // 0x3B8
		::UnityEngine::NAPRenderPipeline0::NapSecondaryBloomPass_NativeImpl* m_NapSecondaryBloomPass_Native; // 0x3C0
		::UnityEngine::Rendering::Universal::Internal::DrawTransparentObjectsPass* m_RenderTransparentForwardPass; // 0x3C8
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateClipmapPass* m_LyraUpdateClipmapPass; // 0x3D0
		::UnityEngine::Rendering::Universal::Internal::FrameEstimateInfoPass_Managed* m_FrameEstimateInfoPass_Managed; // 0x3D8
		::UnityEngine::NAPRenderPipeline0::GBufferPass_NativeImpl* m_GBufferPass_Native; // 0x3E0
		::UnityEngine::NAPRenderPipeline0::AmplifyOcclusionPass_NativeImpl* m_AmplifyOcclusionPass_Native; // 0x3E8
		::UnityEngine::NAPRenderPipeline0::Draw3DUIPass_NativeImpl* m_Draw3DUIPass_Native; // 0x3F0
		::UnityEngine::NAPRenderPipeline0::PreProcessPass* m_PreProcessPassResetAfterShadowCaster; // 0x3F8
		::VolumetricCloudV2RenderPass* m_VolumetricCloudV2RenderPass; // 0x400
		::UnityEngine::NAPRenderPipeline0::GaussianBlurPass_NativeImpl* m_GaussianBlurPass_Native; // 0x408
		::UnityEngine::NAPRenderPipeline0::TBLLightDataAfterGbufferPass_NativeImpl* m_TBLLightDataAfterGbufferPass_Native; // 0x410
		::UnityEngine::Rendering::Universal::RTXAOPass* m_RTXAOPass; // 0x418
		::VolumetricCloudBlitPass* m_VolumetricCloudBlitPass; // 0x420
		::UnityEngine::NAPRenderPipeline0::DrawOverlayPass_NativeImpl* m_DrawOverlayPass_Native; // 0x428
		::VolumetricCloudV2ReconstructionPass* m_VolumetricCloudV2ReconstructionPass; // 0x430
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_PostProcessPass; // 0x438
		::UnityEngine::Rendering::Universal::OffScreenUISettingPass* m_OffScreenUISettingPass; // 0x440
		::UnityEngine::NAPRenderPipeline0::TBLLightDataPass_NativeImpl* m_TblLightDataPass_Native; // 0x448
		::UnityEngine::Rendering::Universal::NapCapturePass* m_NapCapturePass; // 0x450
		::UnityEngine::NAPRenderPipeline0::LateGbufferPass_NativeImpl* m_LateGbufferPass_Native; // 0x458
		::UnityEngine::NAPRenderPipeline0::SSGIPass* m_SSGIPass; // 0x460
		::UnityEngine::Rendering::Universal::Internal::EntityPreparePass* m_EntityPreparePass; // 0x468
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveCameraColorAttachment; // 0x470
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_AfterPostProcessColor; // 0x474
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveCameraDepthAttachment; // 0x478
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorAttachment; // 0x47C
		::System::Int32 RenderPassEventShadowAfterGbufferBias; // 0x480
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PartialBlurMaskTexture; // 0x484
		::System::Boolean m_UseFullResAttachment; // 0x488
		::System::Single m_SSPRHeight; // 0x48C
		::System::Int32 RenderPassEventLightLoopEnityPrepareBias; // 0x490
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraFullResDepthAttachment; // 0x494
		::System::Int32 RenderPassEventColorGradLutBias; // 0x498
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraFullResColorAttachment; // 0x49C
		::UnityEngine::Vector4 m_NapAvatarPosVector; // 0x4A0
		::System::Int32 RenderPassEventHizDepthPyramidBias; // 0x4B0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraDepthAttachment; // 0x4B4

		::System::Void _ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRendererData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CTOR_OFFSET))(this, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CCTOR_OFFSET))();
		}

		::System::Void BindNativeRenderPipelineCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_BINDNATIVERENDERPIPELINECALLBACK_OFFSET))(this);
		}

		::System::Void OnBeforeHalfResOffScreenTransparentDraw(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnAfterHalfResOffScreenTransparentDraw(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnGBufferPassAfterDecal(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDECAL_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnGBufferPassAfterOpaque(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTEROPAQUE_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void DrawGpuCrowdGBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_DRAWGPUCROWDGBUFFER_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnGBufferPassAfterDepthCopy(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDEPTHCOPY_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnGBufferPassAfterHizTest(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERHIZTEST_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnDeferredShadingPassAfterDrawOpaqueObjects(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONDEFERREDSHADINGPASSAFTERDRAWOPAQUEOBJECTS_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnAfterDrawForwardGBufferPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDRAWFORWARDGBUFFERPASS_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnAfterDeferredJustDirectLightPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDEFERREDJUSTDIRECTLIGHTPASS_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnBeforeBeginRenderPassInDeferredPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREBEGINRENDERPASSINDEFERREDPASS_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnAfterFirstDeferredShadingPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERFIRSTDEFERREDSHADINGPASS_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::Void OnInnerRenderShadowSlice(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONINNERRENDERSHADOWSLICE_OFFSET))(this, context, settings, sliceIndex, cmd);
		}

		static ::System::Void EnsureConsoleVariablesInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET))();
		}

		static ::UnityEngine::Rendering::SortingCriteria GetOpaqueSortCriteria()
		{
			return ((::UnityEngine::Rendering::SortingCriteria(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETOPAQUESORTCRITERIA_OFFSET))();
		}

		::UnityEngine::NAPRenderPipeline0::RenderPassEvent GetEtherEyeInteractablePassEvent()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RenderPassEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETETHEREYEINTERACTABLEPASSEVENT_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUP_OFFSET))(this, context, renderingData, globalSettings);
		}

		::System::Void SetWithoutUiBlurRenderTarget(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& color, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETWITHOUTUIBLURRENDERTARGET_OFFSET))(this, cameraData, color, depth);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void RegisterStaticEnvironment(::UnityEngine::Rendering::Universal::StaticEnvironment* staticEnv)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::StaticEnvironment*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REGISTERSTATICENVIRONMENT_OFFSET))(this, staticEnv);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPLIGHTS_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPCULLINGPARAMETERS_OFFSET))(this, cullingParameters, cameraData);
		}

		static ::System::Void FinishRenderingPerCamera(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERINGPERCAMERA_OFFSET))(cmd);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERING_OFFSET))(this, cmd);
		}

		::System::Void CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_CREATECAMERARENDERTARGET_OFFSET))(this, context, cameraData);
		}

		::System::Boolean RequiresIntermediateColorTexture(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REQUIRESINTERMEDIATECOLORTEXTURE_OFFSET))(this, cameraData);
		}

		static ::System::Void InitializeCameraViewConstants(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_INITIALIZECAMERAVIEWCONSTANTS_OFFSET))(cameraData, renderState);
		}

		static ::UnityEngine::Matrix4x4 GetJitteredProjectionMatrix(::UnityEngine::Matrix4x4& origProj, ::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraCacheData* cachedData, ::System::Int32 actualWidth, ::System::Int32 actualHeight, ::UnityEngine::Vector4& taaJitter, ::System::Int32 overridePhaseCount, ::System::Single overrideJitterSpraed)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraCacheData*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETJITTEREDPROJECTIONMATRIX_OFFSET))(origProj, camera, cachedData, actualWidth, actualHeight, taaJitter, overridePhaseCount, overrideJitterSpraed);
		}

		::System::Void __base_Dispose(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_DISPOSE_OFFSET))(this, P0);
		}

		::System::Void __base_FinishRendering(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_FINISHRENDERING_OFFSET))(this, P0);
		}

		::System::Void __base_SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& P0, ::UnityEngine::NAPRenderPipeline0::CameraData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPCULLINGPARAMETERS_OFFSET))(this, P0, P1);
		}

		::System::Void __base_SetupLights(::UnityEngine::Rendering::ScriptableRenderContext P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPLIGHTS_OFFSET))(this, P0, P1, P2);
		}
	};
}
