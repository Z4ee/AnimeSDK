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

#define SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD97300)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1BD96C20)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD96BA0)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x1BD96D50)
#define SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD97310)
#define SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD96E10)
#define SYSTEM_REFLECTION_FIELDINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1BD972B0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISINITONLY_OFFSET UNITYSDK_OFFSET(0x1BD96880)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISLITERAL_OFFSET UNITYSDK_OFFSET(0x1BD96780)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISNOTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BD96A00)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1BD96980)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1BD96900)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1BD96800)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MARSHAL_INFO_OFFSET UNITYSDK_OFFSET(0x1BD96E00)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD96770)
#define SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x1BD96B20)
#define SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD96D20)
#define SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD97320)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x1BD96DA0)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1BD96A80)
#define SYSTEM_REFLECTION_FIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD96760)

namespace System::Reflection
{
	inline static constexpr unsigned int FieldInfo_TypeDefinitionIndex = 607;

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

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::Reflection::FieldInfo* internal_from_handle_type(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET))(a1);
		}

		static ::System::Reflection::FieldInfo* GetFieldFromHandle_1(::System::RuntimeFieldHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_1_OFFSET))(a1, a2);
		}

		::System::Int32 GetFieldOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET))(this);
		}

		::System::Void SetValueDirect(::System::TypedReference a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET))(this, a1, a2);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::FieldInfo* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::FieldInfo* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
