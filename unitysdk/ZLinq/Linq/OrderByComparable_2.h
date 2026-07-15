#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Linq { class IOrderByComparer; }
namespace ZLinq::Linq { template <typename T> class IOrderByComparable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderByComparable_2_TypeDefinitionIndex = 6371;

	template <typename TSource, typename TKey>
	class OrderByComparable_2 : public ::System::Object
	{
	public:
		::System::Func_2<TSource, TKey>* _keySelector_P; // 0x0
		::ZLinq::Linq::IOrderByComparable_1<TSource>* _parent_P; // 0x0
		::System::Boolean _descending_P; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
	};
}
