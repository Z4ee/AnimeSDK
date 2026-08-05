#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class SerializationInfoEnumerator; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C32E710)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_10_OFFSET UNITYSDK_OFFSET(0x1C32ECE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_1_OFFSET UNITYSDK_OFFSET(0x1C319930)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_2_OFFSET UNITYSDK_OFFSET(0x1C328AB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_3_OFFSET UNITYSDK_OFFSET(0x1C32E9A0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_4_OFFSET UNITYSDK_OFFSET(0x1C32EA10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_5_OFFSET UNITYSDK_OFFSET(0x1C32EAA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_6_OFFSET UNITYSDK_OFFSET(0x1C3199A0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_7_OFFSET UNITYSDK_OFFSET(0x1C32EB30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_8_OFFSET UNITYSDK_OFFSET(0x1C32EBC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_9_OFFSET UNITYSDK_OFFSET(0x1C32EC50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1C319870)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C32DDD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET UNITYSDK_OFFSET(0x1C32DDC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET UNITYSDK_OFFSET(0x1C32E640)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C32EEB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1C32F130)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET UNITYSDK_OFFSET(0x1C32F0B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1C32EFA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3283E0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET UNITYSDK_OFFSET(0x1C318260)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET UNITYSDK_OFFSET(0x1C32F2D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x1C32F470)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C317DD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET UNITYSDK_OFFSET(0x1C317F20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C318060)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C32E630)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET UNITYSDK_OFFSET(0x1C32DE30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1C328950)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1C32ED50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C32DBF0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32DBE0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationInfo_TypeDefinitionIndex = 1169;

	class SerializationInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* m_members; // 0x10
		::Il2CppArray<::System::Object*>* m_data; // 0x18
		::System::Type* objectType; // 0x20
		::Il2CppArray<::System::Type*>* m_types; // 0x28
		::System::String* m_fullTypeName; // 0x30
		::System::Runtime::Serialization::IFormatterConverter* m_converter; // 0x38
		::System::String* m_assemName; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_nameToIndex; // 0x48
		::System::Boolean requireSameTokenInPartialTrust; // 0x50
		::System::Boolean isAssemblyNameSetExplicit; // 0x51
		::System::Boolean isFullTypeNameSetExplicit; // 0x52
		::System::Int32 m_currMember; // 0x54

		::System::Void _ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_OFFSET))(this, type, converter);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Boolean requireSameTokenInPartialTrust)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_1_OFFSET))(this, type, converter, requireSameTokenInPartialTrust);
		}

		::System::Void SetType(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET))(this, type);
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* a, ::Il2CppArray<::System::Byte>* b)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET))(a, b);
		}

		static ::System::Void DemandForUnsafeAssemblyNameAssignments(::System::String* originalAssemblyName, ::System::String* newAssemblyName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET))(originalAssemblyName, newAssemblyName);
		}

		static ::System::Boolean IsAssemblyNameAssignmentSafe(::System::String* originalAssemblyName, ::System::String* newAssemblyName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET))(originalAssemblyName, newAssemblyName);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator()
		{
			return ((::System::Runtime::Serialization::SerializationInfoEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void ExpandArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET))(this);
		}

		::System::Void AddValue(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(this, name, value, type);
		}

		::System::Void AddValue_1(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_1_OFFSET))(this, name, value);
		}

		::System::Void AddValue_2(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_2_OFFSET))(this, name, value);
		}

		::System::Void AddValue_3(::System::String* name, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_3_OFFSET))(this, name, value);
		}

		::System::Void AddValue_4(::System::String* name, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_4_OFFSET))(this, name, value);
		}

		::System::Void AddValue_5(::System::String* name, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_5_OFFSET))(this, name, value);
		}

		::System::Void AddValue_6(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_6_OFFSET))(this, name, value);
		}

		::System::Void AddValue_7(::System::String* name, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_7_OFFSET))(this, name, value);
		}

		::System::Void AddValue_8(::System::String* name, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_8_OFFSET))(this, name, value);
		}

		::System::Void AddValue_9(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_9_OFFSET))(this, name, value);
		}

		::System::Void AddValue_10(::System::String* name, ::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_10_OFFSET))(this, name, value);
		}

		::System::Void AddValueInternal(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET))(this, name, value, type);
		}

		::System::Void UpdateValue(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET))(this, name, value, type);
		}

		::System::Int32 FindElement(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET))(this, name);
		}

		::System::Object* GetElement(::System::String* name, ::System::Type*& foundType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET))(this, name, foundType);
		}

		::System::Object* GetElementNoThrow(::System::String* name, ::System::Type*& foundType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET))(this, name, foundType);
		}

		::System::Object* GetValue(::System::String* name, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET))(this, name, type);
		}

		::System::Object* GetValueNoThrow(::System::String* name, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET))(this, name, type);
		}

		::System::Boolean GetBoolean(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET))(this, name);
		}

		::System::Int32 GetInt32(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET))(this, name);
		}

		::System::Int64 GetInt64(::System::String* name)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET))(this, name);
		}

		::System::Single GetSingle(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET))(this, name);
		}

		::System::String* GetString(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET))(this, name);
		}
	};
}
