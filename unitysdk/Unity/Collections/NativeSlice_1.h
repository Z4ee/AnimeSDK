#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeSlice_1_TypeDefinitionIndex = 3981;

	template <typename T>
	struct NativeSlice_1
	{
		::System::Byte* m_Buffer; // 0x0
		::System::Int32 m_Stride; // 0x0
		::System::Int32 m_Length; // 0x0
	};
}
