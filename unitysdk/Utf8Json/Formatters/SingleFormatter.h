#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_SINGLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F911370)
#define UTF8JSON_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F911250)
#define UTF8JSON_FORMATTERS_SINGLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F911260)
#define UTF8JSON_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F9111D0)
#define UTF8JSON_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9113B0)
#define UTF8JSON_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9113A0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int SingleFormatter_TypeDefinitionIndex = 95291;

	class SingleFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::SingleFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::SingleFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleFormatter_TypeDefinitionIndex)->GetStaticField(0x53020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Single value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Single, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Single Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Single(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Single value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Single, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Single DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Single(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
