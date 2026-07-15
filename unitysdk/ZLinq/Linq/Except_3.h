#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Except_3_TypeDefinitionIndex = 6365;

	template <typename TEnumerator, typename TEnumerator2, typename TSource>
	struct Except_3
	{
		::System::Collections::Generic::IEqualityComparer_1<TSource>* _comparer_P; // 0x0
		TEnumerator source; // 0x0
		::ZLinq::ValueEnumerable_2<TEnumerator2, TSource> second; // 0x0
		::ZLinq::Internal::HashSetSlim_1<TSource>* set; // 0x0
	};
}
