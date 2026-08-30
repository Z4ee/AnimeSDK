#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Runtime::Serialization { class SafeSerializationEventArgs; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ADD_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x1BE2FDB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1BE30C30)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1BE30530)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1BE30520)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BE31630)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_REMOVE_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x1BE2FE30)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1BE31290)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BE31210)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE2FEC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FEB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationManager_TypeDefinitionIndex = 1119;

	class SafeSerializationManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::Object*>* m_serializedStates; // 0x10
		::System::RuntimeType* m_realType; // 0x18
		::System::Object* m_realObject; // 0x20
		::System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo; // 0x28
		::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void add_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ADD_SERIALIZEOBJECTSTATE_OFFSET))(this, a1);
		}

		::System::Void remove_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_REMOVE_SERIALIZEOBJECTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void CompleteSerialization(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompleteDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET))(this, a1);
		}
	};
}
