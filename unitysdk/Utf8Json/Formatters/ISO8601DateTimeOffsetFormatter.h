#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C42A0C0)
#define UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4297E0)
#define UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42AEC0)
#define UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42AEB0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ISO8601DateTimeOffsetFormatter_TypeDefinitionIndex = 85732;

	class ISO8601DateTimeOffsetFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::DateTimeOffset>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::DateTimeOffset>**)Il2CppClass::FromTypeDefinitionIndex(ISO8601DateTimeOffsetFormatter_TypeDefinitionIndex)->GetStaticField(0x4A7C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::DateTimeOffset value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::DateTimeOffset, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::DateTimeOffset Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
