#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Queue_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromQueue_1_TypeDefinitionIndex = 6357;

	template <typename T>
	struct FromQueue_1
	{
		::System::Collections::Generic::Queue_1<T>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Collections::Generic::Queue_1_Enumerator<T> enumerator; // 0x0
	};
}
