#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalityRelation_TypeDefinitionIndex = 886;

	enum class CausalityRelation : ::System::Int32
	{
		AssignDelegate = 0,
		Join = 1,
		Choice = 2,
		Cancel = 3,
		Error = 4,
	};
}
