#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Formatters { class DynamicObjectTypeFallbackFormatter_SerializeMethod; }
namespace Utf8Json::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C479AC0)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C479370)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C479300)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex = 85746;

	class DynamicObjectTypeFallbackFormatter : public ::System::Object
	{
	public:
		::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* innerResolvers; // 0x10
		::Utf8Json::Internal::ThreadsafeTypeKeyHashTable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::Utf8Json::Formatters::DynamicObjectTypeFallbackFormatter_SerializeMethod*>>* serializers; // 0x18

		::System::Void _ctor(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* innerResolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET))(this, innerResolvers);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Object* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
