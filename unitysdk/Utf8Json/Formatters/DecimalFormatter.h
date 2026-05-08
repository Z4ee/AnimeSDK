#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C521F10)
#define UTF8JSON_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C521DD0)
#define UTF8JSON_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C522130)
#define UTF8JSON_FORMATTERS_DECIMALFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C521DC0)
#define UTF8JSON_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C521DB0)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DecimalFormatter_TypeDefinitionIndex = 85802;

	class DecimalFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Decimal>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Decimal>**)Il2CppClass::FromTypeDefinitionIndex(DecimalFormatter_TypeDefinitionIndex)->GetStaticField(0x4A7D0);
		}
		::System::Boolean serializeAsString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean serializeAsString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DECIMALFORMATTER__CTOR_1_OFFSET))(this, serializeAsString);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Decimal value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Decimal, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Decimal Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Decimal(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
