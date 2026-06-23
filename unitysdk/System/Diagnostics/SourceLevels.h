#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int SourceLevels_TypeDefinitionIndex = 2758;

	enum class SourceLevels : ::System::Int32
	{
		Off = 0,
		Critical = 1,
		Error = 3,
		Warning = 7,
		Information = 15,
		Verbose = 31,
		ActivityTracing = 65280,
		All = -1,
	};
}
