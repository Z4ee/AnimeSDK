#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

namespace UnrealTypes
{
	inline static constexpr unsigned int NativeList_1_TypeDefinitionIndex = 28289;

	template <typename T>
	struct NativeList_1
	{
		::Unity::Collections::Allocator _allocator; // 0x0
		::System::Void* _storage; // 0x0
		::System::Int32 _capacity; // 0x0
		::System::Int32 _size; // 0x0
	};
}
