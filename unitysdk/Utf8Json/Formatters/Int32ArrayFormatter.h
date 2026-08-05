#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB45330)
#define UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB45180)
#define UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB45530)
#define UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB45520)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int Int32ArrayFormatter_TypeDefinitionIndex = 95276;

	class Int32ArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::Int32ArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::Int32ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int32ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x53150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Int32>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Int32>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Int32>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
