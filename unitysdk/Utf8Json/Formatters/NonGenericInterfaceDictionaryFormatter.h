#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections { class IDictionary; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E50BE30)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E50B570)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50C170)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E50C160)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex = 91319;

	class NonGenericInterfaceDictionaryFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Collections::IDictionary*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Collections::IDictionary*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex)->GetStaticField(0x4F200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Collections::IDictionary* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Collections::IDictionary*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Collections::IDictionary* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
