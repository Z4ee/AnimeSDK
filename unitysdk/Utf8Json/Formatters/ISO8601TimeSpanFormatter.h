#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB23F00)
#define UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB239D0)
#define UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB24900)
#define UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB248F0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ISO8601TimeSpanFormatter_TypeDefinitionIndex = 95242;

	class ISO8601TimeSpanFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::TimeSpan>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(ISO8601TimeSpanFormatter_TypeDefinitionIndex)->GetStaticField(0x530B0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_minValue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ISO8601TimeSpanFormatter_TypeDefinitionIndex)->GetStaticField(0x530B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::TimeSpan value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::TimeSpan, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::TimeSpan Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ISO8601TIMESPANFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
