#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class JsonDeserializeFunc_1; }
namespace Utf8Json { template <typename T> class JsonSerializeAction_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int AnonymousFormatter_1_TypeDefinitionIndex = 95209;

	template <typename T>
	class AnonymousFormatter_1 : public ::System::Object
	{
	public:
		::Utf8Json::JsonSerializeAction_1<T>* serialize; // 0x0
		::Utf8Json::JsonDeserializeFunc_1<T>* deserialize; // 0x0
	};
}
