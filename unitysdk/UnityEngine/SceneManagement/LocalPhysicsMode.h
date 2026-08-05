#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LocalPhysicsMode_TypeDefinitionIndex = 5519;

	enum class LocalPhysicsMode : ::System::Int32
	{
		None = 0,
		Physics2D = 1,
		Physics3D = 2,
	};
}
