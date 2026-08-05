#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_4.h"

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DictionaryFormatterBase_3_TypeDefinitionIndex = 95245;

	template <typename TKey, typename TValue, typename TDictionary>
	class DictionaryFormatterBase_3 : public ::Utf8Json::Formatters::DictionaryFormatterBase_4<TKey, TValue, TDictionary, TDictionary>
	{
	public:
	};
}
