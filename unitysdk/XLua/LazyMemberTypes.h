#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int LazyMemberTypes_TypeDefinitionIndex = 48009;

	enum class LazyMemberTypes : ::System::Int32
	{
		Method = 0,
		FieldGet = 1,
		FieldSet = 2,
		PropertyGet = 3,
		PropertySet = 4,
		Event = 5,
	};
}
