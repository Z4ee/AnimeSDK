#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker_RefInfo_TypeDefinitionIndex = 47847;

	struct alignas(8) LuaMemoryLeakChecker_RefInfo
	{
		::System::String* Key; // 0x10
		::System::Boolean HasNext; // 0x18
		::System::IntPtr Parent; // 0x20
		::System::Boolean IsNumberKey; // 0x28
	};
}
