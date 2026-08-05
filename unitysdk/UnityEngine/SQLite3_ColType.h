#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SQLite3_ColType_TypeDefinitionIndex = 5397;

	enum class SQLite3_ColType : ::System::Int32
	{
		Integer = 1,
		Float = 2,
		Text = 3,
		Blob = 4,
		Null = 5,
	};
}
