#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F5A2F80)
#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5A2E50)
#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F5A2E90)
#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5A2DF0)
#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5A3020)
#define UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A3010)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableUInt32Formatter_TypeDefinitionIndex = 95286;

	class NullableUInt32Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableUInt32Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableUInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableUInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x53050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::UInt32> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::UInt32>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::UInt32> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::UInt32> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::UInt32>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::UInt32> DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
