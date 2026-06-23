#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_UINT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E73E340)
#define UTF8JSON_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E73E280)
#define UTF8JSON_FORMATTERS_UINT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E73E290)
#define UTF8JSON_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E73E250)
#define UTF8JSON_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73E3C0)
#define UTF8JSON_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E73E3B0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UInt32Formatter_TypeDefinitionIndex = 91352;

	class UInt32Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::UInt32Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::UInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x4EE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::UInt32 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::UInt32, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::UInt32 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::UInt32(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::UInt32 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::UInt32, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::UInt32 DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::UInt32(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
