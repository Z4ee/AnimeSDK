#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int OverflowAction_TypeDefinitionIndex = 4093;

	enum class OverflowAction : ::System::Int32
	{
		DoNotOverwrite = -1,
		OverwriteAsNeeded = 0,
		OverwriteOlder = 1,
	};
}
