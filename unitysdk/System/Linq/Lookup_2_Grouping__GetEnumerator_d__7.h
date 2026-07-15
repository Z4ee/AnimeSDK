#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2_Grouping__GetEnumerator_d__7_TypeDefinitionIndex = 3163;

	template <typename TKey, typename TElement>
	class Lookup_2_Grouping__GetEnumerator_d__7 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TElement __2__current; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* __4__this; // 0x0
		::System::Int32 _i_5__1; // 0x0
	};
}
