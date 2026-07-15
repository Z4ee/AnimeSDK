#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NewWindowAction_TypeDefinitionIndex = 37235;

	enum class BrowserNative_NewWindowAction : ::System::Int32
	{
		NWA_IGNORE = 1,
		NWA_REDIRECT = 2,
		NWA_NEW_BROWSER = 3,
		NWA_NEW_WINDOW = 4,
	};
}
