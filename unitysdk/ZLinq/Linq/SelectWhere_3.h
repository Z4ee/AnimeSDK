#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int SelectWhere_3_TypeDefinitionIndex = 6380;

	template <typename TEnumerator, typename TSource, typename TResult>
	struct SelectWhere_3
	{
		::System::Func_2<TSource, TResult>* _selector_P; // 0x0
		::System::Func_2<TResult, ::System::Boolean>* _predicate_P; // 0x0
		TEnumerator source; // 0x0
	};
}
