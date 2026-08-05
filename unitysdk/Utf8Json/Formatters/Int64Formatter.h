#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_INT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FB70C80)
#define UTF8JSON_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB70B50)
#define UTF8JSON_FORMATTERS_INT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FB70BD0)
#define UTF8JSON_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB70B20)
#define UTF8JSON_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB70CC0)
#define UTF8JSON_FORMATTERS_INT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB70CB0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int Int64Formatter_TypeDefinitionIndex = 95277;

	class Int64Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::Int64Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::Int64Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int64Formatter_TypeDefinitionIndex)->GetStaticField(0x529E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Int64 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Int64, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Int64 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Int64(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Int64 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Int64, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Int64 DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Int64(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
