#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneParameters.h"
#include "unitysdk/UnityEngine/SceneManagement/UnloadSceneOptions.h"

namespace System { class String; }
namespace UnityEngine { class AsyncOperation; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFAF440)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFAE6A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_UNLOADSCENENAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFAE740)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManagerAPIInternal_TypeDefinitionIndex = 4495;

	class SceneManagerAPIInternal : public ::System::Object
	{
	public:
		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* a1, ::System::Int32 a2, ::UnityEngine::SceneManagement::LoadSceneParameters a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::SceneManagement::UnloadSceneOptions a4, ::System::Boolean& a5)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_UNLOADSCENENAMEINDEXINTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(::System::String* a1, ::System::Int32 a2, ::UnityEngine::SceneManagement::LoadSceneParameters& a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
