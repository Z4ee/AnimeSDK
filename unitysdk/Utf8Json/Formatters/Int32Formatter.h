#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_INT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FA18BC0)
#define UTF8JSON_FORMATTERS_INT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA18B00)
#define UTF8JSON_FORMATTERS_INT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FA18B10)
#define UTF8JSON_FORMATTERS_INT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA18AD0)
#define UTF8JSON_FORMATTERS_INT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA18C40)
#define UTF8JSON_FORMATTERS_INT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA18C30)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int Int32Formatter_TypeDefinitionIndex = 95274;

	class Int32Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::Int32Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::Int32Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int32Formatter_TypeDefinitionIndex)->GetStaticField(0x52E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Int32 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Int32, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Int32 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Int32(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Int32 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Int32, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Int32 DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Int32(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
