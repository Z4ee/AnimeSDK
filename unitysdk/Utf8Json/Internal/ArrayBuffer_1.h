#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ArrayBuffer_1_TypeDefinitionIndex = 91221;

	template <typename T>
	struct ArrayBuffer_1
	{
		::Il2CppArray<T>* Buffer; // 0x0
		::System::Int32 Size; // 0x0
	};
}
