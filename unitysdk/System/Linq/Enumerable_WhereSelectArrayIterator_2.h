#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Enumerable_Iterator_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereSelectArrayIterator_2_TypeDefinitionIndex = 3131;

	template <typename TSource, typename TResult>
	class Enumerable_WhereSelectArrayIterator_2 : public ::System::Linq::Enumerable_Iterator_1<TResult>
	{
	public:
		::Il2CppArray<TSource>* source; // 0x0
		::System::Func_2<TSource, ::System::Boolean>* predicate; // 0x0
		::System::Func_2<TSource, TResult>* selector; // 0x0
		::System::Int32 index; // 0x0
	};
}
