#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace System { class Object; }
namespace ToolBuddy::Pooling::Pools { template <typename T> class ArrayPool_1; }

namespace ToolBuddy::Pooling::Collections
{
	inline static constexpr unsigned int SubArrayList_1_TypeDefinitionIndex = 26760;

	template <typename T>
	struct SubArrayList_1
	{
		::ToolBuddy::Pooling::Pools::ArrayPool_1<T>* typePool; // 0x0
		::ToolBuddy::Pooling::Collections::SubArray_1<T> subArray; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
