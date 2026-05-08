#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PromiseState_TypeDefinitionIndex = 31145;

	enum class PromiseState : ::System::Int32
	{
		Pending = 0,
		Rejected = 1,
		Resolved = 2,
	};
}
