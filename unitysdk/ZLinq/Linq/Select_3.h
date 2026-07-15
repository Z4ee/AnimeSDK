#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Select_3_TypeDefinitionIndex = 6378;

	template <typename TEnumerator, typename TSource, typename TResult>
	struct Select_3
	{
		TEnumerator source; // 0x0
		::System::Func_2<TSource, TResult>* selector; // 0x0
	};
}
