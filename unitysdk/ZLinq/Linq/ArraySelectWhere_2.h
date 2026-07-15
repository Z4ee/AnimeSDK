#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ArraySelectWhere_2_TypeDefinitionIndex = 6382;

	template <typename TSource, typename TResult>
	struct ArraySelectWhere_2
	{
		::Il2CppArray<TSource>* source; // 0x0
		::System::Func_2<TSource, TResult>* selector; // 0x0
		::System::Func_2<TResult, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
