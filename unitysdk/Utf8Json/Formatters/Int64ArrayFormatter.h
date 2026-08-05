#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA18E30)
#define UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA18C80)
#define UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA19190)
#define UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19180)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int Int64ArrayFormatter_TypeDefinitionIndex = 95279;

	class Int64ArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::Int64ArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::Int64ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int64ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x52EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Int64>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Int64>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Int64>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT64ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
