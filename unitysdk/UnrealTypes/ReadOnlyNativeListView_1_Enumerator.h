#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ReadOnlyNativeListView_1_Enumerator_TypeDefinitionIndex = 28293;

	template <typename T>
	struct ReadOnlyNativeListView_1_Enumerator
	{
		::UnrealTypes::ReadOnlyNativeListView_1<T> _listView; // 0x0
		::System::Int32 _index; // 0x0
	};
}
