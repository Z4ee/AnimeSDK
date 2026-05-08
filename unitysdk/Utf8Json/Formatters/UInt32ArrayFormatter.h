#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C42B430)
#define UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C42B280)
#define UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42B5C0)
#define UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42B5B0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UInt32ArrayFormatter_TypeDefinitionIndex = 85780;

	class UInt32ArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::UInt32ArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::UInt32ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt32ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4A870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::UInt32>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::UInt32>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::UInt32>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
