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

#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E24B4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1E24A8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E247D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1E24B260)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E24A220)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1E24A4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E245DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E245F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E24B670)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24BD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24BD00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EngineResources_TypeDefinitionIndex = 27105;

	class EngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210C0);
		}
		static ::UnityEngine::Material** StaticGet_m_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210C8);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineEffectsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210D0);
		}
		static ::UnityEngine::Material** StaticGet_m_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210D8);
		}
		static ::UnityEngine::Mesh** StaticGet_m_RainMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210E0);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_hableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210F0);
		}
		static ::UnityEngine::Material** StaticGet_m_FxPostProcessFogPSMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x210F8);
		}
		static ::UnityEngine::Material** StaticGet_m_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21100);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21108);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21110);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21118);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderHdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21120);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterRampMateiral()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21128);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_BlurMaterialPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21130);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineObjectMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21138);
		}
		static ::UnityEngine::Material** StaticGet_m_VisiblePixelCountMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21140);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21148);
		}
		static ::UnityEngine::Material** StaticGet_m_LyraGISectorVisualizationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21150);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21158);
		}
		static ::UnityEngine::Material** StaticGet_m_PPFilterMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21160);
		}
		static ::UnityEngine::Material** StaticGet_m_FSRMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21168);
		}
		static ::UnityEngine::Material** StaticGet_m_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21170);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21178);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21180);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21188);
		}
		static ::UnityEngine::Material** StaticGet_m_CaptureMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21190);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RayDtenctionCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21198);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211A0);
		}
		static ::UnityEngine::Material** StaticGet_m_TextureSheetAnimationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211A8);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211B0);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211B8);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211C0);
		}
		static ::UnityEngine::Material** StaticGet_m_UVViewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211C8);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxComposisteAndGradient()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211D8);
		}
		static ::UnityEngine::Texture2D** StaticGet_characterOverlayTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211E8);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211F0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_ScreenSpaceGlobalIllumination()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x211F8);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxPressure()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21200);
		}
		static ::UnityEngine::Texture2D** StaticGet_FSRLuminanceBiasLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21208);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21210);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21218);
		}
		static ::UnityEngine::Mesh** StaticGet_m_LocalSphereVolumetricFogMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21220);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxDivergence()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21228);
		}
		static ::UnityEngine::Material** StaticGet_m_ExtraMotionVectorPassMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21230);
		}
		static ::UnityEngine::Material** StaticGet_m_LensFlareDataDriveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21238);
		}
		static ::UnityEngine::Material** StaticGet_m_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21240);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererData** StaticGet_s_Data()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererData**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21248);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21250);
		}
		static ::UnityEngine::Mesh** StaticGet_s_TextureStreamingFakerMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21258);
		}
		static ::UnityEngine::Material** StaticGet_m_ShowLightMapResolution()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21260);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21268);
		}
		static ::UnityEngine::Material** StaticGet_m_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21270);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21278);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentMaskMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21280);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricMistBlitMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21288);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricCloudSampleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21290);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21298);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderLdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212A0);
		}
		static ::UnityEngine::Material** StaticGet_m_BulletHoleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212A8);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitCubeTextureFaceMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212B0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_decalDamageTextures()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212B8);
		}
		static ::UnityEngine::Material** StaticGet_m_BlendOffScreenUIMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212C0);
		}
		static ::UnityEngine::Material** StaticGet_m_LocalSphereVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212C8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomUpCombineCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212D0);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212E0);
		}
		static ::UnityEngine::Material** StaticGet_m_ContactShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212E8);
		}
		static ::UnityEngine::Material** StaticGet_m_PostLightMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212F0);
		}
		static ::UnityEngine::Material** StaticGet_m_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x212F8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_m_EngineMaterialList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21300);
		}
		static ::UnityEngine::Material** StaticGet_m_OffScreenParticleBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21308);
		}
		static ::UnityEngine::Material** StaticGet_m_DownSampleDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21310);
		}
		static ::UnityEngine::Material** StaticGet_m_MeshWindSource()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21318);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21320);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21328);
		}
		static ::UnityEngine::Material** StaticGet_m_HQNapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21330);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21338);
		}
		static ::UnityEngine::Material** StaticGet_m_SpriteMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21340);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxAdvection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21348);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_satVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21350);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21358);
		}
		static ::UnityEngine::Material** StaticGet_m_ClearStencil421Material()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21360);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21368);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21370);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomBlurCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21378);
		}
		static ::UnityEngine::Material** StaticGet_m_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21380);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_lumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21388);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_VfxVolumetricShadow()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21390);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21398);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_colorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213A0);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213A8);
		}
		static ::UnityEngine::Material** StaticGet_m_RegionBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213B0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMap()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213B8);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererExtension** StaticGet_m_Extension()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererExtension**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213C0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RegionDetectFlareCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213C8);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213D0);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_decalTextureArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213E0);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213E8);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213F0);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x213F8);
		}
		static ::System::Int32* StaticGet_m_RainMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5080);
		}
		static ::System::Int32* StaticGet_m_BlitMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5084);
		}
		static ::System::Int32* StaticGet_m_SpriteMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5088);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x508C);
		}
		static ::System::Int32* StaticGet_m_RegionDetectFlareCSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		static ::System::Int32* StaticGet_m_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5094);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5098);
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
