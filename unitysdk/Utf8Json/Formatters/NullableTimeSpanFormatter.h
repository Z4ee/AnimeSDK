#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Formatters { class TimeSpanFormatter; }

#define UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C47A4A0)
#define UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C47A330)
#define UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47A2E0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableTimeSpanFormatter_TypeDefinitionIndex = 85734;

	class NullableTimeSpanFormatter : public ::System::Object
	{
	public:
		::Utf8Json::Formatters::TimeSpanFormatter* innerFormatter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::TimeSpan> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::TimeSpan>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::TimeSpan> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLETIMESPANFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
