#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E707CB0)
#define UTF8JSON_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E707C10)
#define UTF8JSON_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E707D40)
#define UTF8JSON_FORMATTERS_CHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E707D30)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int CharFormatter_TypeDefinitionIndex = 91372;

	class CharFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::CharFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::CharFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharFormatter_TypeDefinitionIndex)->GetStaticField(0x4E6C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Char value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Char, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Char Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Char(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
