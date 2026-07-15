#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Linq/Enumerable_Iterator_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereListIterator_1_TypeDefinitionIndex = 3129;

	template <typename TSource>
	class Enumerable_WhereListIterator_1 : public ::System::Linq::Enumerable_Iterator_1<TSource>
	{
	public:
		::System::Collections::Generic::List_1<TSource>* source; // 0x0
		::System::Func_2<TSource, ::System::Boolean>* predicate; // 0x0
		::System::Collections::Generic::List_1_Enumerator<TSource> enumerator; // 0x0
	};
}
