#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterSimplifyMode_TypeDefinitionIndex = 26267;

	enum class CharacterSimplifyMode : ::System::Int32
	{
		Count = 4,
		Battle = 1,
		FrontendGame = 0,
		BlackCurtain = 3,
		LightDirectionFromCamera = 2,
	};
}
