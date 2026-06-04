#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int TypeNameKind_TypeDefinitionIndex = 317;

	enum class TypeNameKind : ::System::Int32
	{
		Name = 0,
		ToString = 1,
		SerializationName = 2,
		FullName = 3,
	};
}
