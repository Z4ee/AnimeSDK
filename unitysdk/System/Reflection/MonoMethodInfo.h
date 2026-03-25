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

#define SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163791F0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x16379260)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x16379330)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x163787E0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1637AD20)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET UNITYSDK_OFFSET(0x16378880)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET UNITYSDK_OFFSET(0x1637A2D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1637A3D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1637B2C0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET UNITYSDK_OFFSET(0x1637B250)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET UNITYSDK_OFFSET(0x1637B2D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET UNITYSDK_OFFSET(0x1637B300)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 618;

	struct alignas(8) MonoMethodInfo
	{
		::System::Type* parent; // 0x10
		::System::Type* ret; // 0x18
		::System::Reflection::MethodAttributes attrs; // 0x20
		::System::Reflection::MethodImplAttributes iattrs; // 0x24
		::System::Reflection::CallingConventions callconv; // 0x28

		static ::System::Void get_method_info(::System::IntPtr handle, ::System::Reflection::MonoMethodInfo& info)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Reflection::MonoMethodInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_INFO_OFFSET))(handle, info);
		}

		static ::System::Int32 get_method_attributes(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_METHOD_ATTRIBUTES_OFFSET))(handle);
		}

		static ::System::Reflection::MonoMethodInfo GetMethodInfo(::System::IntPtr handle)
		{
			return ((::System::Reflection::MonoMethodInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODINFO_OFFSET))(handle);
		}

		static ::System::Type* GetDeclaringType(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETDECLARINGTYPE_OFFSET))(handle);
		}

		static ::System::Type* GetReturnType(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNTYPE_OFFSET))(handle);
		}

		static ::System::Reflection::MethodAttributes GetAttributes(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETATTRIBUTES_OFFSET))(handle);
		}

		static ::System::Reflection::CallingConventions GetCallingConvention(::System::IntPtr handle)
		{
			return ((::System::Reflection::CallingConventions(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETCALLINGCONVENTION_OFFSET))(handle);
		}

		static ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(handle);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* get_parameter_info(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_PARAMETER_INFO_OFFSET))(handle, member);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersInfo(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETPARAMETERSINFO_OFFSET))(handle, member);
		}

		static ::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(::System::IntPtr handle)
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GET_RETVAL_MARSHAL_OFFSET))(handle);
		}

		static ::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::MonoMethod* method)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::MonoMethod*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_GETRETURNPARAMETERINFO_OFFSET))(method);
		}
	};
}
