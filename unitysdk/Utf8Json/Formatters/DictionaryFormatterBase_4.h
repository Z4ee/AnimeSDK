#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/Utf8Json/Formatters/DictionaryFormatterBase_5.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DictionaryFormatterBase_4_TypeDefinitionIndex = 95244;

	template <typename TKey, typename TValue, typename TIntermediate, typename TDictionary>
	class DictionaryFormatterBase_4 : public ::Utf8Json::Formatters::DictionaryFormatterBase_5<TKey, TValue, TIntermediate, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, TDictionary>
	{
	public:
	};
}
