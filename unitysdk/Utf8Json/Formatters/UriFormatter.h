#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class Uri; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D1B30)
#define UTF8JSON_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D1AB0)
#define UTF8JSON_FORMATTERS_URIFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1C10)
#define UTF8JSON_FORMATTERS_URIFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1C00)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int UriFormatter_TypeDefinitionIndex = 85803;

	class UriFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Uri*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Uri*>**)Il2CppClass::FromTypeDefinitionIndex(UriFormatter_TypeDefinitionIndex)->GetStaticField(0x4A7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_URIFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_URIFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Uri* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Uri*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Uri* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Uri*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
