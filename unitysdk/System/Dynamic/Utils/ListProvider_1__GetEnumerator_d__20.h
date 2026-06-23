#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic::Utils { template <typename T> class ListProvider_1; }

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ListProvider_1__GetEnumerator_d__20_TypeDefinitionIndex = 5018;

	template <typename T>
	class ListProvider_1__GetEnumerator_d__20 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Dynamic::Utils::ListProvider_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__1; // 0x0
		::System::Int32 _n_5__2; // 0x0
	};
}
