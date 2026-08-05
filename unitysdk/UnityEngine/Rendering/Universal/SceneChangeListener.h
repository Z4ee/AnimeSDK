#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_LISTENERREGISTER_OFFSET UNITYSDK_OFFSET(0x1CEFF680)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_NEEDRESTETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x1CEFF810)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_SCENELOADED_OFFSET UNITYSDK_OFFSET(0x1CEFFF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1CEFF850)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF00120)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneChangeListener_TypeDefinitionIndex = 27767;

	class SceneChangeListener : public ::System::Object
	{
	public:
		static ::UnityEngine::SceneManagement::Scene* StaticGet_newLoadedScene()
		{
			return (::UnityEngine::SceneManagement::Scene*)Il2CppClass::FromTypeDefinitionIndex(SceneChangeListener_TypeDefinitionIndex)->GetStaticField(0x61E0);
		}
		static ::System::Boolean* StaticGet_s_CurrentActiveSceneIsFortuneSquare()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneChangeListener_TypeDefinitionIndex)->GetStaticField(0x61E4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER__CCTOR_OFFSET))();
		}

		static ::System::Void ListenerRegister()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_LISTENERREGISTER_OFFSET))();
		}

		static ::System::Void NeedRestetrahedralization()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_NEEDRESTETRAHEDRALIZATION_OFFSET))();
		}

		static ::System::Void SceneUnloaded(::UnityEngine::SceneManagement::Scene newScene)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_SCENEUNLOADED_OFFSET))(newScene);
		}

		static ::System::Void SceneLoaded(::UnityEngine::SceneManagement::Scene newScene, ::UnityEngine::SceneManagement::LoadSceneMode sceneMode)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENECHANGELISTENER_SCENELOADED_OFFSET))(newScene, sceneMode);
		}
	};
}
