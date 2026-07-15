#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ArrayWhere_1_TypeDefinitionIndex = 6391;

	template <typename TSource>
	struct ArrayWhere_1
	{
		::System::Func_2<TSource, ::System::Boolean>* _predicate_P; // 0x0
		::Il2CppArray<TSource>* source; // 0x0
		::System::Int32 index; // 0x0
	};
}
