#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections { class ICollection; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2D8E40)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2D87B0)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2D9070)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D9060)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex = 85724;

	class NonGenericInterfaceCollectionFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Collections::ICollection*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Collections::ICollection*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex)->GetStaticField(0x4A5B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Collections::ICollection* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Collections::ICollection*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Collections::ICollection* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
