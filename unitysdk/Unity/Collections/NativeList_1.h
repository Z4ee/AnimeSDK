#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeList.h"
#include "unitysdk/Unity/Collections/NativeArrayOptions.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeList_1_TypeDefinitionIndex = 18461;

	template <typename T>
	struct NativeList_1
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeList* m_ListData; // 0x0
		::Unity::Collections::Allocator m_DeprecatedAllocator; // 0x0
	};
}
