#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Where_2_TypeDefinitionIndex = 6389;

	template <typename TEnumerator, typename TSource>
	struct Where_2
	{
		::System::Func_2<TSource, ::System::Boolean>* _predicate_P; // 0x0
		TEnumerator source; // 0x0
	};
}
