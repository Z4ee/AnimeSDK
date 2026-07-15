#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ListWhere_1_TypeDefinitionIndex = 6392;

	template <typename TSource>
	struct ListWhere_1
	{
		::System::Func_2<TSource, ::System::Boolean>* _predicate_P; // 0x0
		::System::Collections::Generic::List_1<TSource>* source; // 0x0
		::System::Int32 index; // 0x0
	};
}
