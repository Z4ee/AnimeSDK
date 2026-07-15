#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Buffer_1.h"
#include "unitysdk/System/Object.h"

namespace System::Linq { template <typename T> class OrderedEnumerable_1; }

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable_1__GetEnumerator_d__1_TypeDefinitionIndex = 3169;

	template <typename TElement>
	class OrderedEnumerable_1__GetEnumerator_d__1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TElement __2__current; // 0x0
		::System::Linq::OrderedEnumerable_1<TElement>* __4__this; // 0x0
		::System::Linq::Buffer_1<TElement> _buffer_5__1; // 0x0
		::Il2CppArray<::System::Int32>* _map_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
	};
}
