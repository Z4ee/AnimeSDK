#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA71810)
#define UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA70AD0)
#define UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA71C20)
#define UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA71C10)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int PrimitiveObjectFormatter_TypeDefinitionIndex = 95300;

	class PrimitiveObjectFormatter : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<::System::Object*>** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x53420);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_typeToJumpCode()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x53428);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Object* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
