#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConditionalWeakTable_2_TypeDefinitionIndex = 1392;

	template <typename TKey, typename TValue>
	class ConditionalWeakTable_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>* data; // 0x0
		::System::Object* _lock; // 0x0
		::System::Int32 size; // 0x0
	};
}
