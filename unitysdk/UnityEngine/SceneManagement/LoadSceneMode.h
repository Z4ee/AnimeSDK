#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LoadSceneMode_TypeDefinitionIndex = 4497;

	enum class LoadSceneMode : ::System::Int32
	{
		Single = 0,
		Additive = 1,
	};
}
