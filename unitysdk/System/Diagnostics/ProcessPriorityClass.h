#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessPriorityClass_TypeDefinitionIndex = 2797;

	enum class ProcessPriorityClass : ::System::Int32
	{
		AboveNormal = 32768,
		BelowNormal = 16384,
		High = 128,
		Idle = 64,
		Normal = 32,
		RealTime = 256,
	};
}
