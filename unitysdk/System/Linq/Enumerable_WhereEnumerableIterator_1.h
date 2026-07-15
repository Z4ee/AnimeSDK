#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Enumerable_Iterator_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereEnumerableIterator_1_TypeDefinitionIndex = 3127;

	template <typename TSource>
	class Enumerable_WhereEnumerableIterator_1 : public ::System::Linq::Enumerable_Iterator_1<TSource>
	{
	public:
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, ::System::Boolean>* predicate; // 0x0
		::System::Collections::Generic::IEnumerator_1<TSource>* enumerator; // 0x0
	};
}
