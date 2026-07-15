#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/OrderedEnumerable_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq { template <typename T> class EnumerableSorter_1; }

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable_2_TypeDefinitionIndex = 3170;

	template <typename TElement, typename TKey>
	class OrderedEnumerable_2 : public ::System::Linq::OrderedEnumerable_1<TElement>
	{
	public:
		::System::Linq::OrderedEnumerable_1<TElement>* parent; // 0x0
		::System::Func_2<TElement, TKey>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Boolean descending; // 0x0
	};
}
