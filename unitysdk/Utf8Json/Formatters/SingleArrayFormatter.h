#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E855F70)
#define UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E855D10)
#define UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E856100)
#define UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8560F0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int SingleArrayFormatter_TypeDefinitionIndex = 91360;

	class SingleArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::SingleArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::SingleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4EFE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Single>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Single>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Single>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
