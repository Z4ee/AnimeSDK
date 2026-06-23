#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/ManagedStruct_1.h"
#include "unitysdk/UnrealTypes/NativeList_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ManagedList_1_TypeDefinitionIndex = 27677;

	template <typename T>
	class ManagedList_1 : public ::UnrealTypes::ManagedStruct_1<::UnrealTypes::NativeList_1<T>>
	{
	public:
	};
}
