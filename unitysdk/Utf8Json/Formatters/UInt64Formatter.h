#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_UINT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FC36E90)
#define UTF8JSON_FORMATTERS_UINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC36D60)
#define UTF8JSON_FORMATTERS_UINT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FC36DE0)
#define UTF8JSON_FORMATTERS_UINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC36D30)
#define UTF8JSON_FORMATTERS_UINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC36ED0)
#define UTF8JSON_FORMATTERS_UINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC36EC0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UInt64Formatter_TypeDefinitionIndex = 95288;

	class UInt64Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::UInt64Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::UInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x53010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::UInt64 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::UInt64, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::UInt64 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::UInt64(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::UInt64 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::UInt64, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::UInt64 DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::UInt64(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
