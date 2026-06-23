#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2__ApplyResultSelector_d__13_1_TypeDefinitionIndex = 4380;

	template <typename TKey, typename TElement, typename TResult>
	class Lookup_2__ApplyResultSelector_d__13_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TResult __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Linq::Lookup_2<TKey, TElement>* __4__this; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* _g_5__1; // 0x0
		::System::Func_3<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, TResult>* resultSelector; // 0x0
		::System::Func_3<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, TResult>* __3__resultSelector; // 0x0
	};
}
