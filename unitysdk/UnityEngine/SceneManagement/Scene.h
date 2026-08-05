#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA35C70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETBUILDINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C380)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C370)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C360)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C350)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C390)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C3A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_1_OFFSET UNITYSDK_OFFSET(0xA35C60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xA35C50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_BUILDINDEX_OFFSET UNITYSDK_OFFSET(0xA35C30)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xA35C20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA35C10)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_PATH_OFFSET UNITYSDK_OFFSET(0xA35C00)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA35C40)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C340)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA35BF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E60C650)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E60C660)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int Scene_TypeDefinitionIndex = 5515;

	struct alignas(4) Scene
	{
		::System::Int32 m_Handle; // 0x10

		static ::System::Boolean IsValidInternal(::System::Int32 sceneHandle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::String* GetPathInternal(::System::Int32 sceneHandle)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETPATHINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::String* GetNameInternal(::System::Int32 sceneHandle)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::Boolean GetIsLoadedInternal(::System::Int32 sceneHandle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::Int32 GetBuildIndexInternal(::System::Int32 sceneHandle)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETBUILDINDEXINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::Int32 GetRootCountInternal(::System::Int32 sceneHandle)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET))(sceneHandle);
		}

		static ::System::Void GetRootGameObjectsInternal(::System::Int32 sceneHandle, ::System::Object* resultRootList)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET))(sceneHandle, resultRootList);
		}

		::System::Int32 get_handle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET))(this);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_PATH_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_isLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET))(this);
		}

		::System::Int32 get_buildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_BUILDINDEX_OFFSET))(this);
		}

		::System::Int32 get_rootCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* GetRootGameObjects()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET))(this);
		}

		::System::Void GetRootGameObjects_1(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* rootGameObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_1_OFFSET))(this, rootGameObjects);
		}

		static ::System::Boolean op_Equality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET))(this, other);
		}
	};
}
