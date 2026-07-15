#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class OrderByComparable_2; }
namespace ZLinq::Linq { template <typename T> class IOrderByComparable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderBy_3_TypeDefinitionIndex = 6367;

	template <typename TEnumerator, typename TSource, typename TKey>
	struct OrderBy_3
	{
		::System::Func_2<TSource, TKey>* _keySelector_P; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* _comparer_P; // 0x0
		::ZLinq::Linq::IOrderByComparable_1<TSource>* _parent_P; // 0x0
		::System::Boolean _descending_P; // 0x0
		TEnumerator source; // 0x0
		::ZLinq::Linq::OrderByComparable_2<TSource, TKey>* comparable; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<TSource>* buffer; // 0x0
		::System::Int32 index; // 0x0
	};
}
