#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1C38A720)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C38A700)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1C38A710)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C38A6F0)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C38A740)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38A730)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableStringFormatter_TypeDefinitionIndex = 85796;

	class NullableStringFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::String*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NullableStringFormatter_TypeDefinitionIndex)->GetStaticField(0x4A6D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::String* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::String*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::String* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::String*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::String* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::String*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::String* DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::String*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
