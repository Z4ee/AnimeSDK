#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E568A80)
#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E568960)
#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E5689A0)
#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E568900)
#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E568AF0)
#define UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E568AE0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableBooleanFormatter_TypeDefinitionIndex = 91365;

	class NullableBooleanFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableBooleanFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableBooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableBooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x4EED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Boolean> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Boolean>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Boolean> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Boolean> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Boolean>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Boolean> DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
