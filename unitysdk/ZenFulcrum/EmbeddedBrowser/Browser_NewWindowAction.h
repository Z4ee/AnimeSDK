#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_NewWindowAction_TypeDefinitionIndex = 37175;

	enum class Browser_NewWindowAction : ::System::Int32
	{
		Ignore = 1,
		Redirect = 2,
		NewBrowser = 3,
		NewWindow = 4,
	};
}
