#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromDictionary_2_TypeDefinitionIndex = 6355;

	template <typename TKey, typename TValue>
	struct FromDictionary_2
	{
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TKey, TValue> enumerator; // 0x0
	};
}
