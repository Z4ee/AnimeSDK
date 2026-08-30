#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MemberTypes_TypeDefinitionIndex = 575;

	enum class MemberTypes : ::System::Int32
	{
		Constructor = 1,
		Event = 2,
		Field = 4,
		Method = 8,
		Property = 16,
		TypeInfo = 32,
		Custom = 64,
		NestedType = 128,
		All = 191,
	};
}
