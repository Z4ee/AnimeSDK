#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int XLuaWrapRegistrationKind_TypeDefinitionIndex = 50612;

	enum class XLuaWrapRegistrationKind : ::System::Int32
	{
		NormalWrap = 0,
		Enum = 1,
		GCOptimizedValueType = 2,
		Delegate = 3,
		InterfaceBridge = 4,
	};
}
