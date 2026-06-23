#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B84D0)
#define UTF8JSON_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B83F0)
#define UTF8JSON_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B82E0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int TimeSpanFormatter_TypeDefinitionIndex = 91307;

	class TimeSpanFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::TimeSpan value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::TimeSpan, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::TimeSpan Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
