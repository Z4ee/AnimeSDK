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

#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_1AE676A9E9611704_OFFSET UNITYSDK_OFFSET(0x1AE4C910)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_1_OFFSET UNITYSDK_OFFSET(0x1AE4CA00)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_OFFSET UNITYSDK_OFFSET(0x1AE4C9D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_5F06D1B5D04E94D8_OFFSET UNITYSDK_OFFSET(0x1AE4CA40)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_727CF190BC0265BA_OFFSET UNITYSDK_OFFSET(0x1AE4C840)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_7E7A9368928F07C2_OFFSET UNITYSDK_OFFSET(0x1AE4CA30)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_8DDB103BDA7773A7_OFFSET UNITYSDK_OFFSET(0x1AE4C8A0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_9D76713045F7177A_OFFSET UNITYSDK_OFFSET(0x1AE4C970)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_A4AB7A81B4FDCA20_OFFSET UNITYSDK_OFFSET(0x1AE4C7C0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_EB74F63191BFC4A5_OFFSET UNITYSDK_OFFSET(0x1AE4C740)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F0C86BA4D830FBFC_OFFSET UNITYSDK_OFFSET(0x1AE4C7B0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F10EEFCCC75DEE3A_OFFSET UNITYSDK_OFFSET(0x1AE4C900)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 591;

	struct alignas(8) MonoMethodInfo
	{
		::System::Type* Field_2_0; // 0x10
		::System::Type* Field_2_1; // 0x18
		::System::Reflection::MethodAttributes Field_2_2; // 0x20
		::System::Reflection::MethodImplAttributes Field_2_3; // 0x24
		::System::Reflection::CallingConventions Field_2_4; // 0x28

		static ::System::Void Method_2_EB74F63191BFC4A5(::System::IntPtr handle, ::System::Reflection::MonoMethodInfo& info)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Reflection::MonoMethodInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_EB74F63191BFC4A5_OFFSET))(handle, info);
		}

		static ::System::Int32 Method_2_F0C86BA4D830FBFC(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F0C86BA4D830FBFC_OFFSET))(handle);
		}

		static ::System::Reflection::MonoMethodInfo Method_2_A4AB7A81B4FDCA20(::System::IntPtr handle)
		{
			return ((::System::Reflection::MonoMethodInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_A4AB7A81B4FDCA20_OFFSET))(handle);
		}

		static ::System::Type* Method_2_727CF190BC0265BA(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_727CF190BC0265BA_OFFSET))(handle);
		}

		static ::System::Type* Method_2_8DDB103BDA7773A7(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_8DDB103BDA7773A7_OFFSET))(handle);
		}

		static ::System::Reflection::MethodAttributes Method_2_F10EEFCCC75DEE3A(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F10EEFCCC75DEE3A_OFFSET))(handle);
		}

		static ::System::Reflection::CallingConventions Method_2_1AE676A9E9611704(::System::IntPtr handle)
		{
			return ((::System::Reflection::CallingConventions(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_1AE676A9E9611704_OFFSET))(handle);
		}

		static ::System::Reflection::MethodImplAttributes Method_2_9D76713045F7177A(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_9D76713045F7177A_OFFSET))(handle);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_2_45D72BDBA6197A9A(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_OFFSET))(handle, member);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_2_45D72BDBA6197A9A_1(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_1_OFFSET))(handle, member);
		}

		static ::System::Runtime::InteropServices::MarshalAsAttribute* Method_2_7E7A9368928F07C2(::System::IntPtr handle)
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_7E7A9368928F07C2_OFFSET))(handle);
		}

		static ::System::Reflection::ParameterInfo* Method_2_5F06D1B5D04E94D8(::System::Reflection::MonoMethod* method)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::MonoMethod*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_5F06D1B5D04E94D8_OFFSET))(method);
		}
	};
}
