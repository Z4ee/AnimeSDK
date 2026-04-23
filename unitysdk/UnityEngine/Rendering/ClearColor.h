#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClearColor_TypeDefinitionIndex = 33384;

	enum class ClearColor : ::System::Int32
	{
		Black = 0,
		Transparent = 1,
		White = 2,
		Gray = 3,
	};
}
