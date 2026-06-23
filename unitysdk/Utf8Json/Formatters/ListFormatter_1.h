#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/CollectionDeserializeToBehaviour.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ListFormatter_1_TypeDefinitionIndex = 91279;

	template <typename T>
	class ListFormatter_1 : public ::System::Object
	{
	public:
		::Utf8Json::CollectionDeserializeToBehaviour deserializeToBehaviour; // 0x0
	};
}
