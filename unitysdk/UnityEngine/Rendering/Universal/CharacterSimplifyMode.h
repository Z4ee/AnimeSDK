#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterSimplifyMode_TypeDefinitionIndex = 30061;

	enum class CharacterSimplifyMode : ::System::Int32
	{
		FrontendGame = 0,
		Battle = 1,
		LightDirectionFromCamera = 2,
		BlackCurtain = 3,
		Count = 4,
	};
}
