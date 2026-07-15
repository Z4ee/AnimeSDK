#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class OrderByComparable_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderBySkipTake_3_TypeDefinitionIndex = 6368;

	template <typename TEnumerator, typename TSource, typename TKey>
	struct OrderBySkipTake_3
	{
		TEnumerator source; // 0x0
		::ZLinq::Linq::OrderByComparable_2<TSource, TKey>* comparable; // 0x0
		::System::Int32 minIndexInclusive; // 0x0
		::System::Int32 maxIndexInclusive; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<TSource>* buffer; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<::System::Int32>* indexMap; // 0x0
		::System::Int32 maxIndex; // 0x0
		::System::Int32 index; // 0x0
	};
}
