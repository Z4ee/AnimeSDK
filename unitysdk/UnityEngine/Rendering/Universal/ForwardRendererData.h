#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderConfig.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScriptableRendererData.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_FluidFXResources; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_RayTracingResources; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_ShaderResources; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_SpecialDamageBloomConfig; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CLEARCACHEDSHADERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B07ADD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B07A920)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GETALLSHADERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B07B210)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GETSHADERCONFIG_OFFSET UNITYSDK_OFFSET(0x1B07AE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0x1B07AAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B07A9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B07AB50)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B07AA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_LOGALLSHADERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B07B260)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B07ABE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0x1B07AAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B07A9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B07AB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B07AA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07B6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B07B7C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_TypeDefinitionIndex = 29845;

	class ForwardRendererData : public ::UnityEngine::Rendering::Universal::ScriptableRendererData
	{
	public:
		::UnityEngine::Texture2D* preIntegratedFGD_GGXDisneyDiffuse; // 0x38
		::UnityEngine::Texture2D* preIntegratedFGD_CharlieFabricLambert; // 0x40
		::UnityEngine::Texture2D* characterOverlayTex; // 0x48
		::UnityEngine::Texture2D* FSRLuminanceBiasLut; // 0x50
		::UnityEngine::ComputeShader* GTAOCS; // 0x58
		::UnityEngine::ComputeShader* GTAODenoiseCS; // 0x60
		::UnityEngine::Shader* CameraMotionVectorPS; // 0x68
		::UnityEngine::Shader* DownSampleDepthPS; // 0x70
		::UnityEngine::Shader* VolumetricFogBlitPS; // 0x78
		::UnityEngine::Shader* VolumetricFogPS; // 0x80
		::UnityEngine::Shader* PostLightPS; // 0x88
		::UnityEngine::Shader* CaptureDepth; // 0x90
		::UnityEngine::Material* defaultMaterial; // 0x98
		::UnityEngine::Material* defaultDecalMaterial; // 0xA0
		::UnityEngine::Material* shadowProxyMaterial; // 0xA8
		::UnityEngine::Material* defaultVolumetricFogMaterial; // 0xB0
		::UnityEngine::Mesh* rainDropMesh; // 0xB8
		::UnityEngine::Rendering::Universal::PostProcessData* postProcessData; // 0xC0
		::UnityEngine::Rendering::Universal::ForwardRendererData_SpecialDamageBloomConfig* specialDamageBloomConfig; // 0xC8
		::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* shaders; // 0xD0
		::UnityEngine::Rendering::Universal::ForwardRendererData_RayTracingResources* rtxRes; // 0xD8
		::UnityEngine::Rendering::Universal::ForwardRendererData_FluidFXResources* fluidFxRes; // 0xE0
		::UnityEngine::Mesh* textureStreamingFakerMesh; // 0xE8
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakeResult; // 0xF0
		::Il2CppArray<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig>* shaderConfigs; // 0x160
		::UnityEngine::LayerMask m_OpaqueLayerMask; // 0x168
		::UnityEngine::LayerMask m_TransparentLayerMask; // 0x16C
		::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState; // 0x170
		::System::Boolean m_ShadowTransparentReceive; // 0x178
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig>* cachedShaderConfigs; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer* Create()
		{
			return ((::UnityEngine::Rendering::Universal::ScriptableRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CREATE_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_opaqueLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET))(this);
		}

		::System::Void set_opaqueLayerMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET))(this, value);
		}

		::UnityEngine::LayerMask get_transparentLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_transparentLayerMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState()
		{
			return ((::UnityEngine::Rendering::Universal::StencilStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET))(this);
		}

		::System::Void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::StencilStateData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_shadowTransparentReceive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET))(this);
		}

		::System::Void set_shadowTransparentReceive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_ONENABLE_OFFSET))(this);
		}

		::System::Void ClearCachedShaderConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CLEARCACHEDSHADERCONFIGS_OFFSET))(this);
		}

		::System::Boolean GetShaderConfig(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig& shaderConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GETSHADERCONFIG_OFFSET))(this, shader, shaderConfig);
		}

		::Il2CppArray<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig>* GetAllShaderConfigs()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GETALLSHADERCONFIGS_OFFSET))(this);
		}

		::System::Void LogAllShaderConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_LOGALLSHADERCONFIGS_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
