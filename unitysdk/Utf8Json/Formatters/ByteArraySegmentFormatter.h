#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E73CAA0)
#define UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E73CA60)
#define UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73CB20)
#define UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E73CB10)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ByteArraySegmentFormatter_TypeDefinitionIndex = 91369;

	class ByteArraySegmentFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::ArraySegment_1<::System::Byte>>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::ArraySegment_1<::System::Byte>>**)Il2CppClass::FromTypeDefinitionIndex(ByteArraySegmentFormatter_TypeDefinitionIndex)->GetStaticField(0x4F010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::ArraySegment_1<::System::Byte> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::ArraySegment_1<::System::Byte>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::ArraySegment_1<::System::Byte> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
