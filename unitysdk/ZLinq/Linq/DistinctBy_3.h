#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int DistinctBy_3_TypeDefinitionIndex = 6118;

	template <typename TEnumerator, typename TSource, typename TKey>
	struct DistinctBy_3
	{
		::System::Func_2<TSource, TKey>* _keySelector_P; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer_P; // 0x0
		TEnumerator source; // 0x0
		::ZLinq::Internal::HashSetSlim_1<TKey>* set; // 0x0
	};
}
