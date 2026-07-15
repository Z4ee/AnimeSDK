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
	inline static constexpr unsigned int Enumerable__DistinctIterator_d__68_1_TypeDefinitionIndex = 3145;

	template <typename TSource>
	class Enumerable__DistinctIterator_d__68_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TSource __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<TSource>* __3__source; // 0x0
		::System::Linq::Set_1<TSource>* _set_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1; // 0x0
	};
}
