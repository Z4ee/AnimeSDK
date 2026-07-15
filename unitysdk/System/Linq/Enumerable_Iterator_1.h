#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq { template <typename T> class Enumerable_Iterator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_Iterator_1_TypeDefinitionIndex = 3126;

	template <typename TSource>
	class Enumerable_Iterator_1 : public ::System::Object
	{
	public:
		::System::Int32 threadId; // 0x0
		::System::Int32 state; // 0x0
		TSource current; // 0x0
	};
}
