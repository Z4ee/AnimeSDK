#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int KeyValuePairFormatter_2_TypeDefinitionIndex = 85805;

	template <typename TKey, typename TValue>
	class KeyValuePairFormatter_2 : public ::System::Object
	{
	public:
	};
}
