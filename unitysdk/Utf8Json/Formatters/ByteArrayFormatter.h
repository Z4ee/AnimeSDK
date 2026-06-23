#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7040)
#define UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7B6FE0)
#define UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7090)
#define UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7080)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ByteArrayFormatter_TypeDefinitionIndex = 91368;

	class ByteArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::Il2CppArray<::System::Byte>*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(ByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4EF90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::Il2CppArray<::System::Byte>* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::Il2CppArray<::System::Byte>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::Il2CppArray<::System::Byte>* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
