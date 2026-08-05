#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class Version; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBCDAD0)
#define UTF8JSON_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBCD9F0)
#define UTF8JSON_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBCDBC0)
#define UTF8JSON_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBCDBB0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 95311;

	class VersionFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Version*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Version*>**)Il2CppClass::FromTypeDefinitionIndex(VersionFormatter_TypeDefinitionIndex)->GetStaticField(0x53100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Version* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Version*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Version* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Version*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
