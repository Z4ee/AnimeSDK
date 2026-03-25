#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x163F5D10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x163F5DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x163F5B50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x163F5A90)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationObjectManager_TypeDefinitionIndex = 1123;

	class SerializationObjectManager : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::StreamingContext m_context; // 0x10
		::System::Collections::Hashtable* m_objectSeenTable; // 0x20
		::System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler; // 0x28

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET))(this, context);
		}

		::System::Void RegisterObject(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET))(this, obj);
		}

		::System::Void RaiseOnSerializedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET))(this);
		}

		::System::Void AddOnSerialized(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET))(this, obj);
		}
	};
}
