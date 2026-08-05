#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C6E5D50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C6E5BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C6E5230)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1C6E55B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C6E59B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C6E57C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C6E55D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E54D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEvents_TypeDefinitionIndex = 1165;

	class SerializationEvents : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializingMethods; // 0x10
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializedMethods; // 0x18
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializedMethods; // 0x20
		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializingMethods; // 0x28

		::System::Void _ctor(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS__CTOR_OFFSET))(this, t);
		}

		::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethodsWithAttribute(::System::Type* attribute, ::System::Type* t)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET))(this, attribute, t);
		}

		::System::Boolean get_HasOnSerializingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET))(this);
		}

		::System::Void InvokeOnSerializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET))(this, obj, context);
		}

		::System::Void InvokeOnDeserializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET))(this, obj, context);
		}

		::System::Void InvokeOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET))(this, obj, context);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler)
		{
			return ((::System::Runtime::Serialization::SerializationEventHandler*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET))(this, obj, handler);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler)
		{
			return ((::System::Runtime::Serialization::SerializationEventHandler*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET))(this, obj, handler);
		}
	};
}
