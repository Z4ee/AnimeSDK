#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClearFlag_TypeDefinitionIndex = 34036;

	enum class ClearFlag : ::System::Int32
	{
		None = 0,
		Color = 1,
		Depth = 2,
		All = 3,
	};
}
