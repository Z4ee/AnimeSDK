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

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1B935A10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x1B9358D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET UNITYSDK_OFFSET(0x1B9357A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1B935EA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1B935E40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET UNITYSDK_OFFSET(0x1B935F70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x1B9359F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1B935E20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x1B935E30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B935DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x1B935DD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x1B935F30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x1B935810)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B935F10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET UNITYSDK_OFFSET(0x1B935F20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x1B935DE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET UNITYSDK_OFFSET(0x1B935790)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B935DA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1B9358B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x1B935700)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x1B935CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B935DC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x1B935F50)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x1B935E10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1B935AB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET UNITYSDK_OFFSET(0x1B935820)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9354F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B9353C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B935360)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolder_TypeDefinitionIndex = 1149;

	class ObjectHolder : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate; // 0x10
		::System::Object* m_object; // 0x18
		::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup; // 0x20
		::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad; // 0x28
		::System::Runtime::Serialization::FixupHolderList* m_missingElements; // 0x30
		::System::Runtime::Serialization::LongList* m_dependentObjects; // 0x38
		::System::Runtime::Serialization::SerializationInfo* m_serInfo; // 0x40
		::System::Runtime::Serialization::ObjectHolder* m_next; // 0x48
		::System::Int32 m_missingElementsRemaining; // 0x50
		::System::Int32 m_flags; // 0x54
		::System::Boolean m_markForFixupWhenAvailable; // 0x58
		::System::Boolean m_reachable; // 0x59
		::System::Int32 m_missingDecendents; // 0x5C
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

		::System::Int32 get_TotalDependentObjects()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET))(this);
		}

		::System::Boolean get_TypeLoadExceptionReachable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET))(this);
		}

		::System::Void SetObjectValue(::System::Object* obj, ::System::Runtime::Serialization::ObjectManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET))(this, obj, manager);
		}

		::System::Boolean get_RequiresSerInfoFixup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET))(this);
		}

		::System::Void set_RequiresSerInfoFixup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET))(this, value);
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
