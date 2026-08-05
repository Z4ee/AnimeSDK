#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowBakeFaceMask.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal::Internal { class BakePointShadowSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_COUNTSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1E665220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_CREATERUNTIMETEXTURE2DARRAY_OFFSET UNITYSDK_OFFSET(0x1E665D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E661390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREFACERT_OFFSET UNITYSDK_OFFSET(0x1E665600)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREREADBACKTEX_OFFSET UNITYSDK_OFFSET(0x1E665950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E6629B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1E6615B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RESOLVEMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E665280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1E6617F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E665EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E661060)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowCapturePass_TypeDefinitionIndex = 27853;

	class BakedPointShadowCapturePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_BakedLightWorldPosId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Int32* StaticGet_LightPositionId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x6FA4);
		}
		static ::System::Int32* StaticGet_BakedLightRangeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::System::Int32* StaticGet_ShadowBiasId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x6FAC);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::UnityEngine::Rendering::Universal::Internal::BakePointShadowSettings* m_BakeSettings; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xB0
		::UnityEngine::Material* m_DepthMaterial; // 0xB8
		::UnityEngine::Texture2D* m_ReadbackTex; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* m_Renderers; // 0xC8
		::UnityEngine::RenderTexture* m_FaceRt; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_DISPOSE_OFFSET))(this);
		}

		::System::Void ReleaseRt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RELEASERT_OFFSET))(this);
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_SETUP_OFFSET))(this, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void EnsureFaceRt(::System::Int32 size, ::System::Boolean gpuCopy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREFACERT_OFFSET))(this, size, gpuCopy);
		}

		::System::Void EnsureReadbackTex(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREREADBACKTEX_OFFSET))(this, size);
		}

		static ::UnityEngine::Texture2DArray* CreateRuntimeTexture2DArray(::System::Int32 size, ::System::Int32 depth)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_CREATERUNTIMETEXTURE2DARRAY_OFFSET))(size, depth);
		}

		static ::System::Void ResolveMeshRenderers(::UnityEngine::Rendering::Universal::Internal::BakePointShadowSettings* s, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* dst)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::BakePointShadowSettings*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RESOLVEMESHRENDERERS_OFFSET))(s, dst);
		}

		static ::System::Int32 CountSelectedFaces(::UnityEngine::Rendering::Universal::Internal::BakedPointShadowBakeFaceMask mask)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::Internal::BakedPointShadowBakeFaceMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_COUNTSELECTEDFACES_OFFSET))(mask);
		}
	};
}
