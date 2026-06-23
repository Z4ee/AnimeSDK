#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace ToolBuddy::Pooling::Pools { template <typename T> class ArrayPool_1; }

namespace ToolBuddy::Pooling::Collections
{
	inline static constexpr unsigned int SubArray_1_TypeDefinitionIndex = 26186;

	template <typename T>
	struct SubArray_1
	{
		::Il2CppArray<T>* Array; // 0x0
		::System::Int32 Count; // 0x0
	};
}
