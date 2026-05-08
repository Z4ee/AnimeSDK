#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3C3D20)
#define UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3C3BE0)
#define UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3C3DE0)
#define UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C3DD0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UnixTimestampDateTimeFormatter_TypeDefinitionIndex = 85729;

	class UnixTimestampDateTimeFormatter : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(UnixTimestampDateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x12010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::DateTime value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::DateTime, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::DateTime Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::DateTime(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UNIXTIMESTAMPDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
