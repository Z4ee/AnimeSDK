#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXResource_AliasMode.h"
#include "unitysdk/UnityEngine/AstraFXResource_TextureInfo.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace UnityEngine { class AstraFXAsset; }
namespace UnityEngine { class AstraFXRendererDelegate; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x1A42A840)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1A42A8A0)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1A42A870)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_INIT_OFFSET UNITYSDK_OFFSET(0x1A42A7D0)
#define UNITYENGINE_ASTRAFXRENDERER_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A42A810)
#define UNITYENGINE_ASTRAFXRENDERER_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A42A6D0)
#define UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERATINDEX_OFFSET UNITYSDK_OFFSET(0x1A42A6E0)
#define UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCETEXTUREATINDEX_OFFSET UNITYSDK_OFFSET(0x1A42A6F0)
#define UNITYENGINE_ASTRAFXRENDERER_GETRENDERSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A42A7C0)
#define UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42A750)
#define UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_OFFSET UNITYSDK_OFFSET(0x1A42A700)
#define UNITYENGINE_ASTRAFXRENDERER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1A42A6C0)
#define UNITYENGINE_ASTRAFXRENDERER_REQUESTRELOADASSET_OFFSET UNITYSDK_OFFSET(0x1A42A7B0)
#define UNITYENGINE_ASTRAFXRENDERER_SETPASSENABLED_OFFSET UNITYSDK_OFFSET(0x1A42A790)
#define UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42A770)
#define UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_OFFSET UNITYSDK_OFFSET(0x1A42A760)
#define UNITYENGINE_ASTRAFXRENDERER_SETSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1A42A780)
#define UNITYENGINE_ASTRAFXRENDERER_SETTHREADGROUPS_OFFSET UNITYSDK_OFFSET(0x1A42A7A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXRenderer_TypeDefinitionIndex = 3897;

	class AstraFXRenderer : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::AstraFXAsset* get_asset()
		{
			return ((::UnityEngine::AstraFXAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GET_ASSET_OFFSET))(this);
		}

		::UnityEngine::AstraFXRendererDelegate* GetDelegate()
		{
			return ((::UnityEngine::AstraFXRendererDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETDELEGATE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetOwnedResourceBufferAtIndex(::System::Int32 index, ::UnityEngine::AstraFXResource_AliasMode aliasMode)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_AliasMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCEBUFFERATINDEX_OFFSET))(this, index, aliasMode);
		}

		::UnityEngine::RenderTexture* GetOwnedResourceTextureAtIndex(::System::Int32 index, ::UnityEngine::AstraFXResource_AliasMode aliasMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_AliasMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETOWNEDRESOURCETEXTUREATINDEX_OFFSET))(this, index, aliasMode);
		}

		::UnityEngine::AstraFXResource_TextureInfo GetResourceTextureInfoAtIndex(::System::Int32 index)
		{
			return ((::UnityEngine::AstraFXResource_TextureInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_OFFSET))(this, index);
		}

		::System::Void SetResourceTextureInfoAtIndex(::System::Int32 index, ::UnityEngine::AstraFXResource_TextureInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_OFFSET))(this, index, info);
		}

		::System::Void SetSkinnedMesh(::System::String* name, ::UnityEngine::SkinnedMeshRenderer* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETSKINNEDMESH_OFFSET))(this, name, mesh);
		}

		::System::Void SetPassEnabled(::System::Int32 passIndex, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETPASSENABLED_OFFSET))(this, passIndex, enable);
		}

		::System::Void SetThreadGroups(::System::Int32 passIndex, ::System::Int32 threadGroupX, ::System::Int32 threadGroupY, ::System::Int32 threadGroupZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETTHREADGROUPS_OFFSET))(this, passIndex, threadGroupX, threadGroupY, threadGroupZ);
		}

		::System::Void RequestReloadAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_REQUESTRELOADASSET_OFFSET))(this);
		}

		::System::Void GetRenderShaderProperties(::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRENDERSHADERPROPERTIES_OFFSET))(this, block);
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

		::System::Void GetResourceTextureInfoAtIndex_Injected(::System::Int32 index, ::UnityEngine::AstraFXResource_TextureInfo& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_GETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetResourceTextureInfoAtIndex_Injected(::System::Int32 index, ::UnityEngine::AstraFXResource_TextureInfo& info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource_TextureInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERER_SETRESOURCETEXTUREINFOATINDEX_INJECTED_OFFSET))(this, index, info);
		}
	};
}
