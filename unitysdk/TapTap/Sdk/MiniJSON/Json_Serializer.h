#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Text { class StringBuilder; }

#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1A1BD540)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1BD880)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET UNITYSDK_OFFSET(0x1A1BDD40)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1A1BD240)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1A1BD130)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1BBF40)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BD0B0)

namespace TapTap::Sdk::MiniJSON
{
	inline static constexpr unsigned int Json_Serializer_TypeDefinitionIndex = 6469;

	class Json_Serializer : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* builder; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::String* Serialize(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZE_OFFSET))(obj);
		}

		::System::Void SerializeValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET))(this, value);
		}

		::System::Void SerializeObject(::System::Collections::IDictionary* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET))(this, obj);
		}

		::System::Void SerializeArray(::System::Collections::IList* anArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET))(this, anArray);
		}

		::System::Void SerializeString(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZESTRING_OFFSET))(this, str);
		}

		::System::Void SerializeOther(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET))(this, value);
		}
	};
}
