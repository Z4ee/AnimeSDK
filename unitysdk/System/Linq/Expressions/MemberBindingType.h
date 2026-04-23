#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberBindingType_TypeDefinitionIndex = 3228;

	enum class MemberBindingType : ::System::Int32
	{
		Assignment = 0,
		MemberBinding = 1,
		ListBinding = 2,
	};
}
