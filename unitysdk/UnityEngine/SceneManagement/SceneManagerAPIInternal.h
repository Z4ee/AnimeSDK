#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneParameters.h"
#include "unitysdk/UnityEngine/SceneManagement/UnloadSceneOptions.h"

namespace System { class String; }
namespace UnityEngine { class AsyncOperation; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA66A20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA66A00)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_UNLOADSCENENAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA66A30)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManagerAPIInternal_TypeDefinitionIndex = 5516;

	class SceneManagerAPIInternal : public ::System::Object
	{
	public:
		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* sceneName, ::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, ::System::Boolean mustCompleteNextFrame)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
		}

		static ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::System::String* sceneName, ::System::Int32 sceneBuildIndex, ::System::Boolean immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options, ::System::Boolean& outSuccess)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_UNLOADSCENENAMEINDEXINTERNAL_OFFSET))(sceneName, sceneBuildIndex, immediately, options, outSuccess);
		}

		static ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(::System::String* sceneName, ::System::Int32 sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters& parameters, ::System::Boolean mustCompleteNextFrame)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET))(sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
		}
	};
}
