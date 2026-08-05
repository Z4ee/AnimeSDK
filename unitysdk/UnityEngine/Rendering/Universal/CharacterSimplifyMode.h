#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterSimplifyMode_TypeDefinitionIndex = 27179;

	enum class CharacterSimplifyMode : ::System::Int32
	{
		BlackCurtain = 3,
		Battle = 1,
		FrontendGame = 0,
		LightDirectionFromCamera = 2,
		Count = 4,
	};
}
