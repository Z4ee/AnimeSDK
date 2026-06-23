#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int SortedListFormatter_2_TypeDefinitionIndex = 91316;

	template <typename TKey, typename TValue>
	class SortedListFormatter_2 : public ::Utf8Json::Formatters::DictionaryFormatterBase_3<TKey, TValue, ::System::Collections::Generic::SortedList_2<TKey, TValue>*>
	{
	public:
	};
}
