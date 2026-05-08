#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_3.h"

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int GenericDictionaryFormatter_3_TypeDefinitionIndex = 85740;

	template <typename TKey, typename TValue, typename TDictionary>
	class GenericDictionaryFormatter_3 : public ::Utf8Json::Formatters::DictionaryFormatterBase_3<TKey, TValue, TDictionary>
	{
	public:
	};
}
