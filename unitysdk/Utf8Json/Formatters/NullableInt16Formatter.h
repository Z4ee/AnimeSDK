#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FAB27E0)
#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAB26C0)
#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FAB26F0)
#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAB2660)
#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB2880)
#define UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB2870)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableInt16Formatter_TypeDefinitionIndex = 95272;

	class NullableInt16Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableInt16Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableInt16Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableInt16Formatter_TypeDefinitionIndex)->GetStaticField(0x52FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Int16> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Int16>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Int16> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Int16> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Int16>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Int16> DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
