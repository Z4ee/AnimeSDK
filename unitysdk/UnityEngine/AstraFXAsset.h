#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXResource.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1B27CB30)
#define UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1B27CB40)
#define UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1B27CB10)
#define UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET UNITYSDK_OFFSET(0x1B27CB20)
#define UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B27CB00)
#define UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_OFFSET UNITYSDK_OFFSET(0x1B27CA90)
#define UNITYENGINE_ASTRAFXASSET_GET_NUMRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B27CA60)
#define UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B27CA80)
#define UNITYENGINE_ASTRAFXASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27CA70)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXAsset_TypeDefinitionIndex = 4078;

	class AstraFXAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 get_numResources()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GET_NUMRESOURCES_OFFSET))(this);
		}

		::UnityEngine::AstraFXResource GetResourceAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::AstraFXResource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 FindResourceIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* GetMeshAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 FindMeshIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET))(this, a1);
		}

		::System::Int32 FindPassIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::AstraFXAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AstraFXAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Void GetResourceAtIndex_Injected(::System::Int32 a1, ::UnityEngine::AstraFXResource& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
