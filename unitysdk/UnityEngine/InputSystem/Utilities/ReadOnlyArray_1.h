#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ReadOnlyArray_1_TypeDefinitionIndex = 32698;

	template <typename TValue>
	struct ReadOnlyArray_1
	{
		::Il2CppArray<TValue>* m_Array; // 0x0
		::System::Int32 m_StartIndex; // 0x0
		::System::Int32 m_Length; // 0x0
	};
}
