#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class Type; }
namespace System::Text::RegularExpressions { class Regex; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_TYPEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1629C0)
#define UTF8JSON_FORMATTERS_TYPEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E162970)
#define UTF8JSON_FORMATTERS_TYPEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E162B80)
#define UTF8JSON_FORMATTERS_TYPEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E162960)
#define UTF8JSON_FORMATTERS_TYPEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E162950)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int TypeFormatter_TypeDefinitionIndex = 91382;

	class TypeFormatter : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TypeFormatter_TypeDefinitionIndex)->GetStaticField(0x4EF80);
		}
		static ::Utf8Json::Formatters::TypeFormatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::TypeFormatter**)Il2CppClass::FromTypeDefinitionIndex(TypeFormatter_TypeDefinitionIndex)->GetStaticField(0x4EF88);
		}
		::System::Boolean deserializeSubtractAssemblyQualifiedName; // 0x10
		::System::Boolean serializeAssemblyQualifiedName; // 0x11
		::System::Boolean throwOnError; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TYPEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean serializeAssemblyQualifiedName, ::System::Boolean deserializeSubtractAssemblyQualifiedName, ::System::Boolean throwOnError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TYPEFORMATTER__CTOR_1_OFFSET))(this, serializeAssemblyQualifiedName, deserializeSubtractAssemblyQualifiedName, throwOnError);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TYPEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Type* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Type*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TYPEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Type* Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Type*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_TYPEFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
