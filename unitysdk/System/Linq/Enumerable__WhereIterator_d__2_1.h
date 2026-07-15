#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__WhereIterator_d__2_1_TypeDefinitionIndex = 3133;

	template <typename TSource>
	class Enumerable__WhereIterator_d__2_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TSource __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__source; // 0x0
		::System::Int32 _index_5__1; // 0x0
		::System::Func_3<TSource, ::System::Int32, ::System::Boolean>* predicate; // 0x0
		::System::Func_3<TSource, ::System::Int32, ::System::Boolean>* __3__predicate; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1; // 0x0
	};
}
