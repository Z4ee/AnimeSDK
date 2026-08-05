#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowState_TypeDefinitionIndex = 39261;

	enum class DataRowState : ::System::Int32
	{
		Detached = 1,
		Unchanged = 2,
		Added = 4,
		Deleted = 8,
		Modified = 16,
	};
}
