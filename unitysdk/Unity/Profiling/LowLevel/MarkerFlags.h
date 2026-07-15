#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Profiling::LowLevel
{
	inline static constexpr unsigned int MarkerFlags_TypeDefinitionIndex = 3942;

	enum class MarkerFlags : ::System::Int32
	{
		Default = 0,
		Script = 2,
		ScriptInvoke = 32,
		ScriptDeepProfiler = 64,
		AvailabilityEditor = 4,
		Warning = 16,
	};
}
