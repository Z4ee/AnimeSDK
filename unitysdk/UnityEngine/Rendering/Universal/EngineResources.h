#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

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

#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AB8F3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1AB8EA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1AB8C130)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1AB8F170)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AB8E3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1AB8E600)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1AB8A1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AB8A320)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AB8F580)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB8FC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8FC10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EngineResources_TypeDefinitionIndex = 29844;

	class EngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_OutlineObjectMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22940);
		}
		static ::UnityEngine::Material** StaticGet_m_DownSampleDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22948);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22950);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomUpCombineCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22958);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMap()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22960);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22968);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_decalTextureArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22970);
		}
		static ::UnityEngine::Material** StaticGet_m_RegionBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22978);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22980);
		}
		static ::UnityEngine::Mesh** StaticGet_s_TextureStreamingFakerMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22988);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxComposisteAndGradient()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22990);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_colorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22998);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229A0);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229A8);
		}
		static ::UnityEngine::Material** StaticGet_m_BulletHoleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229B0);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229B8);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229C0);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229C8);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229D0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RayDtenctionCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229D8);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229E0);
		}
		static ::UnityEngine::Material** StaticGet_m_PostLightMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229E8);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_lumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x229F8);
		}
		static ::UnityEngine::Texture2D** StaticGet_characterOverlayTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A00);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A08);
		}
		static ::UnityEngine::Material** StaticGet_m_BlendOffScreenUIMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A10);
		}
		static ::UnityEngine::Mesh** StaticGet_m_RainMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A18);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RegionDetectFlareCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A20);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A28);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A30);
		}
		static ::UnityEngine::Material** StaticGet_m_VisiblePixelCountMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A38);
		}
		static ::UnityEngine::Material** StaticGet_m_CaptureMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A40);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A48);
		}
		static ::UnityEngine::Material** StaticGet_m_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A50);
		}
		static ::UnityEngine::Material** StaticGet_m_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A58);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A60);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A68);
		}
		static ::UnityEngine::Material** StaticGet_m_UVViewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A70);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A78);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A80);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A88);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricCloudSampleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A90);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderHdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22A98);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AA0);
		}
		static ::UnityEngine::Texture2D** StaticGet_FSRLuminanceBiasLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AA8);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AB0);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererData** StaticGet_s_Data()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererData**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AB8);
		}
		static ::UnityEngine::Material** StaticGet_m_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AC0);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxPressure()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AC8);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AD8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_decalDamageTextures()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AE0);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AE8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomBlurCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AF0);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22AF8);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B00);
		}
		static ::UnityEngine::Material** StaticGet_m_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B08);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B10);
		}
		static ::UnityEngine::Material** StaticGet_m_ShowLightMapResolution()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B18);
		}
		static ::UnityEngine::Material** StaticGet_m_SpriteMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B20);
		}
		static ::UnityEngine::Material** StaticGet_m_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B28);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxDivergence()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B30);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B38);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererExtension** StaticGet_m_Extension()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererExtension**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B40);
		}
		static ::UnityEngine::Material** StaticGet_m_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B48);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B50);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B58);
		}
		static ::UnityEngine::Material** StaticGet_m_FxPostProcessFogPSMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B60);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderLdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B68);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B70);
		}
		static ::UnityEngine::Material** StaticGet_m_ContactShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B78);
		}
		static ::UnityEngine::Material** StaticGet_m_LyraGISectorVisualizationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B80);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B88);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitCubeTextureFaceMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B90);
		}
		static ::UnityEngine::Material** StaticGet_m_ExtraMotionVectorPassMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22B98);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineEffectsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BA0);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricMistBlitMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_satVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BB0);
		}
		static ::UnityEngine::Material** StaticGet_m_HQNapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BB8);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_BlurMaterialPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BC0);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BC8);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BD0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_VfxVolumetricShadow()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BD8);
		}
		static ::UnityEngine::Material** StaticGet_m_OffScreenParticleBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BE0);
		}
		static ::UnityEngine::Material** StaticGet_m_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BE8);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterRampMateiral()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BF0);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22BF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_hableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C00);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C08);
		}
		static ::UnityEngine::Material** StaticGet_m_LensFlareDataDriveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C10);
		}
		static ::UnityEngine::Material** StaticGet_m_PPFilterMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C18);
		}
		static ::UnityEngine::Material** StaticGet_m_MeshWindSource()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C20);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C28);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_ScreenSpaceGlobalIllumination()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C30);
		}
		static ::UnityEngine::Material** StaticGet_m_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C38);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentMaskMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C40);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxAdvection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C48);
		}
		static ::UnityEngine::Material** StaticGet_m_FSRMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C50);
		}
		static ::UnityEngine::Material** StaticGet_m_TextureSheetAnimationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C58);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_m_EngineMaterialList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22C60);
		}
		static ::System::Int32* StaticGet_m_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5790);
		}
		static ::System::Int32* StaticGet_m_BlitMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5794);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5798);
		}
		static ::System::Int32* StaticGet_m_RainMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x579C);
		}
		static ::System::Int32* StaticGet_m_RegionDetectFlareCSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x57A0);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x57A4);
		}
		static ::System::Int32* StaticGet_m_SpriteMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x57A8);
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

		static ::UnityEngine::Material* CreateEngineMaterial(::UnityEngine::Shader* shader)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET))(shader);
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
