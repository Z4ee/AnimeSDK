#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F5A2720)
#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5A2670)
#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F5A2680)
#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5A2660)
#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5A2760)
#define UTF8JSON_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A2750)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int BooleanFormatter_TypeDefinitionIndex = 95297;

	class BooleanFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::BooleanFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::BooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x53030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Boolean value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Boolean, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Boolean Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Boolean value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Boolean, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Boolean DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
