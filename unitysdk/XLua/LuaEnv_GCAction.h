#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_GCAction_TypeDefinitionIndex = 47954;

	struct alignas(4) LuaEnv_GCAction
	{
		::System::Int32 Reference; // 0x10
		::System::Boolean IsDelegate; // 0x14
	};
}
