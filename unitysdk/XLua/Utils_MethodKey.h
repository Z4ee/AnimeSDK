#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace XLua
{
	inline static constexpr unsigned int Utils_MethodKey_TypeDefinitionIndex = 48011;

	struct alignas(8) Utils_MethodKey
	{
		::System::String* Name; // 0x10
		::System::Boolean IsStatic; // 0x18
	};
}
