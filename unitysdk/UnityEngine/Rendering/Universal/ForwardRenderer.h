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
namespace UnityEngine::Rendering::Universal { class OffFSR3FrameGenPass; }
namespace UnityEngine::Rendering::Universal { class OffScreenUISettingPass; }
namespace UnityEngine::Rendering::Universal { class OpaquePostProcessSecond; }
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
namespace UnityEngine::Rendering::Universal::Internal { class ReactiveMaskPass; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectHighlightPass; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterInteractionPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_BINDNATIVERENDERPIPELINECALLBACK_OFFSET UNITYSDK_OFFSET(0x19091360)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_CREATECAMERARENDERTARGET_OFFSET UNITYSDK_OFFSET(0x190A7C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190A8910)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x19092DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERINGPERCAMERA_OFFSET UNITYSDK_OFFSET(0x190A9540)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x190A9600)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETJITTEREDPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x190A97F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETOPAQUESORTCRITERIA_OFFSET UNITYSDK_OFFSET(0x190930F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_INITIALIZECAMERAVIEWCONSTANTS_OFFSET UNITYSDK_OFFSET(0x190A6270)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDEFERREDJUSTDIRECTLIGHTPASS_OFFSET UNITYSDK_OFFSET(0x19092600)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERDRAWFORWARDGBUFFERPASS_OFFSET UNITYSDK_OFFSET(0x190924E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERFIRSTDEFERREDSHADINGPASS_OFFSET UNITYSDK_OFFSET(0x19092720)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONAFTERHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET UNITYSDK_OFFSET(0x190916E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREBEGINRENDERPASSINDEFERREDPASS_OFFSET UNITYSDK_OFFSET(0x19092690)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONBEFOREHALFRESOFFSCREENTRANSPARENTDRAW_OFFSET UNITYSDK_OFFSET(0x19091670)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONDEFERREDSHADINGPASSAFTERDRAWOPAQUEOBJECTS_OFFSET UNITYSDK_OFFSET(0x19092470)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDECAL_OFFSET UNITYSDK_OFFSET(0x190917B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERDEPTHCOPY_OFFSET UNITYSDK_OFFSET(0x190920D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTERHIZTEST_OFFSET UNITYSDK_OFFSET(0x19092360)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONGBUFFERPASSAFTEROPAQUE_OFFSET UNITYSDK_OFFSET(0x19091B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_ONINNERRENDERSHADOWSLICE_OFFSET UNITYSDK_OFFSET(0x19092960)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REGISTERSTATICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x190A8D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_REQUIRESINTERMEDIATECOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x190A7840)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x190A8F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x190A8F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0x19099BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETWITHOUTUIBLURRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x190A6180)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A9CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19093130)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190A9D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x190A9DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x190A9E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___BASE_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x190A9ED0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRenderer_TypeDefinitionIndex = 29993;

	class ForwardRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSkyLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23420);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23428);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeVolumetricFog()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23430);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeGenerateLightShaft()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23438);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_ScreenCullingRatioTmp()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23440);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSSSR()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23448);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativePerObjectShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23450);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeAmplifyOcclusion()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23458);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeSceneColorGradingLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23460);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeReflection()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23468);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_UseNativeNAPCapsuleAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x23470);
		}
		static ::UnityEngine::NAPRenderPipeline0::MaterialDebugMode* StaticGet_m_DebugFeature()
		{
			return (::UnityEngine::NAPRenderPipeline0::MaterialDebugMode*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A50);
		}
		static ::System::Int32* StaticGet_s_PassHideFlag()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A54);
		}
		static ::System::Int32* StaticGet_s_DefaultTAAPhaseCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A58);
		}
		static ::System::Boolean* StaticGet_UseNativeCopyColor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A5C);
		}
		static ::System::Boolean* StaticGet_s_EnableShadowCullSimplification()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A5D);
		}
		static ::System::Boolean* StaticGet_s_ConsoleVariablesInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A5E);
		}
		static ::System::Boolean* StaticGet_overrideScreenRatioCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer_TypeDefinitionIndex)->GetStaticField(0x5A5F);
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
		// static const ::System::String* kProfileTagBrightSpotsFlarePass; // 0x0
		::DrawAfterSkyboxPass* m_DrawAfterSkyboxPass; // 0xB0
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleUpdatePass* m_OffscreenParticleUpdatePass; // 0xB8
		::UnityEngine::NAPRenderPipeline0::PerObjectShadowPass* m_PerObjectShadowPass; // 0xC0
		::UnityEngine::NAPRenderPipeline0::VolumetricFogPass* m_VolumetricFogPass; // 0xC8
		::UnityEngine::NAPRenderPipeline0::PreProcessPass* m_PreProcessPassResetAfterShadowCaster; // 0xD0
		::UnityEngine::Rendering::Universal::RTXAOPass* m_RTXAOPass; // 0xD8
		::VolumetricCloudPass* m_VolumetricCloudPass; // 0xE0
		::UnityEngine::Rendering::Universal::Internal::EtherEyeInteractablePass* m_EtherEyeInteractablePass; // 0xE8
		::UnityEngine::NAPRenderPipeline0::FxFogMaskPass_NativeImpl* m_FxFogMaskPass_Native; // 0xF0
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* m_LyraUpdateProbePass; // 0xF8
		::UnityEngine::Rendering::Universal::Internal::GPUGrassUpdatePass* m_GpuGrassUpdatePass; // 0x100
		::UnityEngine::Rendering::Universal::Internal::SceneObjectHighlightPass* m_SceneObjectHighlightPass; // 0x108
		::UnityEngine::NAPRenderPipeline0::Draw3DUIPass_NativeImpl* m_Draw3DUIPass_Native; // 0x110
		::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass* m_ScreenSpaceShadowResolvePass; // 0x118
		::UnityEngine::NAPRenderPipeline0::NapSecondaryBloomPass_NativeImpl* m_NapSecondaryBloomPass_Native; // 0x120
		::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights; // 0x128
		::UnityEngine::NAPRenderPipeline0::SSRPass_NativeImpl* m_SsrPass_Native; // 0x130
		::UnityEngine::Rendering::Universal::Internal::WaterGenPass* m_WaterGenPass; // 0x138
		::UnityEngine::NAPRenderPipeline0::TBLLightDataPass* m_TblLightDataPass; // 0x140
		::UnityEngine::NAPRenderPipeline0::DrawSkyboxPass_NativeImpl* m_DrawSkyboxPass_Native; // 0x148
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateClipmapPass* m_LyraUpdateClipmapPass; // 0x150
		::VolumetricCloudBlitPass* m_VolumetricCloudBlitPass; // 0x158
		::UnityEngine::NAPRenderPipeline0::ColorGradingLutPass* m_ColorGradingLutPass; // 0x160
		::UnityEngine::Rendering::Universal::Internal::LyraDebugPass* m_LyraDebugPass; // 0x168
		::UnityEngine::NAPRenderPipeline0::SkyLutPass_NativeImpl* m_SkyLutPass_Native; // 0x170
		::UnityEngine::NAPRenderPipeline0::ScreenSpacePlanarReflectionsPass* m_SSPRPass; // 0x178
		::UnityEngine::Rendering::Universal::OffScreenUISettingPass* m_OffScreenUISettingPass; // 0x180
		::UnityEngine::NAPRenderPipeline0::GaussianBlurPass_NativeImpl* m_GaussianBlurPass_Native; // 0x188
		::UnityEngine::NAPRenderPipeline0::RTXBuildAccelerationStructurePass* m_RTXBuildAccelerationStructurePass; // 0x190
		::UnityEngine::NAPRenderPipeline0::FinalBlitPass_NativeImpl* m_FinalBlitPass_Native; // 0x198
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_SceneColorGradingLutPass_Native; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::SunShadowCachePass* m_SunShadowCachePass; // 0x1A8
		::UnityEngine::Rendering::Universal::ExtraMotionVectorPass* m_ExtraMotionVectorPass; // 0x1B0
		::UnityEngine::Rendering::Universal::Internal::LyraApplyPass* m_LyraApplyPass; // 0x1B8
		::UnityEngine::Rendering::Universal::OffFSR3FrameGenPass* m_OffFSR3FrameGenPass; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_PreProcessPassResetAfterShadowCaster_Native; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::PresentFrozenTexturePass* m_PresentFrozenTexturePass; // 0x1D0
		::UnityEngine::Rendering::Universal::AmplifyOcclusionPass_NotNative* m_AmplifyOcclusionPass; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::SkyLutPass* m_SkyLutPass; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::DrawOverlayPass_NativeImpl* m_DrawOverlayPass_Native; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_BeginInitPass_Native; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::FrameEstimateUIInfoPass_NativeImpl* m_FrameEstimateUIInfoPass_Native; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::ReflectionPass_NativeImpl* m_MirrorReflectionPass_Native; // 0x200
		::UnityEngine::NAPRenderPipeline0::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass; // 0x208
		::UnityEngine::NAPRenderPipeline0::TransparentSettingsPass_NativeImpl* m_TransparentSettingsPass_Native; // 0x210
		::UnityEngine::Rendering::Universal::Internal::WaterInteractionPass* m_WaterInteractionPass; // 0x218
		::UnityEngine::Rendering::Universal::Internal::LyraAfterDeferredShading* m_LyraAfterDeferredShadingPass; // 0x220
		::UnityEngine::NAPRenderPipeline0::SSRPass* m_SsrPass; // 0x228
		::UnityEngine::Rendering::Universal::Internal::DrawOutlineObjectsPass* m_DrawOutlineObjectsPass; // 0x230
		::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs* curConfigs; // 0x238
		::UnityEngine::NAPRenderPipeline0::GenerateLightShaftPass_NativeImpl* m_GenerateLightShaftPass_Native; // 0x240
		::UnityEngine::Rendering::Universal::Internal::GpuBoidUpdatePass* m_GpuBoidUpdatePass; // 0x248
		::UnityEngine::Rendering::Universal::SplineOutlinePass* m_SpineOutlinePass; // 0x250
		::UnityEngine::NAPRenderPipeline0::PreProcessPass* m_PreProcessPassReset; // 0x258
		::UnityEngine::NAPRenderPipeline0::DeferredShadingPass_NativeImpl* m_DeferredShadingPass_Native; // 0x260
		::UnityEngine::NAPRenderPipeline0::PresentFrozenTexturePass_NativeImpl* m_PresentFrozenTexturePass_Native; // 0x268
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_PostProcessPass; // 0x270
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_FinalPostProcessPass; // 0x278
		::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass_NativeImpl* m_ScreenSpaceShadowResolvePass_Native; // 0x280
		::CharacterRampTexPass* m_CharacterRampTexPass; // 0x288
		::UnityEngine::Rendering::Universal::FluidSimPass* m_FluidSimPass; // 0x290
		::UnityEngine::Rendering::Universal::Internal::DrawFootPrintPass* m_DrawFootPrintPass; // 0x298
		::UnityEngine::Rendering::Universal::Internal::DrawFullResOffScreenTransparentObjectsPass* m_FullResOffScreenTransparentObjectsPass; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::DistortionPass_NativeImpl* m_DistortionPass_Native; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::SSGIPass* m_SSGIPass; // 0x2B0
		::UnityEngine::Rendering::Universal::Internal::DrawOpaqueAfterDeferredShadingPass* m_DrawOpaqueAfterDeferredShadingPass; // 0x2B8
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_PreProcessPassReset_Native; // 0x2C0
		::UnityEngine::Rendering::Universal::BrightSpotsFlarePass* m_BrightSpotsFlarePass; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass* m_PunctualLightShadowCasterPass; // 0x2D0
		::UnityEngine::Rendering::Universal::CharacterGhostPass* m_CharacterGhostPass; // 0x2D8
		::UnityEngine::NAPRenderPipeline0::GBufferPass_NativeImpl* m_GBufferPass_Native; // 0x2E0
		::OceanEdgeFoamPass* m_OceanEdgeFoamPass; // 0x2E8
		::UnityEngine::NAPRenderPipeline0::MainLightShadowCasterPass_NativeImpl* m_MainLightShadowCasterpass_Native; // 0x2F0
		::UnityEngine::NAPRenderPipeline0::CapsuleAOPass_NativeImpl* m_CapsuleAOPass_Native; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::ReflectionPass* m_MirrorReflectionPass; // 0x300
		::UnityEngine::NAPRenderPipeline0::LensFlareOcclusionPass* m_LensFlareOcclusionPass; // 0x308
		::UnityEngine::Rendering::Universal::Internal::ReactiveMaskPass* m_ReactiveMaskPass; // 0x310
		::UnityEngine::NAPRenderPipeline0::AmplifyOcclusionPass_NativeImpl* m_AmplifyOcclusionPass_Native; // 0x318
		::UnityEngine::Rendering::Universal::BlendUIColorPass* m_BlendUIColorPass; // 0x320
		::UnityEngine::NAPRenderPipeline0::DrawOpaqueObjectsPass_NativeImpl* m_RenderOpaqueForwardPass_Native; // 0x328
		::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass; // 0x330
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_ColorGradingLutPass_Native; // 0x338
		::UnityEngine::NAPRenderPipeline0::FrameEstimateInfoPass_NativeImpl* m_FrameEstimateInfoPass_Native; // 0x340
		::UnityEngine::NAPRenderPipeline0::DrawOffScreenTransparentObjectsPass_NativeImpl* m_RenderOffScreenTransparentObjectsPass_Native; // 0x348
		::UnityEngine::Rendering::Universal::Internal::EntityPreparePass* m_EntityPreparePass; // 0x350
		::UnityEngine::NAPRenderPipeline0::Draw3DUIPass* m_Draw3DUIPass; // 0x358
		::UnityEngine::NAPRenderPipeline0::OpaquePostProcessPass_NativeImpl* m_OpaquePostProcessPass_Native; // 0x360
		::UnityEngine::NAPRenderPipeline0::GenerateLightShaftPass* m_GenerateLightShaftPass; // 0x368
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* RenderPassEventConfig; // 0x370
		::UnityEngine::Rendering::Universal::CharacterIgnisFatuusPass* m_CharacterIgnisFatuusPass; // 0x378
		::UnityEngine::Rendering::Universal::Internal::DrawTransparentObjectsPass* m_RenderTransparentForwardPass; // 0x380
		::UnityEngine::NAPRenderPipeline0::VolumetricFogPass_NativeImpl* m_VolumetricFogPass_Native; // 0x388
		::UnityEngine::Rendering::Universal::NapCapturePass* m_NapCapturePass; // 0x390
		::UnityEngine::NAPRenderPipeline0::TBLLightDataPass_NativeImpl* m_TblLightDataPass_Native; // 0x398
		::UnityEngine::Rendering::Universal::Internal::FrameEstimateInfoPass_Managed* m_FrameEstimateInfoPass_Managed; // 0x3A0
		::UnityEngine::NAPRenderPipeline0::DrawOverlayPass* m_DrawOverlayPass; // 0x3A8
		::UnityEngine::Rendering::Universal::OpaquePostProcessSecond* m_OpaquePostProcessSecond; // 0x3B0
		::UnityEngine::NAPRenderPipeline0::TBLLightDataAfterGbufferPass_NativeImpl* m_TBLLightDataAfterGbufferPass_Native; // 0x3B8
		::UnityEngine::NAPRenderPipeline0::PunctualLightShadowCasterPass_NativeImpl* m_PunctualLightShadowCasterPass_Native; // 0x3C0
		::UnityEngine::Rendering::Universal::MKGlarePass* m_MKGlarePass; // 0x3C8
		::UnityEngine::Rendering::Universal::Internal::DamageDecalLUTPass* m_DamageDecalLUTPass; // 0x3D0
		::UnityEngine::Rendering::Universal::Internal::CopyColorPass_NotNative* m_CopyColorPass; // 0x3D8
		::DrawSkyCloudPass* m_DrawSkyCloudPass; // 0x3E0
		::UnityEngine::NAPRenderPipeline0::TransparentSettingsPass* m_TransparentSettingsPass; // 0x3E8
		::UnityEngine::NAPRenderPipeline::CopyCharacterColorPass* m_CopyCharacterColorPass; // 0x3F0
		::UnityEngine::Rendering::Universal::ColorGradingLutPass_SceneNotNative* m_SceneColorGradingLutPass; // 0x3F8
		::UnityEngine::NAPRenderPipeline0::LateGbufferPass_NativeImpl* m_LateGbufferPass_Native; // 0x400
		::UnityEngine::NAPRenderPipeline0::PerObjectShadowPass_NativeImpl* m_PerObjectShadowPass_Native; // 0x408
		::UnityEngine::Rendering::Universal::TransparentMaskPass* m_TransparentMaskPass; // 0x410
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* m_CharColorGradingLutPass_Native; // 0x418
		::UnityEngine::NAPRenderPipeline0::NapSecondaryBloomPass* m_NapSecondaryBloomPass; // 0x420
		::UnityEngine::NAPRenderPipeline0::CopyColorPass_NativeImpl* m_CopyColorPass_Native; // 0x428
		::UnityEngine::NAPRenderPipeline0::FxFogMaskPass* m_FxFogMaskPass; // 0x430
		::UnityEngine::Vector4 m_NapAvatarPosVector; // 0x438
		::System::Boolean m_UseFullResAttachment; // 0x448
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveCameraDepthAttachment; // 0x44C
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraFullResDepthAttachment; // 0x450
		::System::Single m_SSPRHeight; // 0x454
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorAttachment; // 0x458
		::System::Int32 RenderPassEventHizDepthPyramidBias; // 0x45C
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraFullResColorAttachment; // 0x460
		::System::Int32 RenderPassEventColorGradLutBias; // 0x464
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveCameraColorAttachment; // 0x468
		::System::Int32 RenderPassEventShadowAfterGbufferBias; // 0x46C
		::System::Int32 RenderPassEventLightLoopEnityPrepareBias; // 0x470
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_AfterPostProcessColor; // 0x474
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraDepthAttachment; // 0x478

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
