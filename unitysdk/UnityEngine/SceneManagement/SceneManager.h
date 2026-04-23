#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneParameters.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/SceneManagement/UnloadSceneOptions.h"

namespace System { class String; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1A483F90)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1A483D10)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A483E50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A483B50)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0x1A483B10)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A483BF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET UNITYSDK_OFFSET(0x1A483BB0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A483BA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_OFFSET UNITYSDK_OFFSET(0x1A483B60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNTINBUILDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A483B00)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET UNITYSDK_OFFSET(0x1A483AF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1A484940)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1A484820)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A4848B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A483C00)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A484550)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A4845C0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A484640)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1A4844D0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET UNITYSDK_OFFSET(0x1A4842B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_2_OFFSET UNITYSDK_OFFSET(0x1A484210)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_3_OFFSET UNITYSDK_OFFSET(0x1A484370)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_4_OFFSET UNITYSDK_OFFSET(0x1A484430)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A484150)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1A484070)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1A483DB0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A483EF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1A4847B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENENAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A483C80)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_1_OFFSET UNITYSDK_OFFSET(0x1A484730)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A4846B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4849D0)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManager_TypeDefinitionIndex = 4317;

	class SceneManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>** StaticGet_activeSceneChanged()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x15010);
		}
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>** StaticGet_sceneLoaded()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x15018);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>** StaticGet_sceneUnloaded()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x15020);
		}
		static ::System::Boolean* StaticGet_s_AllowLoadScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x5E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_sceneCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET))();
		}

		static ::System::Int32 get_sceneCountInBuildSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNTINBUILDSETTINGS_OFFSET))();
		}

		static ::UnityEngine::SceneManagement::Scene GetActiveScene()
		{
			return ((::UnityEngine::SceneManagement::Scene(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET))();
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

		static ::System::Void add_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET))(value);
		}

		static ::System::Void LoadScene(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET))(sceneName, mode);
		}

		static ::System::Void LoadScene_1(::System::String* sceneName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET))(sceneName);
		}

		static ::UnityEngine::SceneManagement::Scene LoadScene_2(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_2_OFFSET))(sceneName, parameters);
		}

		static ::System::Void LoadScene_3(::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_3_OFFSET))(sceneBuildIndex, mode);
		}

		static ::UnityEngine::SceneManagement::Scene LoadScene_4(::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_4_OFFSET))(sceneBuildIndex, parameters);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync(::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET))(sceneBuildIndex, mode);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_1(::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET))(sceneBuildIndex, parameters);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_2(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_2_OFFSET))(sceneName, mode);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_3(::System::String* sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_3_OFFSET))(sceneName, parameters);
		}

		static ::System::Boolean UnloadScene(::System::Int32 sceneBuildIndex)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_OFFSET))(sceneBuildIndex);
		}

		static ::System::Boolean UnloadScene_1(::System::String* sceneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_1_OFFSET))(sceneName);
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

		static ::System::Void GetSceneByName_Injected(::System::String* name, ::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void GetSceneAt_Injected(::System::Int32 index, ::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET))(index, ret);
		}
	};
}
