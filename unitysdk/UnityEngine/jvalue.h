#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int jvalue_TypeDefinitionIndex = 5688;

	struct alignas(8) jvalue
	{
		::System::Boolean z; // 0x10
		::System::SByte b; // 0x10
		::System::Char c; // 0x10
		::System::Int16 s; // 0x10
		::System::Int32 i; // 0x10
		::System::Int64 j; // 0x10
		::System::Single f; // 0x10
		::System::Double d; // 0x10
		::System::IntPtr l; // 0x10
	};
}
