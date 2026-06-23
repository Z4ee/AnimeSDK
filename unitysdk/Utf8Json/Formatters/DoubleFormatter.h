#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E3135E0)
#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3133B0)
#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E3134D0)
#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E313330)
#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3137C0)
#define UTF8JSON_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3137B0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DoubleFormatter_TypeDefinitionIndex = 91361;

	class DoubleFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::DoubleFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::DoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x4E6A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Double value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Double, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Double Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Double(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Double value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Double, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Double DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Double(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
