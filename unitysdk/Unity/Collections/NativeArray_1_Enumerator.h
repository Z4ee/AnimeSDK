#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArray_1_Enumerator_TypeDefinitionIndex = 3980;

	template <typename T>
	struct NativeArray_1_Enumerator
	{
		::Unity::Collections::NativeArray_1<T> m_Array; // 0x0
		::System::Int32 m_Index; // 0x0
	};
}
