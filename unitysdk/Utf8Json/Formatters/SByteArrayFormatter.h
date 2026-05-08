#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C455F20)
#define UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C455D70)
#define UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4560B0)
#define UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4560A0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int SByteArrayFormatter_TypeDefinitionIndex = 85763;

	class SByteArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::SByteArrayFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::SByteArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4A110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::SByte>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::SByte>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::SByte>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
