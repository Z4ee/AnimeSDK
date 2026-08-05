#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneParameters.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/SceneManagement/UnloadSceneOptions.h"

namespace System { class String; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1E60CBD0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1E60CD90)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_DATABASEDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60C6F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_DATABASEDATA_OFFSET UNITYSDK_OFFSET(0x1E60C700)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60C800)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0x1E60C790)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETALLSCENES_OFFSET UNITYSDK_OFFSET(0x1E60CF50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60CA10)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET UNITYSDK_OFFSET(0x1E60C9A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60C990)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E60C910)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYPATH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60C900)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYPATH_OFFSET UNITYSDK_OFFSET(0x1E60C880)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET UNITYSDK_OFFSET(0x1E60C780)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1E60D7E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1E60D660)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1E60D720)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60CA20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E60D4A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1E60D350)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET UNITYSDK_OFFSET(0x1E60D1E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E60D180)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60CBC0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_OFFSET UNITYSDK_OFFSET(0x1E60CB50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1E60CCB0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1E60CE70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_RESETSCENEDATA_OFFSET UNITYSDK_OFFSET(0x1E60C6E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60C870)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0x1E60C810)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1E60D570)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENENAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E60CAB0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60D8B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E60D8A0)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManager_TypeDefinitionIndex = 5517;

	class SceneManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>** StaticGet_sceneUnloaded()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x4E70);
		}
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>** StaticGet_activeSceneChanged()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x4E78);
		}
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>** StaticGet_sceneLoaded()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x4E80);
		}
		static ::System::Boolean* StaticGet_s_AllowLoadScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x2330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* ResetSceneData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_RESETSCENEDATA_OFFSET))(data);
		}

		static ::System::Boolean DataBaseData_internal(::Il2CppArray<::System::Byte>* d, ::System::Int32 o, ::System::Int32 d_l, ::Il2CppArray<::System::Byte>* k, ::System::Int32 v)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_DATABASEDATA_INTERNAL_OFFSET))(d, o, d_l, k, v);
		}

		static ::System::Boolean DataBaseData(::Il2CppArray<::System::Byte>* d, ::System::Int32 o, ::System::Int32 dl, ::Il2CppArray<::System::Byte>* k, ::System::Int32 v)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_DATABASEDATA_OFFSET))(d, o, dl, k, v);
		}

		static ::System::Int32 get_sceneCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET))();
		}

		static ::UnityEngine::SceneManagement::Scene GetActiveScene()
		{
			return ((::UnityEngine::SceneManagement::Scene(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET))();
		}

		static ::System::Boolean SetActiveScene(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Boolean(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_OFFSET))(scene);
		}

		static ::UnityEngine::SceneManagement::Scene GetSceneByPath(::System::String* scenePath)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYPATH_OFFSET))(scenePath);
		}

		static ::UnityEngine::SceneManagement::Scene GetSceneByName(::System::String* name)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_OFFSET))(name);
		}

		static ::UnityEngine::SceneManagement::Scene GetSceneAt(::System::Int32 index)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET))(index);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* sceneName, ::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, ::System::Boolean mustCompleteNextFrame)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::System::String* sceneName, ::System::Int32 sceneBuildIndex, ::System::Boolean immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options, ::System::Boolean& outSuccess)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENENAMEINDEXINTERNAL_OFFSET))(sceneName, sceneBuildIndex, immediately, options, outSuccess);
		}

		static ::System::Void MoveGameObjectToScene(::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_OFFSET))(go, scene);
		}

		static ::System::Void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET))(value);
		}

		static ::System::Void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET))(value);
		}

		static ::System::Void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET))(value);
		}

		static ::System::Void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET))(value);
		}

		static ::Il2CppArray<::UnityEngine::SceneManagement::Scene>* GetAllScenes()
		{
			return ((::Il2CppArray<::UnityEngine::SceneManagement::Scene>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETALLSCENES_OFFSET))();
		}

		static ::System::Void LoadScene(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET))(sceneName, mode);
		}

		static ::UnityEngine::SceneManagement::Scene LoadScene_1(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET))(sceneName, parameters);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET))(sceneName, mode);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_1(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET))(sceneName, parameters);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneAsync(::System::String* sceneName)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET))(sceneName);
		}

		static ::System::Void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET))(scene, mode);
		}

		static ::System::Void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET))(scene);
		}

		static ::System::Void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene previousActiveScene, ::UnityEngine::SceneManagement::Scene newActiveScene)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET))(previousActiveScene, newActiveScene);
		}

		static ::System::Void GetActiveScene_Injected(::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET))(ret);
		}

		static ::System::Boolean SetActiveScene_Injected(::UnityEngine::SceneManagement::Scene& scene)
		{
			return ((::System::Boolean(*)(::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_INJECTED_OFFSET))(scene);
		}

		static ::System::Void GetSceneByPath_Injected(::System::String* scenePath, ::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYPATH_INJECTED_OFFSET))(scenePath, ret);
		}

		static ::System::Void GetSceneByName_Injected(::System::String* name, ::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void GetSceneAt_Injected(::System::Int32 index, ::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET))(index, ret);
		}

		static ::System::Void MoveGameObjectToScene_Injected(::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene& scene)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_INJECTED_OFFSET))(go, scene);
		}
	};
}
