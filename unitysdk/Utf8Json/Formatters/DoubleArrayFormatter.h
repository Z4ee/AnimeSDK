#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E6298A0)
#define UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E629640)
#define UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629A30)
#define UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E629A20)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DoubleArrayFormatter_TypeDefinitionIndex = 91363;

	class DoubleArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::DoubleArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::DoubleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4ECD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Double>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Double>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Double>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
