#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2__GetEnumerator_d__12_TypeDefinitionIndex = 3164;

	template <typename TKey, typename TElement>
	class Lookup_2__GetEnumerator_d__12 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Linq::IGrouping_2<TKey, TElement>* __2__current; // 0x0
		::System::Linq::Lookup_2<TKey, TElement>* __4__this; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* _g_5__1; // 0x0
	};
}
