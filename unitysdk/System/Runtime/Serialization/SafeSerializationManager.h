#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Runtime::Serialization { class SafeSerializationEventArgs; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DDE8220)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DDE8030)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1DDE8020)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1DDE8900)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1DDE86A0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DDE8620)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE7EC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE7EB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationManager_TypeDefinitionIndex = 1158;

	class SafeSerializationManager : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo; // 0x10
		::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState; // 0x18
		::System::RuntimeType* m_realType; // 0x20
		::System::Collections::Generic::IList_1<::System::Object*>* m_serializedStates; // 0x28
		::System::Object* m_realObject; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void CompleteSerialization(::System::Object* serializedObject, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET))(this, serializedObject, info, context);
		}

		::System::Void CompleteDeserialization(::System::Object* deserializedObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET))(this, deserializedObject);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET))(this, context);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET))(this, context);
		}
	};
}
