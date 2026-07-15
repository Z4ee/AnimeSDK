#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int MouseButton_TypeDefinitionIndex = 37316;

	enum class MouseButton : ::System::Int32
	{
		Left = 1,
		Middle = 2,
		Right = 4,
	};
}
