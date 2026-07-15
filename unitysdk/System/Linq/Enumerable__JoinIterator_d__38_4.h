#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__JoinIterator_d__38_4_TypeDefinitionIndex = 3141;

	template <typename TOuter, typename TInner, typename TKey, typename TResult>
	class Enumerable__JoinIterator_d__38_4 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<TInner>* inner; // 0x0
		::System::Collections::Generic::IEnumerable_1<TInner>* __3__inner; // 0x0
		::System::Func_2<TInner, TKey>* innerKeySelector; // 0x0
		::System::Func_2<TInner, TKey>* __3__innerKeySelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* __3__comparer; // 0x0
		::System::Collections::Generic::IEnumerable_1<TOuter>* outer; // 0x0
		::System::Collections::Generic::IEnumerable_1<TOuter>* __3__outer; // 0x0
		::System::Linq::Lookup_2<TKey, TInner>* _lookup_5__1; // 0x0
		::System::Func_2<TOuter, TKey>* outerKeySelector; // 0x0
		::System::Func_2<TOuter, TKey>* __3__outerKeySelector; // 0x0
		::System::Func_3<TOuter, TInner, TResult>* resultSelector; // 0x0
		::System::Func_3<TOuter, TInner, TResult>* __3__resultSelector; // 0x0
		TOuter _item_5__2; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TInner>* _g_5__3; // 0x0
		::System::Int32 _i_5__4; // 0x0
		::System::Collections::Generic::IEnumerator_1<TOuter>* __7__wrap1; // 0x0
	};
}
