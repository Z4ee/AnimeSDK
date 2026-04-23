#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeFieldHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x179A15E0)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_1_OFFSET UNITYSDK_OFFSET(0x179A11B0)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x179A1130)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x179A12E0)
#define SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179A15F0)
#define SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x179A13A0)
#define SYSTEM_REFLECTION_FIELDINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x179A1590)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISINITONLY_OFFSET UNITYSDK_OFFSET(0x179A1000)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISLITERAL_OFFSET UNITYSDK_OFFSET(0x179A0FC0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISNOTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x179A1060)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x179A1040)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x179A1020)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x179A0FE0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MARSHAL_INFO_OFFSET UNITYSDK_OFFSET(0x179A1390)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x179A0FB0)
#define SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x179A10B0)
#define SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179A12B0)
#define SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179A1600)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x179A1330)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x179A1080)
#define SYSTEM_REFLECTION_FIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179A0FA0)

namespace System::Reflection
{
	inline static constexpr unsigned int FieldInfo_TypeDefinitionIndex = 605;

	class FieldInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsLiteral()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISLITERAL_OFFSET))(this);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Boolean get_IsInitOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISINITONLY_OFFSET))(this);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISPUBLIC_OFFSET))(this);
		}

		::System::Boolean get_IsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISPRIVATE_OFFSET))(this);
		}

		::System::Boolean get_IsNotSerialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISNOTSERIALIZED_OFFSET))(this);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET))(this, obj, value);
		}

		static ::System::Reflection::FieldInfo* internal_from_handle_type(::System::IntPtr field_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(field_handle, type_handle);
		}

		static ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET))(handle);
		}

		static ::System::Reflection::FieldInfo* GetFieldFromHandle_1(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_1_OFFSET))(handle, declaringType);
		}

		::System::Int32 GetFieldOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET))(this);
		}

		::System::Void SetValueDirect(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET))(this, obj, value);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info()
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_MARSHAL_INFO_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Object* GetRawConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETRAWCONSTANTVALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
