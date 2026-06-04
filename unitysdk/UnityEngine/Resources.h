#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x1B2D3E00)
#define UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B2D3F50)
#define UNITYENGINE_RESOURCES_LOADALL_1_OFFSET UNITYSDK_OFFSET(0x1B2D3F10)
#define UNITYENGINE_RESOURCES_LOADALL_OFFSET UNITYSDK_OFFSET(0x1B2D3F00)
#define UNITYENGINE_RESOURCES_LOADASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2D3EF0)
#define UNITYENGINE_RESOURCES_LOADASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B2D3EC0)
#define UNITYENGINE_RESOURCES_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x1B2D3E60)
#define UNITYENGINE_RESOURCES_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1B2D3E50)
#define UNITYENGINE_RESOURCES_LOAD_OFFSET UNITYSDK_OFFSET(0x1B2D3E10)
#define UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1B2D3F60)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1B2D3F70)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDCACHEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B2D3F80)
#define UNITYENGINE_RESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D3F90)

namespace UnityEngine
{
	inline static constexpr unsigned int Resources_TypeDefinitionIndex = 4259;

	class Resources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeAll(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Load(::System::String* a1)
		{
			return ((::UnityEngine::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Load_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ResourceRequest* LoadAsync(::System::String* a1)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::ResourceRequest* LoadAsync_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ResourceRequest* LoadAsyncInternal(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNCINTERNAL_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAll(::System::String* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAll_1(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_1_OFFSET))(a1);
		}

		static ::UnityEngine::Object* GetBuiltinResource(::System::Type* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET))();
		}

		static ::System::Void UnloadUnusedCacheBuffers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDCACHEBUFFERS_OFFSET))();
		}
	};
}
