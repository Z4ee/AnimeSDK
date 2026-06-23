#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E50B3A0)
#define UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E50B220)
#define UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50B530)
#define UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E50B520)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int BooleanArrayFormatter_TypeDefinitionIndex = 91366;

	class BooleanArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::BooleanArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::BooleanArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4EFF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Boolean>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Boolean>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Boolean>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
