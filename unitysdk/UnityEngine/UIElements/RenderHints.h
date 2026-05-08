#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RenderHints_TypeDefinitionIndex = 24954;

	enum class RenderHints : ::System::Int32
	{
		None = 0,
		GroupTransform = 1,
		BoneTransform = 2,
		ClipWithScissors = 4,
	};
}
