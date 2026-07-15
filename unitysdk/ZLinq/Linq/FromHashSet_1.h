#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromHashSet_1_TypeDefinitionIndex = 6360;

	template <typename T>
	struct FromHashSet_1
	{
		::System::Collections::Generic::HashSet_1<T>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Collections::Generic::HashSet_1_Enumerator<T> enumerator; // 0x0
	};
}
