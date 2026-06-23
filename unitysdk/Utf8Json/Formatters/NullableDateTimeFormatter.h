#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Formatters { class DateTimeFormatter; }

#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7D60)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7C50)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B7C00)
#define UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7BB0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableDateTimeFormatter_TypeDefinitionIndex = 91301;

	class NullableDateTimeFormatter : public ::System::Object
	{
	public:
		::Utf8Json::Formatters::DateTimeFormatter* innerFormatter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* formatString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_1_OFFSET))(this, formatString);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::DateTime> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::DateTime>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::DateTime> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
