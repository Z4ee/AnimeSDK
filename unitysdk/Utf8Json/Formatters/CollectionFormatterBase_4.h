#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/CollectionDeserializeToBehaviour.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int CollectionFormatterBase_4_TypeDefinitionIndex = 91280;

	template <typename TElement, typename TIntermediate, typename TEnumerator, typename TCollection>
	class CollectionFormatterBase_4 : public ::System::Object
	{
	public:
	};
}
