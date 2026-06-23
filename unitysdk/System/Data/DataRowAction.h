#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowAction_TypeDefinitionIndex = 38593;

	enum class DataRowAction : ::System::Int32
	{
		Nothing = 0,
		Delete = 1,
		Change = 2,
		Rollback = 4,
		Commit = 8,
		Add = 16,
		ChangeOriginal = 32,
		ChangeCurrentAndOriginal = 64,
	};
}
