#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Text { class StringBuilder; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C21C6F0)
#define UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C21C6B0)
#define UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C21C790)
#define UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C21C780)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int StringBuilderFormatter_TypeDefinitionIndex = 85806;

	class StringBuilderFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Text::StringBuilder*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderFormatter_TypeDefinitionIndex)->GetStaticField(0x4A810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Text::StringBuilder* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Text::StringBuilder*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Text::StringBuilder* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
