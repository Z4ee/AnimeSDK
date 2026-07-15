#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T> class Set_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__UnionIterator_d__71_1_TypeDefinitionIndex = 3146;

	template <typename TSource>
	class Enumerable__UnionIterator_d__71_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TSource __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* first; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__first; // 0x0
		::System::Linq::Set_1<TSource>* _set_5__1; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* second; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__second; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1; // 0x0
	};
}
