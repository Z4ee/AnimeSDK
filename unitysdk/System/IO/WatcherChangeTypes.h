#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int WatcherChangeTypes_TypeDefinitionIndex = 3238;

	enum class WatcherChangeTypes : ::System::Int32
	{
		All = 15,
		Changed = 4,
		Created = 1,
		Deleted = 2,
		Renamed = 8,
	};
}
