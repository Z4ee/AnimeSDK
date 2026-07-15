#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int GroupBy_3_TypeDefinitionIndex = 6366;

	template <typename TEnumerator, typename TSource, typename TKey>
	struct GroupBy_3
	{
		::System::Func_2<TSource, TKey>* _keySelector_P; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer_P; // 0x0
		TEnumerator source; // 0x0
		::System::Boolean init; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TSource>* rootGrouping; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TSource>* currentGrouping; // 0x0
	};
}
