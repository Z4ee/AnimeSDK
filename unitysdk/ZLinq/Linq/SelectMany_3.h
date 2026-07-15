#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZLinq/Linq/FromEnumerable_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int SelectMany_3_TypeDefinitionIndex = 6385;

	template <typename TEnumerator, typename TSource, typename TResult>
	struct SelectMany_3
	{
		::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* _selector_P; // 0x0
		TEnumerator source; // 0x0
		::ZLinq::Linq::FromEnumerable_1<TResult> innerEnumerator; // 0x0
		::System::Boolean hasInner; // 0x0
	};
}
