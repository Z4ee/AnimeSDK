#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class SerializationInfoEnumerator; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x187CF090)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_10_OFFSET UNITYSDK_OFFSET(0x187CF6D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_1_OFFSET UNITYSDK_OFFSET(0x187CF360)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_2_OFFSET UNITYSDK_OFFSET(0x187CF3D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_3_OFFSET UNITYSDK_OFFSET(0x187CF430)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_4_OFFSET UNITYSDK_OFFSET(0x187CF490)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_5_OFFSET UNITYSDK_OFFSET(0x187CF4F0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_6_OFFSET UNITYSDK_OFFSET(0x187CF550)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_7_OFFSET UNITYSDK_OFFSET(0x187CF5B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_8_OFFSET UNITYSDK_OFFSET(0x187CF610)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_9_OFFSET UNITYSDK_OFFSET(0x187CF670)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x187CD270)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x187CED40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET UNITYSDK_OFFSET(0x187CED30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET UNITYSDK_OFFSET(0x187CEFE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x187CF730)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x187CF970)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET UNITYSDK_OFFSET(0x187CF900)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x187CF810)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187CEF40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET UNITYSDK_OFFSET(0x187CFB00)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET UNITYSDK_OFFSET(0x187CFC80)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x187CFE00)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET UNITYSDK_OFFSET(0x187CFF80)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET UNITYSDK_OFFSET(0x187CCD60)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x187CCEE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x187CED20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x187CED10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISASSEMBLYNAMESETEXPLICIT_OFFSET UNITYSDK_OFFSET(0x187CEF30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISFULLTYPENAMESETEXPLICIT_OFFSET UNITYSDK_OFFSET(0x187CEF20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x187CEF00)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x187CEF10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET UNITYSDK_OFFSET(0x187CEDA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET UNITYSDK_OFFSET(0x187CD330)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x187CA2B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187CEB40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187CEB30)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationInfo_TypeDefinitionIndex = 1121;

	class SerializationInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_data; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_nameToIndex; // 0x18
		::System::Runtime::Serialization::IFormatterConverter* m_converter; // 0x20
		::Il2CppArray<::System::String*>* m_members; // 0x28
		::Il2CppArray<::System::Type*>* m_types; // 0x30
		::System::Type* objectType; // 0x38
		::System::String* m_fullTypeName; // 0x40
		::System::String* m_assemName; // 0x48
		::System::Int32 m_currMember; // 0x50
		::System::Boolean requireSameTokenInPartialTrust; // 0x54
		::System::Boolean isFullTypeNameSetExplicit; // 0x55
		::System::Boolean isAssemblyNameSetExplicit; // 0x56

		::System::Void _ctor(::System::Type* a1, ::System::Runtime::Serialization::IFormatterConverter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::Runtime::Serialization::IFormatterConverter* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_FullTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_FULLTYPENAME_OFFSET))(this);
		}

		::System::String* get_AssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ASSEMBLYNAME_OFFSET))(this);
		}

		::System::Void SetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET))(this, a1);
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Void DemandForUnsafeAssemblyNameAssignments(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsAssemblyNameAssignmentSafe(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET))(a1, a2);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFullTypeNameSetExplicit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISFULLTYPENAMESETEXPLICIT_OFFSET))(this);
		}

		::System::Boolean get_IsAssemblyNameSetExplicit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISASSEMBLYNAMESETEXPLICIT_OFFSET))(this);
		}

		::System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator()
		{
			return ((::System::Runtime::Serialization::SerializationInfoEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void ExpandArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET))(this);
		}

		::System::Void AddValue(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddValue_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_2_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_3(::System::String* a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_3_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_4(::System::String* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_4_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_5(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_5_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_6(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_6_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_7(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_7_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_8(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_8_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_9(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_9_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_10(::System::String* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_10_OFFSET))(this, a1, a2);
		}

		::System::Void AddValueInternal(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateValue(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FindElement(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET))(this, a1);
		}

		::System::Object* GetElement(::System::String* a1, ::System::Type*& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Object* GetElementNoThrow(::System::String* a1, ::System::Type*& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValueNoThrow(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetBoolean(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET))(this, a1);
		}

		::System::Int32 GetInt32(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET))(this, a1);
		}

		::System::Int64 GetInt64(::System::String* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET))(this, a1);
		}

		::System::Single GetSingle(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET))(this, a1);
		}

		::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET))(this, a1);
		}
	};
}
