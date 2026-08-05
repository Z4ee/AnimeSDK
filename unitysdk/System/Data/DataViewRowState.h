#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataViewRowState_TypeDefinitionIndex = 39282;

	enum class DataViewRowState : ::System::Int32
	{
		None = 0,
		Unchanged = 2,
		Added = 4,
		Deleted = 8,
		ModifiedCurrent = 16,
		ModifiedOriginal = 32,
		OriginalRows = 42,
		CurrentRows = 22,
	};
}
