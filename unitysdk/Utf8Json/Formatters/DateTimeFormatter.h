#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7170)
#define UTF8JSON_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B70F0)
#define UTF8JSON_FORMATTERS_DATETIMEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B70E0)
#define UTF8JSON_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B70D0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DateTimeFormatter_TypeDefinitionIndex = 91300;

	class DateTimeFormatter : public ::System::Object
	{
	public:
		::System::String* formatString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* formatString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEFORMATTER__CTOR_1_OFFSET))(this, formatString);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::DateTime value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::DateTime, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::DateTime Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::DateTime(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
