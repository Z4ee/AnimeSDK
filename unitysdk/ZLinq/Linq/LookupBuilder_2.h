#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int LookupBuilder_2_TypeDefinitionIndex = 6386;

	template <typename TKey, typename TElement>
	struct LookupBuilder_2
	{
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::Il2CppArray<::ZLinq::Linq::Grouping_2<TKey, TElement>*>* buckets; // 0x0
		::System::Int32 bucketsLength; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TElement>* last; // 0x0
		::System::Int32 groupCount; // 0x0
	};
}
