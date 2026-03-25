#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class FieldInfo; }
namespace System::Runtime::Serialization { class FixupHolder; }
namespace System::Runtime::Serialization { class FixupHolderList; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class LongList; }
namespace System::Runtime::Serialization { class ObjectManager; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization { class TypeLoadExceptionHolder; }
namespace System::Runtime::Serialization { class ValueTypeFixupInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x163EBC20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x163EB9C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET UNITYSDK_OFFSET(0x163EB890)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x163EC0E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x163EC080)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET UNITYSDK_OFFSET(0x163ECAC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x163EBAE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x163ECA50)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DIRECTLYDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x163EC150)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x163EC060)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x163EC070)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x163EBFF0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x163EC1C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x163EC170)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x163EC010)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x163ECA70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x163EB900)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x163ECA20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET UNITYSDK_OFFSET(0x163ECA40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x163EC160)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET UNITYSDK_OFFSET(0x163EC190)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x163EC1A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUEFIXUP_OFFSET UNITYSDK_OFFSET(0x163ECAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x163EC020)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET UNITYSDK_OFFSET(0x163EB880)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET UNITYSDK_OFFSET(0x163EBFE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x163EB9A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x163EB7F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x163EBF30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x163ECA60)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x163EC000)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x163EC180)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x163ECA90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x163ECA30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x163EC1B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x163EC050)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x163EBCB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET UNITYSDK_OFFSET(0x163EB910)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163EB4C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163EB380)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x163EB300)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolder_TypeDefinitionIndex = 1100;

	class ObjectHolder : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate; // 0x10
		::System::Runtime::Serialization::SerializationInfo* m_serInfo; // 0x18
		::System::Runtime::Serialization::LongList* m_dependentObjects; // 0x20
		::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad; // 0x28
		::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup; // 0x30
		::System::Runtime::Serialization::ObjectHolder* m_next; // 0x38
		::System::Runtime::Serialization::FixupHolderList* m_missingElements; // 0x40
		::System::Object* m_object; // 0x48
		::System::Int32 m_flags; // 0x50
		::System::Boolean m_markForFixupWhenAvailable; // 0x54
		::System::Boolean m_reachable; // 0x55
		::System::Int32 m_missingDecendents; // 0x58
		::System::Int32 m_missingElementsRemaining; // 0x5C
		::System::Int64 m_id; // 0x60

		::System::Void _ctor(::System::Int64 objID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_OFFSET))(this, objID);
		}

		::System::Void _ctor_1(::System::Object* obj, ::System::Int64 objID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, ::System::Int64 idOfContainingObj, ::System::Reflection::FieldInfo* field, ::Il2CppArray<::System::Int32>* arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_1_OFFSET))(this, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
		}

		::System::Void _ctor_2(::System::String* obj, ::System::Int64 objID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, ::System::Int64 idOfContainingObj, ::System::Reflection::FieldInfo* field, ::Il2CppArray<::System::Int32>* arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_2_OFFSET))(this, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
		}

		::System::Void IncrementDescendentFixups(::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET))(this, amount);
		}

		::System::Void DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET))(this, manager);
		}

		::System::Void RemoveDependency(::System::Int64 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET))(this, id);
		}

		::System::Void AddFixup(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET))(this, fixup, manager);
		}

		::System::Void UpdateDescendentDependencyChain(::System::Int32 amount, ::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET))(this, amount, manager);
		}

		::System::Void AddDependency(::System::Int64 dependentObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET))(this, dependentObject);
		}

		::System::Void UpdateData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, ::System::Int64 idOfContainer, ::System::Reflection::FieldInfo* field, ::Il2CppArray<::System::Int32>* arrayIndex, ::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET))(this, obj, info, surrogate, idOfContainer, field, arrayIndex, manager);
		}

		::System::Void MarkForCompletionWhenAvailable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET))(this);
		}

		::System::Void SetFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET))(this);
		}

		::System::Boolean get_IsIncompleteObjectReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsIncompleteObjectReference(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET))(this, value);
		}

		::System::Boolean get_RequiresDelayedFixup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET))(this);
		}

		::System::Boolean get_RequiresValueTypeFixup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET))(this);
		}

		::System::Boolean get_ValueTypeFixupPerformed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET))(this);
		}

		::System::Void set_ValueTypeFixupPerformed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET))(this, value);
		}

		::System::Boolean get_HasISerializable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET))(this);
		}

		::System::Boolean get_HasSurrogate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET))(this);
		}

		::System::Boolean get_CanSurrogatedObjectValueChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET))(this);
		}

		::System::Boolean get_CanObjectValueChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET))(this);
		}

		::System::Int32 get_DirectlyDependentObjects()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DIRECTLYDEPENDENTOBJECTS_OFFSET))(this);
		}

		::System::Int32 get_TotalDependentObjects()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET))(this);
		}

		::System::Boolean get_Reachable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REACHABLE_OFFSET))(this);
		}

		::System::Void set_Reachable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET))(this, value);
		}

		::System::Boolean get_TypeLoadExceptionReachable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET))(this);
		}

		::System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException()
		{
			return ((::System::Runtime::Serialization::TypeLoadExceptionHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET))(this);
		}

		::System::Void set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::TypeLoadExceptionHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET))(this, value);
		}

		::System::Object* get_ObjectValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET))(this);
		}

		::System::Void SetObjectValue(::System::Object* obj, ::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET))(this, obj, manager);
		}

		::System::Runtime::Serialization::SerializationInfo* get_SerializationInfo()
		{
			return ((::System::Runtime::Serialization::SerializationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET))(this);
		}

		::System::Void set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate()
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET))(this);
		}

		::System::Runtime::Serialization::LongList* get_DependentObjects()
		{
			return ((::System::Runtime::Serialization::LongList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET))(this);
		}

		::System::Void set_DependentObjects(::System::Runtime::Serialization::LongList* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::LongList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET))(this, value);
		}

		::System::Boolean get_RequiresSerInfoFixup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET))(this);
		}

		::System::Void set_RequiresSerInfoFixup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup()
		{
			return ((::System::Runtime::Serialization::ValueTypeFixupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUEFIXUP_OFFSET))(this);
		}

		::System::Boolean get_CompletelyFixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET))(this);
		}

		::System::Int64 get_ContainerID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET))(this);
		}
	};
}
