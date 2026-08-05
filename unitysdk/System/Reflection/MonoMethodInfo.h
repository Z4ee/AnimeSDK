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

#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_1AE676A9E9611704_OFFSET UNITYSDK_OFFSET(0x1C320280)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_3434A60EED4AF2D4_OFFSET UNITYSDK_OFFSET(0x1C320210)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_1_OFFSET UNITYSDK_OFFSET(0x1C320360)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_45D72BDBA6197A9A_OFFSET UNITYSDK_OFFSET(0x1C320330)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_5F06D1B5D04E94D8_OFFSET UNITYSDK_OFFSET(0x1C3203A0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_727CF190BC0265BA_OFFSET UNITYSDK_OFFSET(0x1C3201B0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_7E7A9368928F07C2_OFFSET UNITYSDK_OFFSET(0x1C320390)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_9D76713045F7177A_OFFSET UNITYSDK_OFFSET(0x1C3202D0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_A4AB7A81B4FDCA20_OFFSET UNITYSDK_OFFSET(0x1C320130)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_EB74F63191BFC4A5_OFFSET UNITYSDK_OFFSET(0x1C3200B0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F0C86BA4D830FBFC_OFFSET UNITYSDK_OFFSET(0x1C320120)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_F10EEFCCC75DEE3A_OFFSET UNITYSDK_OFFSET(0x1C320270)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 591;

	struct alignas(8) MonoMethodInfo
	{
		::System::Type* Field_2_0; // 0x10
		::System::Type* Field_2_7; // 0x18
		::System::Reflection::MethodAttributes Field_2_6; // 0x20
		::System::Reflection::MethodImplAttributes Field_2_5; // 0x24
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

		static ::System::Type* Method_2_3434A60EED4AF2D4(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_3434A60EED4AF2D4_OFFSET))(handle);
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
