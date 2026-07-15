#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class RuntimeConstructorInfo; }
namespace System::Runtime::Serialization { class DeserializationEventHandler; }
namespace System::Runtime::Serialization { class FixupHolder; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class ObjectHolder; }
namespace System::Runtime::Serialization { class ObjectHolderList; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x18339D30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1833D5B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1833D610)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_CANCALLGETTYPE_OFFSET UNITYSDK_OFFSET(0x18339C10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1833A6A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET UNITYSDK_OFFSET(0x18338560)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET UNITYSDK_OFFSET(0x1833CAE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET UNITYSDK_OFFSET(0x1833B020)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x1833A8A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x18339CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x18337DC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET UNITYSDK_OFFSET(0x1833A2A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET UNITYSDK_OFFSET(0x18339E40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1833C770)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1833B9C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET UNITYSDK_OFFSET(0x18339C40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x18339C30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1833D530)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x1833DDA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET UNITYSDK_OFFSET(0x1833E060)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET UNITYSDK_OFFSET(0x1833D430)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x1833D330)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x1833D140)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET UNITYSDK_OFFSET(0x1833CFF0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x1833BBF0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET UNITYSDK_OFFSET(0x1833BAE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1833B460)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_SET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x18339C20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18339BB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectManager_TypeDefinitionIndex = 1102;

	class ObjectManager : public ::System::Object
	{
	public:
		::System::Object* m_topObject; // 0x10
		::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler; // 0x18
		::System::Runtime::Serialization::ISurrogateSelector* m_selector; // 0x20
		::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects; // 0x28
		::Il2CppArray<::System::Runtime::Serialization::ObjectHolder*>* m_objects; // 0x30
		::System::Runtime::Serialization::StreamingContext m_context; // 0x38
		::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler; // 0x48
		::System::Int64 m_fixupCount; // 0x50

		::System::Void _ctor(::System::Runtime::Serialization::ISurrogateSelector* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanCallGetType(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_CANCALLGETTYPE_OFFSET))(this, a1);
		}

		::System::Void set_TopObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_SET_TOPOBJECT_OFFSET))(this, a1);
		}

		::System::Object* get_TopObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_TOPOBJECT_OFFSET))(this);
		}

		::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects()
		{
			return ((::System::Runtime::Serialization::ObjectHolderList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET))(this);
		}

		::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(::System::Int64 a1)
		{
			return ((::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(::System::Int64 a1)
		{
			return ((::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET))(this, a1);
		}

		::System::Void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET))(this, a1);
		}

		::System::Boolean GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* a1, ::System::Runtime::Serialization::ObjectHolder*& a2, ::System::Object*& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectHolder*&, ::System::Object*&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET))(this, a1);
		}

		::System::Boolean DoValueTypeFixup(::System::Reflection::FieldInfo* a1, ::System::Runtime::Serialization::ObjectHolder* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::Runtime::Serialization::ObjectHolder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompleteObject(::System::Runtime::Serialization::ObjectHolder* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET))(this, a1);
		}

		::System::Object* GetObject(::System::Int64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET))(this, a1);
		}

		::System::Void RegisterString(::System::String* a1, ::System::Int64 a2, ::System::Runtime::Serialization::SerializationInfo* a3, ::System::Int64 a4, ::System::Reflection::MemberInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RegisterObject(::System::Object* a1, ::System::Int64 a2, ::System::Runtime::Serialization::SerializationInfo* a3, ::System::Int64 a4, ::System::Reflection::MemberInfo* a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CompleteISerializableObject(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* a1)
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET))(a1);
		}

		::System::Void DoFixups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET))(this);
		}

		::System::Void RegisterFixup(::System::Runtime::Serialization::FixupHolder* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecordFixup(::System::Int64 a1, ::System::Reflection::MemberInfo* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Reflection::MemberInfo*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecordDelayedFixup(::System::Int64 a1, ::System::String* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecordArrayElementFixup(::System::Int64 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Int32>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RaiseDeserializationEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET))(this);
		}

		::System::Void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::DeserializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void AddOnDeserialized(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET))(this, a1);
		}

		::System::Void RaiseOnDeserializedEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET))(this, a1);
		}

		::System::Void RaiseOnDeserializingEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET))(this, a1);
		}
	};
}
