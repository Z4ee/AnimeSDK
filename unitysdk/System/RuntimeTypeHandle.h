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

#define SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x163FCFB0)
#define SYSTEM_RUNTIMETYPEHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1520BA0)
#define SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DA9D0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x163FD7D0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x163FCBE0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163FD260)
#define SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x163FD1F0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x163FD860)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x16402650)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET UNITYSDK_OFFSET(0x16403620)
#define SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x163FEAF0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET UNITYSDK_OFFSET(0x16403600)
#define SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET UNITYSDK_OFFSET(0x163FCB60)
#define SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x20DA9C0)
#define SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x16400790)
#define SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x163FD610)
#define SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x163FEB40)
#define SYSTEM_RUNTIMETYPEHANDLE_HASPROXYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x163FD490)
#define SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET UNITYSDK_OFFSET(0x16403680)
#define SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET UNITYSDK_OFFSET(0x163FD740)
#define SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET UNITYSDK_OFFSET(0x163FD350)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x163FD430)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x16403670)
#define SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET UNITYSDK_OFFSET(0x163FD2E0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x163FD070)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x163FE840)
#define SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET UNITYSDK_OFFSET(0x163FD080)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x163FCCA0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x164036A0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET UNITYSDK_OFFSET(0x163FD400)
#define SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x163FD3A0)
#define SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x163FD690)
#define SYSTEM_RUNTIMETYPEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x164035E0)
#define SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET UNITYSDK_OFFSET(0x164036D0)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20DA990)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20DA9B0)
#define SYSTEM_RUNTIMETYPEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 422;

	struct alignas(8) RuntimeTypeHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr val)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_OFFSET))(this, val);
		}

		::System::Void _ctor_1(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_1_OFFSET))(this, type);
		}

		/*
		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE__CTOR_2_OFFSET))(this, info, context);
		}
		*/

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GET_VALUE_OFFSET))(this);
		}

		/*
		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_EQUALS_1_OFFSET))(this, handle);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::RuntimeTypeHandle left, ::System::Object* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type)
		{
			return ((::System::Reflection::TypeAttributes(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETATTRIBUTES_OFFSET))(type);
		}

		static ::System::Int32 GetMetadataToken(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMETADATATOKEN_OFFSET))(type);
		}

		static ::System::Int32 GetToken(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETTOKEN_OFFSET))(type);
		}

		static ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_IMPL_OFFSET))(type);
		}

		static ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICTYPEDEFINITION_OFFSET))(type);
		}

		static ::System::Boolean HasElementType(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASELEMENTTYPE_OFFSET))(type);
		}

		static ::System::Boolean HasProxyAttribute(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASPROXYATTRIBUTE_OFFSET))(type);
		}

		static ::System::Boolean HasInstantiation(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASINSTANTIATION_OFFSET))(type);
		}

		static ::System::Boolean IsArray(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISARRAY_OFFSET))(type);
		}

		static ::System::Boolean IsByRef(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISBYREF_OFFSET))(type);
		}

		static ::System::Boolean IsComObject(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_OFFSET))(type);
		}

		static ::System::Boolean IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINSTANCEOFTYPE_OFFSET))(type, o);
		}

		static ::System::Boolean IsPointer(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPOINTER_OFFSET))(type);
		}

		static ::System::Boolean IsPrimitive(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISPRIMITIVE_OFFSET))(type);
		}

		static ::System::Boolean HasReferences(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_HASREFERENCES_OFFSET))(type);
		}

		static ::System::Boolean IsComObject_1(::System::RuntimeType* type, ::System::Boolean isGenericCOM)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCOMOBJECT_1_OFFSET))(type, isGenericCOM);
		}

		static ::System::Boolean IsContextful(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISCONTEXTFUL_OFFSET))(type);
		}

		static ::System::Boolean IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISEQUIVALENTTO_OFFSET))(rtType1, rtType2);
		}

		static ::System::Boolean IsSzArray(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISSZARRAY_OFFSET))(type);
		}

		static ::System::Boolean IsInterface(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISINTERFACE_OFFSET))(type);
		}

		static ::System::Int32 GetArrayRank(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETARRAYRANK_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETASSEMBLY_OFFSET))(type);
		}

		static ::System::RuntimeType* GetElementType(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETELEMENTTYPE_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETMODULE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericVariable(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICVARIABLE_OFFSET))(type);
		}

		static ::System::RuntimeType* GetBaseType(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETBASETYPE_OFFSET))(type);
		}

		static ::System::Boolean CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_CANCASTTO_OFFSET))(type, target);
		}

		static ::System::Boolean type_is_assignable_from(::System::Type* a, ::System::Type* b)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_TYPE_IS_ASSIGNABLE_FROM_OFFSET))(a, b);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_ISGENERICTYPEDEFINITION_OFFSET))(type);
		}

		static ::System::IntPtr GetGenericParameterInfo(::System::RuntimeType* type)
		{
			return ((::System::IntPtr(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_GETGENERICPARAMETERINFO_OFFSET))(type);
		}
	};
}
