#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class Type; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x187D7780)
#define SYSTEM_RUNTIMETYPEHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BFB070)
#define SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x383C240)
#define SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x187D8030)
#define SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x187D7340)
#define SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x187D7A50)
#define SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x187D79D0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x187D80C0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x187DD010)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET UNITYSDK_OFFSET(0x187DDF10)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x187D9320)
#define SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET UNITYSDK_OFFSET(0x187DDEB0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET UNITYSDK_OFFSET(0x187D72C0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x383C230)
#define SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x187DB080)
#define SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x187D7DF0)
#define SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x187D9370)
#define SYSTEM_RUNTIMETYPEHANDLE_HASPROXYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x187D7C70)
#define SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET UNITYSDK_OFFSET(0x187DDF70)
#define SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET UNITYSDK_OFFSET(0x187D7F70)
#define SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET UNITYSDK_OFFSET(0x187D7B30)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x187D7C10)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x187DDF60)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET UNITYSDK_OFFSET(0x187D7AD0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x187D7850)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x187D9060)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET UNITYSDK_OFFSET(0x187D7860)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x187D7410)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x187DDF90)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET UNITYSDK_OFFSET(0x187D7BE0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x187D7B80)
#define SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x187D7E80)
#define SYSTEM_RUNTIMETYPEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x187DDE90)
#define SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET UNITYSDK_OFFSET(0x187DDFC0)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x383C200)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x383C220)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 421;

	struct alignas(8) RuntimeTypeHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::RuntimeType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_1_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_2_OFFSET))(this, a1, a2);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::RuntimeTypeHandle a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* a1)
		{
			return ((::System::Reflection::TypeAttributes(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET))(a1);
		}

		static ::System::Int32 GetMetadataToken(::System::RuntimeType* a1)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET))(a1);
		}

		static ::System::Int32 GetToken(::System::RuntimeType* a1)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET))(a1);
		}

		static ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* a1)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET))(a1);
		}

		static ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* a1)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET))(a1);
		}

		static ::System::Boolean HasElementType(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Boolean HasProxyAttribute(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASPROXYATTRIBUTE_OFFSET))(a1);
		}

		static ::System::Boolean HasInstantiation(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET))(a1);
		}

		static ::System::Boolean IsArray(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET))(a1);
		}

		static ::System::Boolean IsByRef(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET))(a1);
		}

		static ::System::Boolean IsComObject(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET))(a1);
		}

		static ::System::Boolean IsInstanceOfType(::System::RuntimeType* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPointer(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET))(a1);
		}

		static ::System::Boolean IsPrimitive(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET))(a1);
		}

		static ::System::Boolean HasReferences(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET))(a1);
		}

		static ::System::Boolean IsComObject_1(::System::RuntimeType* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsContextful(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET))(a1);
		}

		static ::System::Boolean IsEquivalentTo(::System::RuntimeType* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSzArray(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET))(a1);
		}

		static ::System::Boolean IsInterface(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET))(a1);
		}

		static ::System::Int32 GetArrayRank(::System::RuntimeType* a1)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET))(a1);
		}

		static ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* a1)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET))(a1);
		}

		static ::System::RuntimeType* GetElementType(::System::RuntimeType* a1)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* a1)
		{
			return ((::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericVariable(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET))(a1);
		}

		static ::System::RuntimeType* GetBaseType(::System::RuntimeType* a1)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET))(a1);
		}

		static ::System::Boolean CanCastTo(::System::RuntimeType* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean type_is_assignable_from(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET))(a1);
		}

		static ::System::IntPtr GetGenericParameterInfo(::System::RuntimeType* a1)
		{
			return ((::System::IntPtr(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET))(a1);
		}
	};
}
