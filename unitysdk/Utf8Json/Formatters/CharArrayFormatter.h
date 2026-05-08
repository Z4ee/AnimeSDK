#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE25710)
#define UTF8JSON_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE25450)
#define UTF8JSON_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE25940)
#define UTF8JSON_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE25930)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int CharArrayFormatter_TypeDefinitionIndex = 85800;

	class CharArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::CharArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::CharArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4A8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Char>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Char>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Char>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
