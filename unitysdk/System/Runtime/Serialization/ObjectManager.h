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

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x1E44BAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E44F4A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E44F510)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E44C2A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E44D2D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET UNITYSDK_OFFSET(0x1E44E580)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET UNITYSDK_OFFSET(0x1E44CAC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44C490)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x1E44B920)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x1E44B9A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET UNITYSDK_OFFSET(0x1E44BFC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET UNITYSDK_OFFSET(0x1E44BBD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E44E4B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1E44DB70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E44B890)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E44F090)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E44F5B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET UNITYSDK_OFFSET(0x1E44F650)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44EF90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44EE90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44ECA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44EB20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x1E44DDC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET UNITYSDK_OFFSET(0x1E44DCB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E44D040)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E44B830)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectManager_TypeDefinitionIndex = 1148;

	class ObjectManager : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ISurrogateSelector* m_selector; // 0x10
		::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler; // 0x18
		::System::Object* m_topObject; // 0x20
		::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler; // 0x28
		::System::Runtime::Serialization::StreamingContext m_context; // 0x30
		::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects; // 0x40
		::Il2CppArray<::System::Runtime::Serialization::ObjectHolder*>* m_objects; // 0x48
		::System::Int64 m_fixupCount; // 0x50

		::System::Void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean checkSecurity, ::System::Boolean isCrossAppDomain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER__CTOR_OFFSET))(this, selector, context, checkSecurity, isCrossAppDomain);
		}

		::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects()
		{
			return ((::System::Runtime::Serialization::ObjectHolderList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET))(this);
		}

		::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(::System::Int64 objectID)
		{
			return ((::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET))(this, objectID);
		}

		::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(::System::Int64 objectID)
		{
			return ((::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET))(this, objectID);
		}

		::System::Void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* holder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET))(this, holder);
		}

		::System::Boolean GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Runtime::Serialization::ObjectHolder*& holder, ::System::Object*& member, ::System::Boolean bThrowIfMissing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectHolder*&, ::System::Object*&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET))(this, fixup, holder, member, bThrowIfMissing);
		}

		::System::Void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* holder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET))(this, holder);
		}

		::System::Boolean ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* holder)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET))(this, holder);
		}

		::System::Boolean DoValueTypeFixup(::System::Reflection::FieldInfo* memberToFix, ::System::Runtime::Serialization::ObjectHolder* holder, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::Runtime::Serialization::ObjectHolder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET))(this, memberToFix, holder, value);
		}

		::System::Void CompleteObject(::System::Runtime::Serialization::ObjectHolder* holder, ::System::Boolean bObjectFullyComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET))(this, holder, bObjectFullyComplete);
		}

		::System::Void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* holder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET))(this, holder);
		}

		::System::Object* GetObject(::System::Int64 objectID)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET))(this, objectID);
		}

		::System::Void RegisterString(::System::String* obj, ::System::Int64 objectID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Int64 idOfContainingObj, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET))(this, obj, objectID, info, idOfContainingObj, member);
		}

		::System::Void RegisterObject(::System::Object* obj, ::System::Int64 objectID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Int64 idOfContainingObj, ::System::Reflection::MemberInfo* member, ::Il2CppArray<::System::Int32>* arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET))(this, obj, objectID, info, idOfContainingObj, member, arrayIndex);
		}

		::System::Void CompleteISerializableObject(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET))(this, obj, info, context);
		}

		static ::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* t)
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET))(t);
		}

		::System::Void DoFixups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET))(this);
		}

		::System::Void RegisterFixup(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Int64 objectToBeFixed, ::System::Int64 objectRequired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET))(this, fixup, objectToBeFixed, objectRequired);
		}

		::System::Void RecordFixup(::System::Int64 objectToBeFixed, ::System::Reflection::MemberInfo* member, ::System::Int64 objectRequired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Reflection::MemberInfo*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET))(this, objectToBeFixed, member, objectRequired);
		}

		::System::Void RecordDelayedFixup(::System::Int64 objectToBeFixed, ::System::String* memberName, ::System::Int64 objectRequired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET))(this, objectToBeFixed, memberName, objectRequired);
		}

		::System::Void RecordArrayElementFixup(::System::Int64 arrayToBeFixed, ::Il2CppArray<::System::Int32>* indices, ::System::Int64 objectRequired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Int32>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET))(this, arrayToBeFixed, indices, objectRequired);
		}

		::System::Void RaiseDeserializationEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET))(this);
		}

		::System::Void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::DeserializationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET))(this, handler);
		}

		::System::Void AddOnDeserialized(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET))(this, obj);
		}

		::System::Void RaiseOnDeserializedEvent(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET))(this, obj);
		}

		::System::Void RaiseOnDeserializingEvent(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET))(this, obj);
		}
	};
}
