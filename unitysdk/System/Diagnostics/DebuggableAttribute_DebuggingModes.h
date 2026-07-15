#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggableAttribute_DebuggingModes_TypeDefinitionIndex = 1570;

	enum class DebuggableAttribute_DebuggingModes : ::System::Int32
	{
		None = 0,
		Default = 1,
		DisableOptimizations = 256,
		IgnoreSymbolStoreSequencePoints = 2,
		EnableEditAndContinue = 4,
	};
}
