#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int WhereSelect_3_TypeDefinitionIndex = 6390;

	template <typename TEnumerator, typename TSource, typename TResult>
	struct WhereSelect_3
	{
		::System::Func_2<TSource, ::System::Boolean>* _predicate_P; // 0x0
		::System::Func_2<TSource, TResult>* _selector_P; // 0x0
		TEnumerator source; // 0x0
	};
}
