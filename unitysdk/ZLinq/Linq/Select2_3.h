#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Select2_3_TypeDefinitionIndex = 6379;

	template <typename TEnumerator, typename TSource, typename TResult>
	struct Select2_3
	{
		::System::Func_3<TSource, ::System::Int32, TResult>* _selector_P; // 0x0
		TEnumerator source; // 0x0
		::System::Int32 index; // 0x0
	};
}
