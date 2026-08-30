#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x19B9CA30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x19B9CAD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x19B9C790)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9C6D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationObjectManager_TypeDefinitionIndex = 1133;

	class SerializationObjectManager : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* m_objectSeenTable; // 0x10
		::System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler; // 0x18
		::System::Runtime::Serialization::StreamingContext m_context; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void RegisterObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET))(this, a1);
		}

		::System::Void RaiseOnSerializedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET))(this);
		}

		::System::Void AddOnSerialized(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET))(this, a1);
		}
	};
}
