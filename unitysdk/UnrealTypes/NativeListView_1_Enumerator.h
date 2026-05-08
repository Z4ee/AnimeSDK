#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int NativeListView_1_Enumerator_TypeDefinitionIndex = 25199;

	template <typename T>
	struct NativeListView_1_Enumerator
	{
		::UnrealTypes::NativeListView_1<T> _listView; // 0x0
		::System::Int32 _index; // 0x0
	};
}
