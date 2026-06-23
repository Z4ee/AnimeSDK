#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int HelpContextType_TypeDefinitionIndex = 3058;

	enum class HelpContextType : ::System::Int32
	{
		Ambient = 0,
		Window = 1,
		Selection = 2,
		ToolWindowSelection = 3,
	};
}
