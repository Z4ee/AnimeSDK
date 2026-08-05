#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA184A0)
#define UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA18470)
#define UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA18460)
#define UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA18450)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DateTimeOffsetFormatter_TypeDefinitionIndex = 95237;

	class DateTimeOffsetFormatter : public ::System::Object
	{
	public:
		::System::String* formatString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* formatString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_1_OFFSET))(this, formatString);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::DateTimeOffset value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::DateTimeOffset, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::DateTimeOffset Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
