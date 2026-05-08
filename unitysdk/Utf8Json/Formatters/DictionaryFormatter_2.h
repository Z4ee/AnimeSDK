#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_5.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DictionaryFormatter_2_TypeDefinitionIndex = 85739;

	template <typename TKey, typename TValue>
	class DictionaryFormatter_2 : public ::Utf8Json::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::Generic::Dictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
	{
	public:
	};
}
