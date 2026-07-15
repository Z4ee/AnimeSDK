#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyDictionary_2_DictionaryEnumerator_TypeDefinitionIndex = 1502;

	template <typename TKey, typename TValue>
	struct ReadOnlyDictionary_2_DictionaryEnumerator
	{
		::System::Collections::Generic::IDictionary_2<TKey, TValue>* m_dictionary; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* m_enumerator; // 0x0
	};
}
