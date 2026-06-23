#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Resolvers::Internal { template <typename T> class AnonymousJsonDeserializeFunc_1; }
namespace Utf8Json::Resolvers::Internal { template <typename T> class AnonymousJsonSerializeAction_1; }

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicMethodAnonymousFormatter_1_TypeDefinitionIndex = 91167;

	template <typename T>
	class DynamicMethodAnonymousFormatter_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* stringByteKeysField; // 0x0
		::Il2CppArray<::System::Object*>* serializeCustomFormatters; // 0x0
		::Il2CppArray<::System::Object*>* deserializeCustomFormatters; // 0x0
		::Utf8Json::Resolvers::Internal::AnonymousJsonSerializeAction_1<T>* serialize; // 0x0
		::Utf8Json::Resolvers::Internal::AnonymousJsonDeserializeFunc_1<T>* deserialize; // 0x0
	};
}
