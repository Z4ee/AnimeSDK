#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections { class IList; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F959B30)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F959630)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F959D60)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F959D50)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceListFormatter_TypeDefinitionIndex = 95232;

	class NonGenericInterfaceListFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Collections::IList*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Collections::IList*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceListFormatter_TypeDefinitionIndex)->GetStaticField(0x53310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Collections::IList* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Collections::IList*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Collections::IList* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
