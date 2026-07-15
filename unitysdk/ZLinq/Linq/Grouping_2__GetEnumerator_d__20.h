#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Grouping_2__GetEnumerator_d__20_TypeDefinitionIndex = 6388;

	template <typename TKey, typename TElement>
	class Grouping_2__GetEnumerator_d__20 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TElement __2__current; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TElement>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
