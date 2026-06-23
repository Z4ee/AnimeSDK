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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_COUNTSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1D4DEB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_CREATERUNTIMETEXTURE2DARRAY_OFFSET UNITYSDK_OFFSET(0x1D4DF690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4DAD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREFACERT_OFFSET UNITYSDK_OFFSET(0x1D4DEF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_ENSUREREADBACKTEX_OFFSET UNITYSDK_OFFSET(0x1D4DF290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4DC360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1D4DAFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_RESOLVEMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D4DEBC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1D4DB1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4DF830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWCAPTUREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DAA50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowCapturePass_TypeDefinitionIndex = 26676;

	class BakedPointShadowCapturePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_BakedLightRangeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::System::Int32* StaticGet_BakedLightWorldPosId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x7034);
		}
		static ::System::Int32* StaticGet_LightPositionId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Int32* StaticGet_ShadowBiasId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowCapturePass_TypeDefinitionIndex)->GetStaticField(0x703C);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::UnityEngine::Material* m_DepthMaterial; // 0xA8
		::UnityEngine::RenderTexture* m_FaceRt; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xB8
		::UnityEngine::Texture2D* m_ReadbackTex; // 0xC0
		::UnityEngine::Rendering::Universal::Internal::BakePointShadowSettings* m_BakeSettings; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* m_Renderers; // 0xD0

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
