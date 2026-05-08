#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueType_TypeDefinitionIndex = 25104;

	enum class StyleValueType : ::System::Int32
	{
		Invalid = 0,
		Keyword = 1,
		Float = 2,
		Dimension = 3,
		Color = 4,
		ResourcePath = 5,
		AssetReference = 6,
		Enum = 7,
		Variable = 8,
		String = 9,
		Function = 10,
		FunctionSeparator = 11,
		ScalableImage = 12,
	};
}
