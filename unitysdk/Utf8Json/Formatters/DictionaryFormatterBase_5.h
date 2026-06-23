#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DictionaryFormatterBase_5_TypeDefinitionIndex = 91310;

	template <typename TKey, typename TValue, typename TIntermediate, typename TEnumerator, typename TDictionary>
	class DictionaryFormatterBase_5 : public ::System::Object
	{
	public:
	};
}
