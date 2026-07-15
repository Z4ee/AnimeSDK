#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Linq { class IOrderByComparer; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderByComparer_2_TypeDefinitionIndex = 6372;

	template <typename TSource, typename TKey>
	class OrderByComparer_2 : public ::System::Object
	{
	public:
		::Il2CppArray<TKey>* keys; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::ZLinq::Linq::IOrderByComparer* childComparer; // 0x0
		::System::Boolean descending; // 0x0
	};
}
