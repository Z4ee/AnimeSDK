#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArrayOptions.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArray_1_TypeDefinitionIndex = 3979;

	template <typename T>
	struct NativeArray_1
	{
		::System::Void* m_Buffer; // 0x0
		::System::Int32 m_Length; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
