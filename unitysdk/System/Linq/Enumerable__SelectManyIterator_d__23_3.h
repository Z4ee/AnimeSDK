#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__SelectManyIterator_d__23_3_TypeDefinitionIndex = 3138;

	template <typename TSource, typename TCollection, typename TResult>
	class Enumerable__SelectManyIterator_d__23_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__source; // 0x0
		::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TCollection>*>* collectionSelector; // 0x0
		::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TCollection>*>* __3__collectionSelector; // 0x0
		::System::Func_3<TSource, TCollection, TResult>* resultSelector; // 0x0
		::System::Func_3<TSource, TCollection, TResult>* __3__resultSelector; // 0x0
		TSource _element_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1; // 0x0
		::System::Collections::Generic::IEnumerator_1<TCollection>* __7__wrap2; // 0x0
	};
}
