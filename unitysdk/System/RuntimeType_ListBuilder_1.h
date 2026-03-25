#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System
{
	inline static constexpr unsigned int RuntimeType_ListBuilder_1_TypeDefinitionIndex = 321;

	template <typename T>
	struct RuntimeType_ListBuilder_1
	{
		::Il2CppArray<T>* _items; // 0x0
		T _item; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _capacity; // 0x0
	};
}
