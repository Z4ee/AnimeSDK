#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderingUtils_SpotMeshData; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CLEARSYSTEMINFOCACHE_OFFSET UNITYSDK_OFFSET(0x1D42A210)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CREATECUBEMESH_OFFSET UNITYSDK_OFFSET(0x1D428990)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CREATEQUADMESH_OFFSET UNITYSDK_OFFSET(0x1D4290A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSUREERRORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D42B020)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSUREFULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0x1D42AA70)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSURERENDERUTILSASSETS_OFFSET UNITYSDK_OFFSET(0x1D42AA00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETBLACKSHADOWMAPARRAY_OFFSET UNITYSDK_OFFSET(0x1D429320)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETDECALMESH_OFFSET UNITYSDK_OFFSET(0x1D429BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x1D4254E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETSPOTMESH_OFFSET UNITYSDK_OFFSET(0x1D425100)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETVALIDCOLORBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D42A6C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GET_BLACKCUBEMAPARRAY_OFFSET UNITYSDK_OFFSET(0x1D428200)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GET_PLACEHOLDERBUFFER_OFFSET UNITYSDK_OFFSET(0x1D428820)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ISMRT_OFFSET UNITYSDK_OFFSET(0x1D42A820)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_LASTVALID_OFFSET UNITYSDK_OFFSET(0x1D42A880)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_REMOVESPOTMESH_OFFSET UNITYSDK_OFFSET(0x1D429740)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1D42A900)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SETVIEWANDPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x1D429E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SUPPORTSGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1D42A510)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1D42A370)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D42B290)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderingUtils_TypeDefinitionIndex = 5988;

	class RenderingUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_m_DecalMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		static ::UnityEngine::Mesh** StaticGet_s_SphereMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5228);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::UnityEngine::NAPRenderPipeline0::RenderingUtils_SpotMeshData*>** StaticGet_s_SpotMeshList()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::UnityEngine::NAPRenderPipeline0::RenderingUtils_SpotMeshData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5230);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Boolean>** StaticGet_m_GraphicsFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5238);
		}
		static ::UnityEngine::CubemapArray** StaticGet_m_BlackCubeArrayTexture()
		{
			return (::UnityEngine::CubemapArray**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5240);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>** StaticGet_m_RenderTextureFormatSupport()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5248);
		}
		static ::UnityEngine::Material** StaticGet_errorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5250);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMapArray()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5258);
		}
		static ::UnityEngine::Mesh** StaticGet_fullscreenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5260);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_m_PlaceHolderBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5268);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>** StaticGet_m_LegacyShaderPassNames()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>**)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5270);
		}
		static ::System::Int32* StaticGet_errorMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BB0);
		}
		static ::System::Int32* StaticGet_fullscreenMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BB4);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_DefaultRTI()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(RenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::CubemapArray* get_blackCubeMapArray()
		{
			return ((::UnityEngine::CubemapArray*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GET_BLACKCUBEMAPARRAY_OFFSET))();
		}

		static ::UnityEngine::ComputeBuffer* get_placeHolderBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GET_PLACEHOLDERBUFFER_OFFSET))();
		}

		static ::UnityEngine::Mesh* CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CREATECUBEMESH_OFFSET))(min, max);
		}

		static ::UnityEngine::Mesh* CreateQuadMesh(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CREATEQUADMESH_OFFSET))(min, max);
		}

		static ::UnityEngine::Mesh* GetSphereMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETSPHEREMESH_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetBlackShadowMapArray()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETBLACKSHADOWMAPARRAY_OFFSET))();
		}

		static ::System::Void RemoveSpotMesh(::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_REMOVESPOTMESH_OFFSET))(light);
		}

		static ::UnityEngine::Mesh* GetSpotMesh(::UnityEngine::Light* light)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETSPOTMESH_OFFSET))(light);
		}

		static ::UnityEngine::Mesh* GetDecalMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETDECALMESH_OFFSET))();
		}

		static ::System::Void SetViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, ::System::Boolean setInverseMatrices)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SETVIEWANDPROJECTIONMATRICES_OFFSET))(cmd, viewMatrix, projectionMatrix, setInverseMatrices);
		}

		static ::System::Void ClearSystemInfoCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_CLEARSYSTEMINFOCACHE_OFFSET))();
		}

		static ::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Boolean SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SUPPORTSGRAPHICSFORMAT_OFFSET))(format, usage);
		}

		static ::System::UInt32 GetValidColorBufferCount(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_GETVALIDCOLORBUFFERCOUNT_OFFSET))(colorBuffers);
		}

		static ::System::Boolean IsMRT(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ISMRT_OFFSET))(colorBuffers);
		}

		static ::System::Int32 LastValid(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* source)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_LASTVALID_OFFSET))(source);
		}

		static ::System::Boolean SequenceEqual(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* left, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* right)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SEQUENCEEQUAL_OFFSET))(left, right);
		}

		static ::System::Void EnsureRenderUtilsAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSURERENDERUTILSASSETS_OFFSET))();
		}

		static ::System::Void EnsureFullScreenMesh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSUREFULLSCREENMESH_OFFSET))();
		}

		static ::System::Void EnsureErrorMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_ENSUREERRORMATERIAL_OFFSET))();
		}
	};
}
