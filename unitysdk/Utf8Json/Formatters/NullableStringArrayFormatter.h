#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E314500)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E314380)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E314900)
#define UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3148F0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableStringArrayFormatter_TypeDefinitionIndex = 91371;

	class NullableStringArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableStringArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableStringArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableStringArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4E6E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::String*>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::String*>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::String*>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
