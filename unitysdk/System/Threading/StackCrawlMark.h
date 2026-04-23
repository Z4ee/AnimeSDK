#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int StackCrawlMark_TypeDefinitionIndex = 848;

	enum class StackCrawlMark : ::System::Int32
	{
		LookForMe = 0,
		LookForMyCaller = 1,
		LookForMyCallersCaller = 2,
		LookForThread = 3,
	};
}
