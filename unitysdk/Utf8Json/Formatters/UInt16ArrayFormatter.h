#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D18E0)
#define UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D1730)
#define UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1A70)
#define UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1A60)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UInt16ArrayFormatter_TypeDefinitionIndex = 85777;

	class UInt16ArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::UInt16ArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::UInt16ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt16ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4A860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::UInt16>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::UInt16>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::UInt16>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
