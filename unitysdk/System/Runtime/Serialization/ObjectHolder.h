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

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x187C6D10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x187C6AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET UNITYSDK_OFFSET(0x187C6920)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x187C7210)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x187C71B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET UNITYSDK_OFFSET(0x187C7BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x187C6BE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x187C7B30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DIRECTLYDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x187C7270)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x187C7190)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x187C71A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x187C7120)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x187C72E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x187C7290)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x187C7140)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x187C7B50)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x187C6990)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x187C7B00)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET UNITYSDK_OFFSET(0x187C7B20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x187C7280)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET UNITYSDK_OFFSET(0x187C72B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x187C72C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUEFIXUP_OFFSET UNITYSDK_OFFSET(0x187C7B90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x187C7150)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET UNITYSDK_OFFSET(0x187C6910)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET UNITYSDK_OFFSET(0x187C7110)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x187C6A30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x187C6860)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x187C7060)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x187C7B40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x187C7130)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x187C72A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x187C7B70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x187C7B10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x187C72D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x187C7180)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x187C6DA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET UNITYSDK_OFFSET(0x187C69A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187C6510)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x187C63D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187C6360)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolder_TypeDefinitionIndex = 1101;

	class ObjectHolder : public ::System::Object
	{
	public:
		::System::Object* m_object; // 0x10
		::System::Runtime::Serialization::FixupHolderList* m_missingElements; // 0x18
		::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate; // 0x20
		::System::Runtime::Serialization::ObjectHolder* m_next; // 0x28
		::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad; // 0x30
		::System::Runtime::Serialization::SerializationInfo* m_serInfo; // 0x38
		::System::Runtime::Serialization::LongList* m_dependentObjects; // 0x40
		::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup; // 0x48
		::System::Boolean m_markForFixupWhenAvailable; // 0x50
		::System::Boolean m_reachable; // 0x51
		::System::Int32 m_flags; // 0x54
		::System::Int32 m_missingDecendents; // 0x58
		::System::Int32 m_missingElementsRemaining; // 0x5C
		::System::Int64 m_id; // 0x60

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::Int64 a2, ::System::Runtime::Serialization::SerializationInfo* a3, ::System::Runtime::Serialization::ISerializationSurrogate* a4, ::System::Int64 a5, ::System::Reflection::FieldInfo* a6, ::Il2CppArray<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Int64 a2, ::System::Runtime::Serialization::SerializationInfo* a3, ::System::Runtime::Serialization::ISerializationSurrogate* a4, ::System::Int64 a5, ::System::Reflection::FieldInfo* a6, ::Il2CppArray<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void IncrementDescendentFixups(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET))(this, a1);
		}

		::System::Void DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET))(this, a1);
		}

		::System::Void RemoveDependency(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET))(this, a1);
		}

		::System::Void AddFixup(::System::Runtime::Serialization::FixupHolder* a1, ::System::Runtime::Serialization::ObjectManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDescendentDependencyChain(::System::Int32 a1, ::System::Runtime::Serialization::ObjectManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET))(this, a1, a2);
		}

		::System::Void AddDependency(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET))(this, a1);
		}

		::System::Void UpdateData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::ISerializationSurrogate* a3, ::System::Int64 a4, ::System::Reflection::FieldInfo* a5, ::Il2CppArray<::System::Int32>* a6, ::System::Runtime::Serialization::ObjectManager* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

		::System::Void set_IsIncompleteObjectReference(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET))(this, a1);
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

		::System::Void set_ValueTypeFixupPerformed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET))(this, a1);
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

		::System::Void set_Reachable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_TypeLoadExceptionReachable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET))(this);
		}

		::System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException()
		{
			return ((::System::Runtime::Serialization::TypeLoadExceptionHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET))(this);
		}

		::System::Void set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::TypeLoadExceptionHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET))(this, a1);
		}

		::System::Object* get_ObjectValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET))(this);
		}

		::System::Void SetObjectValue(::System::Object* a1, ::System::Runtime::Serialization::ObjectManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::ObjectManager*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Serialization::SerializationInfo* get_SerializationInfo()
		{
			return ((::System::Runtime::Serialization::SerializationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET))(this);
		}

		::System::Void set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate()
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET))(this);
		}

		::System::Runtime::Serialization::LongList* get_DependentObjects()
		{
			return ((::System::Runtime::Serialization::LongList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET))(this);
		}

		::System::Void set_DependentObjects(::System::Runtime::Serialization::LongList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::LongList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET))(this, a1);
		}

		::System::Boolean get_RequiresSerInfoFixup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET))(this);
		}

		::System::Void set_RequiresSerInfoFixup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET))(this, a1);
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
