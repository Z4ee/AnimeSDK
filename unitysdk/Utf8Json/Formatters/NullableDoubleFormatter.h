#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FB95D30)
#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB95B40)
#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FB95B90)
#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB95A50)
#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB95DB0)
#define UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB95DA0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableDoubleFormatter_TypeDefinitionIndex = 95295;

	class NullableDoubleFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableDoubleFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableDoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableDoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x53070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Double> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Double>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Double> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::Double> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::Double>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::Double> DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
