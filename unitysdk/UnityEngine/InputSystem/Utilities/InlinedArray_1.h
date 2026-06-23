#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InlinedArray_1_TypeDefinitionIndex = 32047;

	template <typename TValue>
	struct InlinedArray_1
	{
		::System::Int32 length; // 0x0
		TValue firstValue; // 0x0
		::Il2CppArray<TValue>* additionalValues; // 0x0
	};
}
