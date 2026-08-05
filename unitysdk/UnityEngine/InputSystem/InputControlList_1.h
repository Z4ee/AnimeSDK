#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlList_1_TypeDefinitionIndex = 32235;

	template <typename TControl>
	struct InputControlList_1
	{
		::System::Int32 m_Count; // 0x0
		::Unity::Collections::NativeArray_1<::System::UInt64> m_Indices; // 0x0
		::Unity::Collections::Allocator m_Allocator; // 0x0
		// static const ::System::UInt64 kInvalidIndex = 0xFFFFFFFFFFFFFFFF; // 0x0
	};
}
