#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Formatters { class DateTimeOffsetFormatter; }

#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E568C80)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E568BD0)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E568B80)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E568B30)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableDateTimeOffsetFormatter_TypeDefinitionIndex = 91305;

	class NullableDateTimeOffsetFormatter : public ::System::Object
	{
	public:
		::Utf8Json::Formatters::DateTimeOffsetFormatter* innerFormatter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* formatString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER__CTOR_1_OFFSET))(this, formatString);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::DateTimeOffset> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::DateTimeOffset>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::DateTimeOffset> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
