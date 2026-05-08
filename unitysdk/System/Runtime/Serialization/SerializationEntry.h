#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x381840)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x28B580)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x812260)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEntry_TypeDefinitionIndex = 1171;

	struct alignas(8) SerializationEntry
	{
		::System::Type* m_type; // 0x10
		::System::Object* m_value; // 0x18
		::System::String* m_name; // 0x20

		::System::Void _ctor(::System::String* entryName, ::System::Object* entryValue, ::System::Type* entryType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY__CTOR_OFFSET))(this, entryName, entryValue, entryType);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_OBJECTTYPE_OFFSET))(this);
		}
	};
}
