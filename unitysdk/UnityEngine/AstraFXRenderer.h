#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXResource_AliasMode.h"
#include "unitysdk/UnityEngine/AstraFXResource_TextureInfo.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AstraFXAsset; }
namespace UnityEngine { class AstraFXRendererDelegate; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x1E1E6CC0)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1E1E6DF0)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1E1E6D60)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_INIT_OFFSET UNITYSDK_OFFSET(0x1E1E6BF0)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1E1E6C30)
#define UNITYENGINE_ASTRAFXRENDERER_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E1E6740)
#define UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERATINDEX_OFFSET UNITYSDK_OFFSET(0x1E1E6760)
#define UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERPTRINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E1E6750)
#define UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCETEXTUREATINDEX_OFFSET UNITYSDK_OFFSET(0x1E1E6B10)
#define UNITYENGINE_ASTRAFXRENDERER_GETRENDERSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E1E6BE0)
#define UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E1E6B70)
#define UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_OFFSET UNITYSDK_OFFSET(0x1E1E6B20)
#define UNITYENGINE_ASTRAFXRENDERER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1E1E6730)
#define UNITYENGINE_ASTRAFXRENDERER_INVALIDATEBORROWEDBUFFERCACHE_OFFSET UNITYSDK_OFFSET(0x1E1E69A0)
#define UNITYENGINE_ASTRAFXRENDERER_REQUESTRELOADASSET_OFFSET UNITYSDK_OFFSET(0x1E1E6BD0)
#define UNITYENGINE_ASTRAFXRENDERER_SETPASSENABLED_OFFSET UNITYSDK_OFFSET(0x1E1E6BB0)
#define UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E1E6B90)
#define UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_OFFSET UNITYSDK_OFFSET(0x1E1E6B80)
#define UNITYENGINE_ASTRAFXRENDERER_SETSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1E1E6BA0)
#define UNITYENGINE_ASTRAFXRENDERER_SETTHREADGROUPS_OFFSET UNITYSDK_OFFSET(0x1E1E6BC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXRenderer_TypeDefinitionIndex = 4084;

	class AstraFXRenderer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::ComputeBuffer*>* m_BorrowedBufferCache; // 0x18

		::UnityEngine::AstraFXAsset* get_asset()
		{
			return ((::UnityEngine::AstraFXAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GET_ASSET_OFFSET))(this);
		}

		::UnityEngine::AstraFXRendererDelegate* GetDelegate()
		{
			return ((::UnityEngine::AstraFXRendererDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETDELEGATE_OFFSET))(this);
		}

		::System::IntPtr GetOwnedResourceBufferPtrInternal(::System::Int32 a1, ::UnityEngine::AstraFXResource_AliasMode a2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_AliasMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERPTRINTERNAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ComputeBuffer* GetOwnedResourceBufferAtIndex(::System::Int32 a1, ::UnityEngine::AstraFXResource_AliasMode a2)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_AliasMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERATINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void InvalidateBorrowedBufferCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_INVALIDATEBORROWEDBUFFERCACHE_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* GetOwnedResourceTextureAtIndex(::System::Int32 a1, ::UnityEngine::AstraFXResource_AliasMode a2)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_AliasMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCETEXTUREATINDEX_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AstraFXResource_TextureInfo GetResourceTextureInfoAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::AstraFXResource_TextureInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_OFFSET))(this, a1);
		}

		::System::Void SetResourceTextureInfoAtIndex(::System::Int32 a1, ::UnityEngine::AstraFXResource_TextureInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkinnedMesh(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETSKINNEDMESH_OFFSET))(this, a1, a2);
		}

		::System::Void SetPassEnabled(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETPASSENABLED_OFFSET))(this, a1, a2);
		}

		::System::Void SetThreadGroups(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETTHREADGROUPS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestReloadAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_REQUESTRELOADASSET_OFFSET))(this);
		}

		::System::Void GetRenderShaderProperties(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRENDERSHADERPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void AstraFXRendererDelegate_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_INIT_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET))(this);
		}

		::System::Void GetResourceTextureInfoAtIndex_Injected(::System::Int32 a1, ::UnityEngine::AstraFXResource_TextureInfo& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetResourceTextureInfoAtIndex_Injected(::System::Int32 a1, ::UnityEngine::AstraFXResource_TextureInfo& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
