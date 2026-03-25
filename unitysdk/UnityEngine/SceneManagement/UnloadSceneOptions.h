#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int UnloadSceneOptions_TypeDefinitionIndex = 4319;

	enum class UnloadSceneOptions : ::System::Int32
	{
		None = 0,
		UnloadAllEmbeddedSceneObjects = 1,
	};
}
