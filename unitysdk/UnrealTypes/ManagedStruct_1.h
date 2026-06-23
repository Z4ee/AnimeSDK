#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ManagedStruct_1_TypeDefinitionIndex = 27679;

	template <typename T>
	class ManagedStruct_1 : public ::System::Object
	{
	public:
		::Unity::Collections::Allocator _allocator; // 0x0
		::UnrealTypes::RawPtr_1<T> _ptr; // 0x0
	};
}
