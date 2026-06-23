#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/ManagedStruct_1.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/NativeListView_1_Enumerator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ManagedStructList_1_TypeDefinitionIndex = 27680;

	template <typename T>
	class ManagedStructList_1 : public ::UnrealTypes::ManagedStruct_1<::UnrealTypes::NativeStructList_1<T>>
	{
	public:
	};
}
