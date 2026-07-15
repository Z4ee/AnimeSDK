#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq::Internal
{
	inline static constexpr unsigned int ValueQueue_1_TypeDefinitionIndex = 6404;

	template <typename T>
	struct ValueQueue_1
	{
		::Il2CppArray<T>* items; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Int32 size; // 0x0
	};
}
