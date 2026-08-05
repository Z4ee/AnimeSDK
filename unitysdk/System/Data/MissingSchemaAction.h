#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int MissingSchemaAction_TypeDefinitionIndex = 39319;

	enum class MissingSchemaAction : ::System::Int32
	{
		Add = 1,
		Ignore = 2,
		Error = 3,
		AddWithKey = 4,
	};
}
