#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FSRUpSampleMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_DynamicCacheMemoryContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_EPostProcessShaderQualityLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_LensDirtParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_Level.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_PostProcessContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_UberPostContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/UberPostBaseCBuffer.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UberPostAndFinalPassSharedData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace PostProcess::MKGlow { class Effect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class SRPCmdBuffer; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }
namespace UnityEngine::Rendering::Universal { class Distortion; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }
namespace UnityEngine::Rendering::Universal { class Glitch; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Rendering::Universal { class MKGlow; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }
namespace UnityEngine::Rendering::Universal { class VREffects; }
namespace UnityEngine::Rendering::Universal { class Vignette; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass_MaterialLibrary; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ADDMATERIALTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1B07F490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BINDCAMERANORMALTEXTUREFORTRANSPARENTOCCLUDEDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1B09FA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET UNITYSDK_OFFSET(0x1B07F8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLUR_OFFSET UNITYSDK_OFFSET(0x1B08F720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET UNITYSDK_OFFSET(0x1B0994B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCMATEIRALDIRTYSTATES_OFFSET UNITYSDK_OFFSET(0x1B07F540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET UNITYSDK_OFFSET(0x1B099410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B0A9A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_COMMONSETUPPASS_OFFSET UNITYSDK_OFFSET(0x1B0AA870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x1B083F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x1B0822F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET UNITYSDK_OFFSET(0x1B0858A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET UNITYSDK_OFFSET(0x1B080A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0AAE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFINALPPS_OFFSET UNITYSDK_OFFSET(0x1B0A27E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR2_OFFSET UNITYSDK_OFFSET(0x1B08A640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET UNITYSDK_OFFSET(0x1B088D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET UNITYSDK_OFFSET(0x1B08BB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x1B082B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGSR_OFFSET UNITYSDK_OFFSET(0x1B085910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMETALFX_OFFSET UNITYSDK_OFFSET(0x1B08C240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET UNITYSDK_OFFSET(0x1B08C1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0x1B08C800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DONAPBLOOM_OFFSET UNITYSDK_OFFSET(0x1B090530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET UNITYSDK_OFFSET(0x1B098B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET UNITYSDK_OFFSET(0x1B099620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPIXELATION_OFFSET UNITYSDK_OFFSET(0x1B099B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPOSTOUTLINE_OFFSET UNITYSDK_OFFSET(0x1B085950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET UNITYSDK_OFFSET(0x1B09A0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSTOPNAN_OFFSET UNITYSDK_OFFSET(0x1B09CE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1B09B400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1B09D810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOSTANDVREFFECTSBEFOREFINALBLIT_OFFSET UNITYSDK_OFFSET(0x1B0A60E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET UNITYSDK_OFFSET(0x1B0A2A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET UNITYSDK_OFFSET(0x1B0A6F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET UNITYSDK_OFFSET(0x1B0A72F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET UNITYSDK_OFFSET(0x1B0A5AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVREFFECTS_OFFSET UNITYSDK_OFFSET(0x1B0A2E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWCHESSBOARD3DUI_OFFSET UNITYSDK_OFFSET(0x1B0861D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWOVERLAYTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1B086380)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET UNITYSDK_OFFSET(0x1B09B100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWTRANSPARENTOCCLUDEDOVERLAYAFTERTAA_OFFSET UNITYSDK_OFFSET(0x1B09F730)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWUIAVATARSHADOW_OFFSET UNITYSDK_OFFSET(0x1B086570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x1B0A7B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0AABA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1B088120)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTERPHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1B0880C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B08F610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARESETUP_OFFSET UNITYSDK_OFFSET(0x1B08EC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLUSHMATERIALMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1B07F610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FREEZETHISCAMERA_OFFSET UNITYSDK_OFFSET(0x1B0B2300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GENERATERANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0x1B088210)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETANDSETUPSHADERQUALITYFORUBER_OFFSET UNITYSDK_OFFSET(0x1B09FD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETASPECT_OFFSET UNITYSDK_OFFSET(0x1B08BDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B08BD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAWIDTH_OFFSET UNITYSDK_OFFSET(0x1B08BCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x1B084DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETFROZENRTID_OFFSET UNITYSDK_OFFSET(0x1B0B21C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0x1B085840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B08BF10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDIMENSION_OFFSET UNITYSDK_OFFSET(0x1B08BF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1B08BFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1B07F330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B07F0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0x1B08BD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B08BFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETWORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x1B08BE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOMREADONLYDATA_OFFSET UNITYSDK_OFFSET(0x1B08FD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET UNITYSDK_OFFSET(0x1B087040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_OFFFSR3_OFFSET UNITYSDK_OFFSET(0x1B088C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET UNITYSDK_OFFSET(0x1B084FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPARESSPRINPUTRT_OFFSET UNITYSDK_OFFSET(0x1B09CB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET UNITYSDK_OFFSET(0x1B0AAF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0x1B0AB830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SAFEDIVIDEONE_OFFSET UNITYSDK_OFFSET(0x1B0A7AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLORANDDEPTH_OFFSET UNITYSDK_OFFSET(0x1B07F720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B07F810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x1B0A1360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x1B0A1110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x1B09FFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDESERTHOTTWIST_OFFSET UNITYSDK_OFFSET(0x1B0A0ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET UNITYSDK_OFFSET(0x1B0A1FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET UNITYSDK_OFFSET(0x1B0B18E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDLSSCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B07F9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET UNITYSDK_OFFSET(0x1B0AAAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR2CONTEXT_OFFSET UNITYSDK_OFFSET(0x1B0873C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR3CONTEXT_OFFSET UNITYSDK_OFFSET(0x1B0875C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFXCOLORCORRECTION_OFFSET UNITYSDK_OFFSET(0x1B0A06D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET UNITYSDK_OFFSET(0x1B0A1400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET UNITYSDK_OFFSET(0x1B08BB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x1B0A0B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMKGLOW_OFFSET UNITYSDK_OFFSET(0x1B08C160)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B08E6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x1B0B08C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTAACONTEXT_OFFSET UNITYSDK_OFFSET(0x1B09D270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x1B09FE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET UNITYSDK_OFFSET(0x1B0A2240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B0A9A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SHOULDDRAWTRANSPARENTOCCLUDEDOVERLAYAFTERTAA_OFFSET UNITYSDK_OFFSET(0x1B09F670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B0B0470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UPDATEFSRUNIFORMPARAMS_OFFSET UNITYSDK_OFFSET(0x1B0883D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0B2660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A8CA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_TypeDefinitionIndex = 26699;

	class PostProcessPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__PyramidIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x21C50);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_jitterOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x21C58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_s_FrameGenSuppressorAlwaysOn()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x21C60);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_BloomTexScaler()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x21C68);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_RefGaussRadius()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x21C70);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FrameGenHudlessRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x67F0);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestRTId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6818);
		}
		static ::System::Int32* StaticGet__FSRFrameGenDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x681C);
		}
		static ::System::Int32* StaticGet__FSRFrameGenMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6820);
		}
		static ::System::Int32* StaticGet__FSRDest()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6824);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6828);
		}
		static ::System::Int32* StaticGet__FXExposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6850);
		}
		static ::System::UInt32* StaticGet_Lifetime_TempTarget3InPPPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6854);
		}
		static ::System::Int32* StaticGet__DLSSGInvertMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6858);
		}
		static ::UnityEngine::Rendering::RenderQueueRange* StaticGet_transparentOverlay()
		{
			return (::UnityEngine::Rendering::RenderQueueRange*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x685C);
		}
		static ::System::Int32* StaticGet__DLSSColorIn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6864);
		}
		static ::System::Single* StaticGet_m_OperationMode()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6868);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6870);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6898);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x68C0);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x68E8);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6910);
		}
		static ::System::Int32* StaticGet_CameraNormalTextureIdForTransparentOccludedOverlay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6938);
		}
		static ::System::Int32* StaticGet_k_TempUIAvatarShadowDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x693C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6940);
		}
		static ::System::Int32* StaticGet__DLSSMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6968);
		}
		static ::System::Int32* StaticGet__ProjectionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x696C);
		}
		static ::System::Int32* StaticGet__FXLutParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::System::Single* StaticGet_s_GlareScalerForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6974);
		}
		static ::System::Boolean* StaticGet_m_EnableMetalFX()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::System::Boolean* StaticGet_s_OverrideHDRBloomValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6979);
		}
		static ::System::Boolean* StaticGet_CanRunOnSRPHelper()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x697A);
		}
		static ::System::Boolean* StaticGet_s_UseLossyForMotionBlur()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x697B);
		}
		static ::System::Single* StaticGet_m_EdgeSharpness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x697C);
		}
		static ::System::Int32* StaticGet__VRTextureSheetTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::Int32* StaticGet__DLSSColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6984);
		}
		static ::System::Int32* StaticGet__DLSSGInvertDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::Int32* StaticGet__FSRColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x698C);
		}
		static ::System::UInt32* StaticGet_Lifetime_TempTarget1InPPPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::System::Single* StaticGet_s_GlareThresholdForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6994);
		}
		static ::System::Int32* StaticGet__FSRColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6998);
		}
		static ::System::Int32* StaticGet__FXLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x699C);
		}
		static ::System::Int32* StaticGet__FrameGenHudless()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69A0);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69A4);
		}
		static ::System::Int32* StaticGet__DLSSDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69A8);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69B0);
		}
		static ::System::Int32* StaticGet_k_TempTarget1InPPPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69D8);
		}
		static ::System::Int32* StaticGet_k_TempTarget3InPPPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x69DC);
		}
		// static const ::System::Boolean kISClientCG; // 0x0
		// static const ::System::Boolean kIsMobilePlatform; // 0x0
		// static const ::System::Boolean kIsAndroidPlatform; // 0x0
		// static const ::System::Boolean kIsFSR2CompatiblePlatform; // 0x0
		// static const ::System::Int32 BlurLevelCount = 0x4; // 0x0
		// static const ::System::Int32 NapMaxPyramidSize = 0x4; // 0x0
		// static const ::System::Int32 k_MaxPyramidSize = 0x10; // 0x0
		// static const ::System::String* k_RenderPostProcessingTag; // 0x0
		// static const ::System::String* k_RenderFinalPostProcessingTag; // 0x0
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAAHistoryBuffersRTIDs; // 0xA8
		::System::String* _profilerName; // 0xB0
		::UnityEngine::Rendering::Universal::RadialBlur* _radialBlur; // 0xB8
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT2; // 0xC0
		::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer; // 0xC8
		::UnityEngine::Rendering::Universal::PostProcessData* m_Data; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary* m_Materials; // 0xD8
		::UnityEngine::Rendering::Universal::LensDistortion* m_LensDistortion; // 0xE0
		::UnityEngine::ComputeBuffer* m_FFArgBuffer2; // 0xE8
		::UnityEngine::Rendering::Universal::FXComicDot* _fxComicDot; // 0xF0
		::UnityEngine::Rendering::Universal::PartialBlur* _partialBlur; // 0xF8
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_MVColorBufferLoadActions; // 0x100
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryStatusBuffers; // 0x108
		::UnityEngine::Rendering::Universal::PaniniProjection* m_PaniniProjection; // 0x110
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_TAAHistoryIDBuffers; // 0x118
		::UnityEngine::Rendering::Universal::Glitch* _glitch; // 0x120
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0x128
		::UnityEngine::Rendering::Universal::OldCRT* _oldCRT; // 0x130
		::UnityEngine::Rendering::Universal::FXColorCorrection* _fxColorCorrection; // 0x138
		::UnityEngine::Rendering::Universal::Distortion* _distortion; // 0x140
		::UnityEngine::Rendering::Universal::NapBloom* _napBloom; // 0x148
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MVColorBuffers; // 0x150
		::UnityEngine::ComputeBuffer* m_SpriteBuffer; // 0x158
		::PostProcess::MKGlow::Effect* effect; // 0x160
		::UnityEngine::ComputeBuffer* m_RegionDataBuffer; // 0x168
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_TAABuffersStoreAction; // 0x170
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_TAABuffersLoadAction; // 0x178
		::UnityEngine::Rendering::Universal::ColorLookup* m_ColorLookup; // 0x180
		::UnityEngine::Rendering::Universal::ChromaticAberration* m_ChromaticAberration; // 0x188
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdListForUIAvatarShadow; // 0x190
		::UnityEngine::Rendering::Universal::FilmGrain* m_FilmGrain; // 0x198
		::UnityEngine::Rendering::Universal::Vignette* m_Vignette; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::RenderingData _renderingData; // 0x1A8
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_MVColorBufferStoreActions; // 0x740
		::UnityEngine::Rendering::Universal::ForwardRenderer* m_Renderer; // 0x748
		::UnityEngine::Rendering::Universal::Tonemapping* m_Tonemapping; // 0x750
		::UnityEngine::Rendering::Universal::MKGlow* _mkglow; // 0x758
		::UnityEngine::ComputeBuffer* m_RegionAllocator; // 0x760
		::PostProcess::MKGlow::RenderTarget destinationRenderTarget; // 0x768
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* m_MaterialsToFlush; // 0x7A0
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryColorBuffers; // 0x7A8
		::UnityEngine::Rendering::Universal::MotionBlur* m_MotionBlur; // 0x7B0
		::UnityEngine::Rendering::Universal::DirectionalBlur* _directionalBlur; // 0x7B8
		::UnityEngine::Rendering::Universal::ScreenEffects* _screenEffects; // 0x7C0
		::Il2CppArray<::UnityEngine::Vector4>* m_BokehKernel; // 0x7C8
		::Il2CppArray<::UnityEngine::Vector4>* atlasSourceUVTransforms; // 0x7D0
		::UnityEngine::ComputeBuffer* m_SpriteIndirectArgBuffer; // 0x7D8
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_LensDirtParams m_LensDirtParams; // 0x7E0
		::UnityEngine::Rendering::Universal::UnsharpMask* _unsharpMask; // 0x828
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0x830
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::PostProcessPass_Level>* m_Pyramid; // 0x838
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAABuffers; // 0x840
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* m_GlobalSettings; // 0x848
		::UnityEngine::ComputeBuffer* m_FFTaskBuffer; // 0x850
		::UnityEngine::Rendering::Universal::MKGlow* mKGlowVolumeComponent; // 0x858
		::Il2CppArray<::UnityEngine::RenderTexture*>* m_TAAHistoryBuffers2; // 0x860
		::Il2CppArray<::UnityEngine::Vector4>* FSRUniformParams; // 0x868
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT3; // 0x870
		::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField; // 0x878
		::UnityEngine::Rendering::Universal::LensDirt* _LensDirt; // 0x880
		::PostProcess::MKGlow::RenderTarget sourceRenderTarget; // 0x888
		::UnityEngine::Rendering::SRPCmdBuffer* m_SRPBuffer; // 0x8C0
		::Il2CppArray<::UnityEngine::Vector4>* atlasTargetUVTransforms; // 0x8C8
		::UnityEngine::Rendering::Universal::VREffects* _vrEffects; // 0x8D0
		::UnityEngine::ComputeBuffer* m_FFArgBuffer; // 0x8D8
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVectorRTID; // 0x8E0
		::UnityEngine::RenderTextureDescriptor m_NonTAAUDescriptor; // 0x908
		::System::Int32 maxSpriteNum; // 0x940
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraMotionVectorsTextureRTID; // 0x948
		::UnityEngine::Matrix4x4 cameraViewMatrix; // 0x970
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassFinalDestination; // 0x9B0
		::UnityEngine::Rendering::RenderTargetIdentifier _TempHalfColorRTID; // 0x9B8
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVector2RTID; // 0x9E0
		::System::Single m_FSRJitterSpread; // 0xA08
		::UnityEngine::RenderTextureDescriptor _sourceDescriptor; // 0xA0C
		::UnityEngine::Rendering::RenderTargetIdentifier m_PassOriginalDepthIdentifier; // 0xA48
		::UnityEngine::Rendering::RenderTargetIdentifier _FullCoCTextureRTID; // 0xA70
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassOriginalSource; // 0xA98
		::UnityEngine::Matrix4x4 identityMatrix; // 0xA9C
		::UnityEngine::Rendering::RenderTargetIdentifier CurrentActiveRTID; // 0xAE0
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfColorBufferRTID; // 0xB08
		::UnityEngine::Rendering::RenderTargetIdentifier RTIDInvalid; // 0xB30
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfCoCTextureRTID; // 0xB58
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat; // 0xB80
		::System::Int32 m_JitterPhaseCount; // 0xB84
		::System::Single m_TaauScale; // 0xB88
		::UnityEngine::Matrix4x4 cameraGPUProjMatrix; // 0xB8C
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraDepthTextureRTID; // 0xBD0
		::UnityEngine::Rendering::RenderTargetIdentifier _EdgeTextureRTID; // 0xBF8
		::UnityEngine::RenderTextureDescriptor m_UpSampleDescriptor; // 0xC20
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForChessboardUI; // 0xC58
		::UnityEngine::RenderTextureDescriptor m_MotionDescriptor; // 0xC74
		::System::Boolean m_UsetTAAU; // 0xCAC
		::System::Boolean m_UseOffScreenParticleRT; // 0xCAD
		::System::Boolean m_HasFinalPass; // 0xCAE
		::System::Boolean napSecondaryBloomActive; // 0xCAF
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurDownSampleRtRTID; // 0xCB0
		::UnityEngine::NAPRenderPipeline0::FSRUpSampleMode m_FSRUpSampleMode; // 0xCD8
		::System::Boolean doBloomAfterAntialiasing; // 0xCDC
		::System::Boolean m_TaaUseLDRFormat; // 0xCDD
		::System::Boolean m_ColorLookupActive; // 0xCDE
		::System::Boolean napBloomActive; // 0xCDF
		::UnityEngine::RenderTextureDescriptor m_DepthDescriptor; // 0xCE0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowOpaque; // 0xD18
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurBlurredRtRTID; // 0xD38
		::UnityEngine::Rendering::RenderTargetIdentifier _PingTextureRTID; // 0xD60
		::UnityEngine::Rendering::RenderTargetIdentifier _BlendTextureRTID; // 0xD88
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResColorAttachment; // 0xDB0
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DofCoCFormat; // 0xDB4
		::UnityEngine::Vector2Int m_ColorLookupTextureSize; // 0xDB8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForOverlay; // 0xDC0
		::UnityEngine::Rendering::RenderTargetIdentifier cameraDataTargetTextureID; // 0xDE0
		::System::Int32 m_BokehHash; // 0xE08
		::System::Int32 _rendererBufferID; // 0xE0C
		::System::Boolean m_EnableSRGBConversionIfNeeded; // 0xE10
		::System::Boolean m_FSRResetHistory; // 0xE11
		::System::Boolean mkGlareIsReady; // 0xE12
		::System::Boolean m_ShouldBlitFrozenTexture; // 0xE13
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassOriginalDepth; // 0xE14
		::UnityEngine::Matrix4x4 idProjMat; // 0xE18
		::UnityEngine::RenderTextureDescriptor m_UIAvatarShadowDepthDescriptor; // 0xE58
		::System::Int32 m_DitheringTextureIndex; // 0xE90
		::System::Single _rand; // 0xE94
		::UnityEngine::Rendering::RenderTargetIdentifier _PongTextureRTID; // 0xE98
		::System::Int32 m_MaterialRefreshPass; // 0xEC0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowTransparent; // 0xEC4
		::UnityEngine::Rendering::RenderTargetIdentifier m_UIAvatarShadowDepthIdentifier; // 0xEE0
		::UnityEngine::Matrix4x4 cameraProjMatrix; // 0xF08
		::System::Boolean m_FSRUseSMAA; // 0xF48
		::System::Boolean m_TAAIsFirstFrame; // 0xF49
		::System::Boolean m_IsFinalPass; // 0xF4A
		::System::Boolean _isScrFxLastFrameActive; // 0xF4B
		::UnityEngine::RenderTextureDescriptor m_Descriptor; // 0xF4C
		::UnityEngine::RenderTextureDescriptor m_ColorOutDescriptor; // 0xF84
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat; // 0xFBC
		::UnityEngine::Rendering::RenderTargetIdentifier m_ColorLookupTextureId; // 0xFC0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResDepthAttachment; // 0xFE8
		::UnityEngine::Vector2Int FFResolution; // 0xFEC
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfAlphaBufferRTID; // 0xFF8
		::UnityEngine::Rendering::RenderTargetIdentifier m_PassOriginalSourceID; // 0x1020
		::UnityEngine::Rendering::RenderTargetIdentifier _FrozenTextureRTID; // 0x1048
		::UnityEngine::Rendering::RenderTargetIdentifier flareAtlas; // 0x1070

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::Rendering::Universal::PostProcessData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::Rendering::Universal::PostProcessData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderer, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor(::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET))(this, lossy);
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 depthBufferBits, ::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET))(this, width, height, format, depthBufferBits, lossy);
		}

		::System::Void AddMaterialToFlush(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ADDMATERIALTOFLUSH_OFFSET))(this, wrapper);
		}

		::System::Void CalcMateiralDirtyStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCMATEIRALDIRTYSTATES_OFFSET))(this);
		}

		::System::Void FlushMaterialModifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLUSHMATERIALMODIFICATIONS_OFFSET))(this);
		}

		::System::Void SetRenderTargetColorAndDepth(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext& dynamicCache, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderTargetIdentifier& depthID, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLORANDDEPTH_OFFSET))(this, cmdWrapper, colorID, dynamicCache, colorLoad, depthID, colorStore, depthLoad, depthStore);
		}

		::System::Void SetRenderTargetColor(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext& dynamicCache, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLOR_OFFSET))(this, cmdWrapper, colorID, dynamicCache, colorLoad, colorStore, depthLoad, depthStore);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET))(this, cmdWrapper, rt);
		}

		::System::Void SetupDLSSContext(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDLSSCONTEXT_OFFSET))(this, cameraData);
		}

		::System::Void DoDLSS(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean hasMotionBlurPass, ::System::Boolean& composeGaussianDofWithMotionBlur)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, passContext, uberPostData, hasMotionBlurPass, composeGaussianDofWithMotionBlur);
		}

		::UnityEngine::Vector4 GetCoCParams(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOCPARAMS_OFFSET))(this, cameraData);
		}

		::System::Void DoGaussianDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect, ::System::Boolean delayCompose)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, source, destination, pixelRect, delayCompose);
		}

		::System::Void PrepareBokehKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET))(this);
		}

		static ::System::Single GetMaxBokehRadiusInPixels(::System::Single viewportHeight)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET))(viewportHeight);
		}

		::System::Void DoBokehDepthOfField(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET))(this, cmdWrapper, cameraData, source, destination, pixelRect, uberPostData);
		}

		::System::Void DoDistortionBlit(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean isBeforeDof)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET))(this, cmdWrapper, context, cameraData, isBeforeDof);
		}

		::System::Void DoGSR()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGSR_OFFSET))(this);
		}

		::System::Void DoPostOutline(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPOSTOUTLINE_OFFSET))(this, cmdWrapper, passContext, cameraData);
		}

		::System::Void DrawChessboard3DUI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWCHESSBOARD3DUI_OFFSET))(this, cmd, renderingData, context, postCullRenderingData);
		}

		::System::Void DrawOverlayTransparent(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWOVERLAYTRANSPARENT_OFFSET))(this, cmd, renderingData, context, postCullRenderingData);
		}

		::System::Void DrawUIAvatarShadow(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWUIAVATARSHADOW_OFFSET))(this, cmdWrapper, renderingData, cameraData, context, postCullRenderingData, passContext);
		}

		::System::Void SetupFSR2Context(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR2CONTEXT_OFFSET))(this, cameraData);
		}

		::System::Void SetupFSR3Context(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR3CONTEXT_OFFSET))(this, cameraData);
		}

		static ::System::Int32 ffxFsr2GetJitterPhaseCount(::System::Single upscale)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTERPHASECOUNT_OFFSET))(upscale);
		}

		static ::UnityEngine::Vector2 ffxFsr2GetJitterOffset(::System::Int32 index, ::System::Int32 phaseCount)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTEROFFSET_OFFSET))(index, phaseCount);
		}

		::UnityEngine::Vector2 GenerateRandomOffset(::System::Int32 frameIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GENERATERANDOMOFFSET_OFFSET))(this, frameIndex);
		}

		::System::Void UpdateFSRUniformParams(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UPDATEFSRUNIFORMPARAMS_OFFSET))(this, camera, cameraData);
		}

		::System::Void OffFSR3(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_OFFFSR3_OFFSET))(this, cmdWrapper);
		}

		::System::Void DoFSR3(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoFSR2(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR2_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoFXComicDot(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET))(this, cmdWrapper, context, cameraData);
		}

		::System::Void SetupGrain(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel& shaderQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET))(this, cameraData, uberOrFinalPassMaterial, sharedData, shaderQuality);
		}

		::System::Int32 GetCameraWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAWIDTH_OFFSET))(this);
		}

		::System::Int32 GetCameraHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAHEIGHT_OFFSET))(this);
		}

		::System::Boolean GetStereoEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOENABLED_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETASPECT_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldToCameraMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETWORLDTOCAMERAMATRIX_OFFSET))(this);
		}

		::System::Boolean GetOverwriteDescriptor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDESCRIPTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::TextureDimension GetOverwriteDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDIMENSION_OFFSET))(this);
		}

		::System::Int32 GetOverwriteVolumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET))(this);
		}

		::System::Boolean GetTargetTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void SetupMKGlow(::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMKGLOW_OFFSET))(this, cameraTextureDescriptor);
		}

		::System::Void DoMKGlow(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::MKGlow* mkGlow)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::MKGlow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET))(this, cmdWrapper, passContext, context, renderingData, mkGlow);
		}

		::System::Void DoMetalFx(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMETALFX_OFFSET))(this, cmdWrapper, passContext, cameraData, cameraTarget);
		}

		::System::Void DoMotionBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::System::Boolean composeDoF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET))(this, cameraData, cmdWrapper, passContext, composeDoF);
		}

		::System::Void SetupNapBloomContext(::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean isHDRDisplayOn, ::System::Boolean isGlobalSettingBloomOn)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOMCONTEXT_OFFSET))(this, uberPostData, isHDRDisplayOn, isGlobalSettingBloomOn);
		}

		::System::Void FlareSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARESETUP_OFFSET))(this);
		}

		::System::Void FlareCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARECLEANUP_OFFSET))(this);
		}

		::System::Void Blur(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& src, ::UnityEngine::Rendering::RenderTargetIdentifier& dst, ::UnityEngine::Rendering::RenderTargetIdentifier& tmp, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* materialH, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* materialV, ::System::Int32 gaussWidth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLUR_OFFSET))(this, cmdWrapper, src, dst, tmp, width, height, materialH, materialV, gaussWidth);
		}

		::System::Void InitNapBloomReadonlyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOMREADONLYDATA_OFFSET))(this);
		}

		::System::Void DoNapBloom(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean useOffScreenParticleRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DONAPBLOOM_OFFSET))(this, cmdWrapper, passContext, uberMaterial, uberPostData, renderingData, useOffScreenParticleRT);
		}

		::System::Void DoPaniniProjection(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET))(this, cameraData);
		}

		::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Single d)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET))(this, cameraData, d);
		}

		::System::Void DoPartialBlur(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET))(this, cmdWrapper, passContext, cameraData);
		}

		::System::Void DoPixelation(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPIXELATION_OFFSET))(this, cmdWrapper, passContext, cameraData);
		}

		::System::Void DoRadialBlurOrDirectionalBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::System::Void DrawRainDropAndSplash(::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::System::Boolean beforeAntialiasingCall)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET))(this, context, renderingData, cmdWrapper, beforeAntialiasingCall);
		}

		::System::Void DoSubpixelMorphologicalAntialiasing(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::System::Boolean onlyApplyOnCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET))(this, cameraData, cmdWrapper, passContext, onlyApplyOnCharacter);
		}

		::System::Void PrepareSSPRInputRT(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPARESSPRINPUTRT_OFFSET))(this, cameraData, passContext, cmdWrapper);
		}

		::System::Void DoStopNaN(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSTOPNAN_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::System::Boolean IsUsingTAAU(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET))(this, cameraData);
		}

		::System::Void SetupTAAContext(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTAACONTEXT_OFFSET))(this, renderingData, cameraData);
		}

		::System::Void DoTemporalAntialiasing(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET))(this, renderingData, cmdWrapper, passContext);
		}

		static ::System::Boolean ShouldDrawTransparentOccludedOverlayAfterTAA(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SHOULDDRAWTRANSPARENTOCCLUDEDOVERLAYAFTERTAA_OFFSET))(cameraData);
		}

		::System::Void DrawTransparentOccludedOverlayAfterTAA(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWTRANSPARENTOCCLUDEDOVERLAYAFTERTAA_OFFSET))(this, renderingData, cmdWrapper, passContext);
		}

		static ::System::Void BindCameraNormalTextureForTransparentOccludedOverlay(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BINDCAMERANORMALTEXTUREFORTRANSPARENTOCCLUDEDOVERLAY_OFFSET))(cmdWrapper);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel GetAndSetupShaderQualityForUber()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETANDSETUPSHADERQUALITYFORUBER_OFFSET))(this);
		}

		::System::Void SetupVignette(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET))(this, uberMaterial, uberPostData, isPlanarReflectionCamera);
		}

		::System::Void SetupColorGrading(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& cbufferData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET))(this, cmdWrapper, renderingData, uberMaterial, cbufferData);
		}

		::System::Void SetupFXColorCorrection(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFXCOLORCORRECTION_OFFSET))(this, uberMaterial);
		}

		::System::Void SetupLensDistortion(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::System::Boolean isSceneView, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Boolean, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET))(this, uberMaterial, isSceneView, uberPostData);
		}

		::System::Void SetupDesertHotTwist(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* envConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDESERTHOTTWIST_OFFSET))(this, uberMaterial, uberPostData, envConfig);
		}

		::System::Void SetupChromaticAberration(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET))(this, uberMaterial, uberPostData);
		}

		::System::Void SetupCharacterGhost(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHARACTERGHOST_OFFSET))(this, uberMaterial, uberPostData);
		}

		::System::Void SetupGlitch(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET))(this, cmdWrapper, uberMaterial, uberPostData);
		}

		::System::Void SetupDistortion(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel& shaderQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET))(this, renderer, uberMaterial, cameraData, uberPostData, shaderQuality);
		}

		::System::Void SetupVREffects(::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET))(this, uberPostData);
		}

		::System::Void DoFinalPPS(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean renderToTempScaledRT, ::UnityEngine::Rendering::RenderTargetIdentifier cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFINALPPS_OFFSET))(this, cmdWrapper, uberPostContext, passContext, cameraData, renderToTempScaledRT, cameraTarget);
		}

		::System::Void DoUberPostAndVREffectsBeforeFinalBlit(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier sourceInput, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOSTANDVREFFECTSBEFOREFINALBLIT_OFFSET))(this, cmdWrapper, sourceInput, cameraData, passContext, uberPostContext);
		}

		::System::Void DoUberPost(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET))(this, cmdWrapper, cameraData, destination);
		}

		::System::Void DoUberPost_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean renderToTempScaledRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET))(this, cmdWrapper, cameraData, renderToTempScaledRT);
		}

		::System::Void DoUnsharpMask(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET))(this, cmdWrapper, cameraData, passContext);
		}

		::System::Void DoVRDistortion(::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET))(this, uberPostContext, cmdWrapper, source);
		}

		::System::Void DoVREffects(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier depthIdIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVREFFECTS_OFFSET))(this, cameraData, cmdWrapper, source, depthIdIdentifier);
		}

		::System::Single SafeDivideOne(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SAFEDIVIDEONE_OFFSET))(this, a);
		}

		::System::Void DrawVREffectsOutlineDistortion(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier& depthRTId, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET))(this, cmdWrapper, renderingData, depthRTId, destination);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& source, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& destination, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& depth, ::System::Boolean hasFinalPass, ::System::Boolean enableSRGBConversion, ::System::Boolean useOffScreenParticleRT, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResColor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET))(this, renderingData, baseDescriptor, source, destination, depth, hasFinalPass, enableSRGBConversion, useOffScreenParticleRT, globalSettings, fullResColor, fullResDepth);
		}

		::System::Void SetupFinalPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET))(this, cameraData, source);
		}

		::System::Void CommonSetupPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_COMMONSETUPPASS_OFFSET))(this, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DoExecute(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOEXECUTE_OFFSET))(this, renderer, cmdWrapper, renderingData, context, postCullRenderingData);
		}

		::System::Void TransitionResource(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET))(this, cmdWrapper, res);
		}

		::System::Void Render(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET))(this, renderer, cmdWrapper, renderingData, context, postCullRenderingData);
		}

		::System::Void SetupScreenEffects(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET))(this, uberMaterial);
		}

		static ::System::Boolean GetFrozenRTID(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier& rtid)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETFROZENRTID_OFFSET))(cameraData, rtid);
		}

		static ::System::Void FreezeThisCamera(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& frozenRTID)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FREEZETHISCAMERA_OFFSET))(renderingData, cmdWrapper, frozenRTID);
		}

		::System::Void SetupDithering(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET))(this, cameraData, uberOrFinalPassMaterial, sharedData);
		}

		::System::Void RenderFinalPass(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET))(this, cmdWrapper, renderingData);
		}
	};
}
