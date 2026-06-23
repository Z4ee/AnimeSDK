#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class JsonDeserializeFunc_1; }
namespace Utf8Json { template <typename T> class JsonSerializeAction_1; }
namespace Utf8Json::Internal { template <typename T> class ByteArrayStringHashTable_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int EnumFormatter_1_TypeDefinitionIndex = 91325;

	template <typename T>
	class EnumFormatter_1 : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::ByteArrayStringHashTable_1<T>** StaticGet_nameValueMapping()
		{
			return (::Utf8Json::Internal::ByteArrayStringHashTable_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EnumFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<T, ::System::String*>** StaticGet_valueNameMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<T, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnumFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Utf8Json::JsonSerializeAction_1<T>** StaticGet_defaultSerializeByUnderlyingValue()
		{
			return (::Utf8Json::JsonSerializeAction_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EnumFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Utf8Json::JsonDeserializeFunc_1<T>** StaticGet_defaultDeserializeByUnderlyingValue()
		{
			return (::Utf8Json::JsonDeserializeFunc_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EnumFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean serializeByName; // 0x0
		::Utf8Json::JsonSerializeAction_1<T>* serializeByUnderlyingValue; // 0x0
		::Utf8Json::JsonDeserializeFunc_1<T>* deserializeByUnderlyingValue; // 0x0
	};
}
