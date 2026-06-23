#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerationError_TypeDefinitionIndex = 6360;

	enum class TextGenerationError : ::System::Int32
	{
		None = 0,
		CustomSizeOnNonDynamicFont = 1,
		CustomStyleOnNonDynamicFont = 2,
		NoFont = 4,
	};
}
