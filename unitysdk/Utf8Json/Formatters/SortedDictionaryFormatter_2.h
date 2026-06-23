#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_5.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int SortedDictionaryFormatter_2_TypeDefinitionIndex = 91317;

	template <typename TKey, typename TValue>
	class SortedDictionaryFormatter_2 : public ::Utf8Json::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*, ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
