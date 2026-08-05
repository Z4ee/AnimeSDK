#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections { class IEnumerable; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F7444C0)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F744040)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F744900)
#define UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7448F0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceEnumerableFormatter_TypeDefinitionIndex = 95230;

	class NonGenericInterfaceEnumerableFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Collections::IEnumerable*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Collections::IEnumerable*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceEnumerableFormatter_TypeDefinitionIndex)->GetStaticField(0x52860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Collections::IEnumerable* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Collections::IEnumerable*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Collections::IEnumerable* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
