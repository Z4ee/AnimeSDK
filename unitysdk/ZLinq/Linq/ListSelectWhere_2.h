#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ListSelectWhere_2_TypeDefinitionIndex = 6384;

	template <typename TSource, typename TResult>
	struct ListSelectWhere_2
	{
		::System::Collections::Generic::List_1<TSource>* source; // 0x0
		::System::Func_2<TSource, TResult>* selector; // 0x0
		::System::Func_2<TResult, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
