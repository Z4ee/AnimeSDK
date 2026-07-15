#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Distinct_2_TypeDefinitionIndex = 6364;

	template <typename TEnumerator, typename TSource>
	struct Distinct_2
	{
		::System::Collections::Generic::IEqualityComparer_1<TSource>* _comparer_P; // 0x0
		TEnumerator source; // 0x0
		::ZLinq::Internal::HashSetSlim_1<TSource>* set; // 0x0
	};
}
