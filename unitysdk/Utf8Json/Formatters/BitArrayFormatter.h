#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System::Collections { class BitArray; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5674F0)
#define UTF8JSON_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5673B0)
#define UTF8JSON_FORMATTERS_BITARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567720)
#define UTF8JSON_FORMATTERS_BITARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E567710)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int BitArrayFormatter_TypeDefinitionIndex = 91381;

	class BitArrayFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Collections::BitArray*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Collections::BitArray*>**)Il2CppClass::FromTypeDefinitionIndex(BitArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x4EF70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BITARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BITARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Collections::BitArray* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Collections::BitArray*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Collections::BitArray* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Collections::BitArray*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
