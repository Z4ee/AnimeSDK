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

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1B2D49C0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1B2D4740)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1B2D4880)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D4580)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0x1B2D4540)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D4620)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET UNITYSDK_OFFSET(0x1B2D45E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D45D0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_OFFSET UNITYSDK_OFFSET(0x1B2D4590)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNTINBUILDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B2D4530)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2D4520)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1B2D5380)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1B2D5250)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1B2D52F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2D4630)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B2D4F80)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1B2D4FF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_3_OFFSET UNITYSDK_OFFSET(0x1B2D5070)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1B2D4F00)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET UNITYSDK_OFFSET(0x1B2D4CE0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_2_OFFSET UNITYSDK_OFFSET(0x1B2D4C40)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_3_OFFSET UNITYSDK_OFFSET(0x1B2D4DA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_4_OFFSET UNITYSDK_OFFSET(0x1B2D4E60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1B2D4B80)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1B2D4AA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1B2D47E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1B2D4920)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1B2D51E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENENAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2D46B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_1_OFFSET UNITYSDK_OFFSET(0x1B2D5160)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1B2D50E0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2D5420)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManager_TypeDefinitionIndex = 4491;

	class SceneManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>** StaticGet_sceneLoaded()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x34C20);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>** StaticGet_sceneUnloaded()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x34C28);
		}
		static ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>** StaticGet_activeSceneChanged()
		{
			return (::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0x34C30);
		}
		static ::System::Boolean* StaticGet_s_AllowLoadScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneManager_TypeDefinitionIndex)->GetStaticField(0xA5A0);
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

		static ::UnityEngine::SceneManagement::Scene GetSceneByName(::System::String* a1)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_OFFSET))(a1);
		}

		static ::UnityEngine::SceneManagement::Scene GetSceneAt(::System::Int32 a1)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* a1, ::System::Int32 a2, ::UnityEngine::SceneManagement::LoadSceneParameters a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::SceneManagement::UnloadSceneOptions a4, ::System::Boolean& a5)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENENAMEINDEXINTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET))(a1);
		}

		static ::System::Void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET))(a1);
		}

		static ::System::Void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET))(a1);
		}

		static ::System::Void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET))(a1);
		}

		static ::System::Void add_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET))(a1);
		}

		static ::System::Void LoadScene(::System::String* a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET))(a1, a2);
		}

		static ::System::Void LoadScene_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_1_OFFSET))(a1);
		}

		static ::UnityEngine::SceneManagement::Scene LoadScene_2(::System::String* a1, ::UnityEngine::SceneManagement::LoadSceneParameters a2)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_2_OFFSET))(a1, a2);
		}

		static ::System::Void LoadScene_3(::System::Int32 a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_3_OFFSET))(a1, a2);
		}

		static ::UnityEngine::SceneManagement::Scene LoadScene_4(::System::Int32 a1, ::UnityEngine::SceneManagement::LoadSceneParameters a2)
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_4_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync(::System::Int32 a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_1(::System::Int32 a1, ::UnityEngine::SceneManagement::LoadSceneParameters a2)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_2(::System::String* a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsync_3(::System::String* a1, ::UnityEngine::SceneManagement::LoadSceneParameters a2)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean UnloadScene(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_OFFSET))(a1);
		}

		static ::System::Boolean UnloadScene_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENE_1_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneAsync(::System::String* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET))(a1);
		}

		static ::System::Void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene a1)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET))(a1);
		}

		static ::System::Void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::Scene a2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void GetActiveScene_Injected(::UnityEngine::SceneManagement::Scene& a1)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void GetSceneByName_Injected(::System::String* a1, ::UnityEngine::SceneManagement::Scene& a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEBYNAME_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetSceneAt_Injected(::System::Int32 a1, ::UnityEngine::SceneManagement::Scene& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET))(a1, a2);
		}
	};
}
