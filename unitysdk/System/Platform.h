#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_PLATFORM_CHECKOS_OFFSET UNITYSDK_OFFSET(0x1E9DEEB0)
#define SYSTEM_PLATFORM_GET_ISFREEBSD_OFFSET UNITYSDK_OFFSET(0x1E9DF1D0)
#define SYSTEM_PLATFORM_GET_ISMACOS_OFFSET UNITYSDK_OFFSET(0x1E9DF110)
#define SYSTEM_PLATFORM_UNAME_OFFSET UNITYSDK_OFFSET(0x1E9DEE30)

namespace System
{
	inline static constexpr unsigned int Platform_TypeDefinitionIndex = 2491;

	class Platform : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isFreeBSD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0xABD0);
		}
		static ::System::Boolean* StaticGet_isMacOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0xABD1);
		}
		static ::System::Boolean* StaticGet_checkedOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0xABD2);
		}

		static ::System::Int32 uname(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_UNAME_OFFSET))(a1);
		}

		static ::System::Void CheckOS()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_CHECKOS_OFFSET))();
		}

		static ::System::Boolean get_IsMacOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_GET_ISMACOS_OFFSET))();
		}

		static ::System::Boolean get_IsFreeBSD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_GET_ISFREEBSD_OFFSET))();
		}
	};
}
