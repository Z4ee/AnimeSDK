#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MonoMethod; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18759A90)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x18759AA0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x187599D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x18759B00)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x18759950)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET UNITYSDK_OFFSET(0x18759B90)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x18759BD0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x18759A30)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18759940)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET UNITYSDK_OFFSET(0x187598D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET UNITYSDK_OFFSET(0x18759B60)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET UNITYSDK_OFFSET(0x18759BC0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 617;

	struct alignas(8) MonoMethodInfo
	{
		::System::Type* parent; // 0x10
		::System::Type* ret; // 0x18
		::System::Reflection::MethodAttributes attrs; // 0x20
		::System::Reflection::MethodImplAttributes iattrs; // 0x24
		::System::Reflection::CallingConventions callconv; // 0x28

		static ::System::Void get_method_info(::System::IntPtr a1, ::System::Reflection::MonoMethodInfo& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Reflection::MonoMethodInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_method_attributes(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET))(a1);
		}

		static ::System::Reflection::MonoMethodInfo GetMethodInfo(::System::IntPtr a1)
		{
			return ((::System::Reflection::MonoMethodInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET))(a1);
		}

		static ::System::Type* GetDeclaringType(::System::IntPtr a1)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET))(a1);
		}

		static ::System::Type* GetReturnType(::System::IntPtr a1)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET))(a1);
		}

		static ::System::Reflection::MethodAttributes GetAttributes(::System::IntPtr a1)
		{
			return ((::System::Reflection::MethodAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET))(a1);
		}

		static ::System::Reflection::CallingConventions GetCallingConvention(::System::IntPtr a1)
		{
			return ((::System::Reflection::CallingConventions(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET))(a1);
		}

		static ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::System::IntPtr a1)
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* get_parameter_info(::System::IntPtr a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersInfo(::System::IntPtr a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET))(a1, a2);
		}

		static ::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(::System::IntPtr a1)
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET))(a1);
		}

		static ::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::MonoMethod* a1)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::MonoMethod*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET))(a1);
		}
	};
}
