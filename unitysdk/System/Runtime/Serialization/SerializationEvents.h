#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BE2F520)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BE31FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BE31820)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1BE31D90)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BE2F7B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BE2FA70)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BE31DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE31CB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEvents_TypeDefinitionIndex = 1126;

	class SerializationEvents : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializingMethods; // 0x10
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializingMethods; // 0x18
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializedMethods; // 0x20
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializedMethods; // 0x28

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethodsWithAttribute(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasOnSerializingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET))(this);
		}

		::System::Void InvokeOnSerializing(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeOnDeserializing(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeOnDeserialized(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::System::Object* a1, ::System::Runtime::Serialization::SerializationEventHandler* a2)
		{
			return ((::System::Runtime::Serialization::SerializationEventHandler*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::System::Object* a1, ::System::Runtime::Serialization::SerializationEventHandler* a2)
		{
			return ((::System::Runtime::Serialization::SerializationEventHandler*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET))(this, a1, a2);
		}
	};
}
