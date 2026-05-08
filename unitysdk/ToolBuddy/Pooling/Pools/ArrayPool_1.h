#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/ToolBuddy/Pooling/Pools/ArrayPoolUsageData.h"

namespace System { class Random; }

namespace ToolBuddy::Pooling::Pools
{
	inline static constexpr unsigned int ArrayPool_1_TypeDefinitionIndex = 24784;

	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<T> emptySubArray; // 0x0
		::System::Random* random; // 0x0
		// static const ::System::Int32 keysInitialCapacity = 0xC8; // 0x0
		::Il2CppArray<::System::Int32>* poolKeys; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* poolValues; // 0x0
		::System::Int32 arraysCount; // 0x0
		::System::Int64 elementsCount; // 0x0
		::System::Int64 elementsCapacity; // 0x0
		::System::Boolean _LogAllocations_k__BackingField; // 0x0
	};
}
