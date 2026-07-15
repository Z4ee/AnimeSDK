#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ContextMenuOrigin_TypeDefinitionIndex = 37236;

	enum class BrowserNative_ContextMenuOrigin : ::System::Int32
	{
		Editable = 2,
		Image = 4,
		Selection = 8,
		Other = 1,
	};
}
