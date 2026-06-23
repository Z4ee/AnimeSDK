#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E314240)
#define UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3140F0)
#define UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E314340)
#define UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E314330)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableCharFormatter_TypeDefinitionIndex = 91373;

	class NullableCharFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableCharFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableCharFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableCharFormatter_TypeDefinitionIndex)->GetStaticField(0x4E6D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Char> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Char>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Char> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
