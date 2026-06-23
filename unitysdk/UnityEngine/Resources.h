#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x1D858A40)
#define UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET UNITYSDK_OFFSET(0x1D858AA0)
#define UNITYENGINE_RESOURCES_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1D858A90)
#define UNITYENGINE_RESOURCES_LOAD_OFFSET UNITYSDK_OFFSET(0x1D858A50)
#define UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1D858AB0)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1D858AC0)
#define UNITYENGINE_RESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D858AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Resources_TypeDefinitionIndex = 5319;

	class Resources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeAll(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET))(type);
		}

		static ::UnityEngine::Object* Load(::System::String* path)
		{
			return ((::UnityEngine::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_OFFSET))(path);
		}

		static ::UnityEngine::Object* Load_1(::System::String* path, ::System::Type* systemTypeInstance)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_1_OFFSET))(path, systemTypeInstance);
		}

		static ::UnityEngine::Object* GetBuiltinResource(::System::Type* type, ::System::String* path)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET))(type, path);
		}

		static ::System::Void UnloadAsset(::UnityEngine::Object* assetToUnload)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET))(assetToUnload);
		}

		static ::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET))();
		}
	};
}
