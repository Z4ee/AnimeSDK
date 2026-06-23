#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1_QueueBlock; }

namespace Unity::Collections
{
	inline static constexpr unsigned int ManagedBlockQueue_1_QueueBlock_TypeDefinitionIndex = 18456;

	template <typename T>
	class ManagedBlockQueue_1_QueueBlock : public ::System::Object
	{
	public:
		::Unity::Collections::ManagedBlockQueue_1_QueueBlock<T>* Next; // 0x0
		::Il2CppArray<T>* Items; // 0x0
		::System::Int32 NumItems; // 0x0
	};
}
