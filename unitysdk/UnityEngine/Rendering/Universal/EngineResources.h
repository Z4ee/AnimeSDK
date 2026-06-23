#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::NAPRenderPipeline0 { class HableCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererExtension; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CEF1340)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1CEF09D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CEEDE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1CEF10E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CEF02F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1CEF0570)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1CEEBE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEEBFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CEF14F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1B80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EngineResources_TypeDefinitionIndex = 27344;

	class EngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_FluidFxPressure()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20020);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20028);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineObjectMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20030);
		}
		static ::UnityEngine::Material** StaticGet_m_FxPostProcessFogPSMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20038);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitCubeTextureFaceMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20040);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineEffectsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20048);
		}
		static ::UnityEngine::Material** StaticGet_m_BulletHoleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20050);
		}
		static ::UnityEngine::Material** StaticGet_m_CaptureMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20058);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomBlurCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20060);
		}
		static ::UnityEngine::Material** StaticGet_m_UVViewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20068);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20070);
		}
		static ::UnityEngine::Texture2D** StaticGet_FSRLuminanceBiasLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20078);
		}
		static ::UnityEngine::Material** StaticGet_m_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20080);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20088);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomUpCombineCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20090);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20098);
		}
		static ::UnityEngine::Material** StaticGet_m_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200A0);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxComposisteAndGradient()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200A8);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200B0);
		}
		static ::UnityEngine::Material** StaticGet_m_VisiblePixelCountMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200B8);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200C0);
		}
		static ::UnityEngine::Material** StaticGet_m_LyraGISectorVisualizationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200D0);
		}
		static ::UnityEngine::Material** StaticGet_m_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200E0);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200E8);
		}
		static ::UnityEngine::Material** StaticGet_m_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200F0);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x200F8);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderLdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20100);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20108);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20110);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20118);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20120);
		}
		static ::UnityEngine::Material** StaticGet_m_ExtraMotionVectorPassMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20128);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_colorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20130);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20138);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricCloudSampleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20140);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_m_EngineMaterialList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20148);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderHdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20150);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20158);
		}
		static ::UnityEngine::Material** StaticGet_m_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20160);
		}
		static ::UnityEngine::Material** StaticGet_m_PPFilterMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20168);
		}
		static ::UnityEngine::Mesh** StaticGet_m_LocalSphereVolumetricFogMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20170);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20178);
		}
		static ::UnityEngine::Material** StaticGet_m_FSRMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20180);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxAdvection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20188);
		}
		static ::UnityEngine::Material** StaticGet_m_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20190);
		}
		static ::UnityEngine::Material** StaticGet_m_MeshWindSource()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20198);
		}
		static ::UnityEngine::Material** StaticGet_m_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_lumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201A8);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricMistBlitMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201B8);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201C0);
		}
		static ::UnityEngine::Material** StaticGet_m_HQNapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201C8);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentMaskMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201D0);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201D8);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201E0);
		}
		static ::UnityEngine::Material** StaticGet_m_LensFlareDataDriveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201E8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RegionDetectFlareCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201F0);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererExtension** StaticGet_m_Extension()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererExtension**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x201F8);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20200);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20208);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterRampMateiral()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20210);
		}
		static ::UnityEngine::Mesh** StaticGet_m_RainMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20218);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20220);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20228);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20230);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_decalTextureArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20238);
		}
		static ::UnityEngine::Material** StaticGet_m_RegionBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20240);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_VfxVolumetricShadow()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20248);
		}
		static ::UnityEngine::Material** StaticGet_m_LocalSphereVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20250);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_satVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20258);
		}
		static ::UnityEngine::Material** StaticGet_m_BlendOffScreenUIMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20260);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20268);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererData** StaticGet_s_Data()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererData**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20270);
		}
		static ::UnityEngine::Material** StaticGet_m_PostLightMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20278);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20280);
		}
		static ::UnityEngine::Material** StaticGet_m_SpriteMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20288);
		}
		static ::UnityEngine::Material** StaticGet_m_TextureSheetAnimationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20290);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20298);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxDivergence()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202A0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMap()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202A8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_ScreenSpaceGlobalIllumination()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202B0);
		}
		static ::UnityEngine::Material** StaticGet_m_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202C0);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202C8);
		}
		static ::UnityEngine::Material** StaticGet_m_ShowLightMapResolution()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202D0);
		}
		static ::UnityEngine::Material** StaticGet_m_ContactShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202D8);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202E8);
		}
		static ::UnityEngine::Material** StaticGet_m_DownSampleDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202F0);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x202F8);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20300);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_decalDamageTextures()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20308);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RayDtenctionCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20310);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20318);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_hableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20320);
		}
		static ::UnityEngine::Texture2D** StaticGet_characterOverlayTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20328);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20330);
		}
		static ::UnityEngine::Mesh** StaticGet_s_TextureStreamingFakerMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20338);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20340);
		}
		static ::UnityEngine::Material** StaticGet_m_ClearStencil421Material()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20348);
		}
		static ::UnityEngine::Material** StaticGet_m_OffScreenParticleBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20350);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_BlurMaterialPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20358);
		}
		static ::System::Int32* StaticGet_m_SpriteMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		static ::System::Int32* StaticGet_m_RegionDetectFlareCSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5224);
		}
		static ::System::Int32* StaticGet_m_BlitMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5228);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x522C);
		}
		static ::System::Int32* StaticGet_m_RainMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5230);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5234);
		}
		static ::System::Int32* StaticGet_m_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5238);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInstanceID(::UnityEngine::Object* obj)
		{
			return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET))(obj);
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET))(asset);
		}

		static ::System::Void CreateEngineMaterials(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET))(asset);
		}

		static ::System::Void CreateDamageDecalTextureArray(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET))(asset);
		}

		static ::UnityEngine::Material* CreateEngineMaterial(::UnityEngine::Shader* shader, ::System::String* name)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET))(shader, name);
		}

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET))(material);
		}

		static ::System::Void ClearEngineMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET))();
		}

		static ::System::Void ResetShadowProxyMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetBlackShadowMap()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET))();
		}
	};
}
