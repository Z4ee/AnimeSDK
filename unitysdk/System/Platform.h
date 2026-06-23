#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_PLATFORM_CHECKOS_OFFSET UNITYSDK_OFFSET(0x1D461390)
#define SYSTEM_PLATFORM_GET_ISFREEBSD_OFFSET UNITYSDK_OFFSET(0x1D4613F0)
#define SYSTEM_PLATFORM_GET_ISMACOS_OFFSET UNITYSDK_OFFSET(0x1D4613A0)
#define SYSTEM_PLATFORM_UNAME_OFFSET UNITYSDK_OFFSET(0x1D461310)

namespace System
{
	inline static constexpr unsigned int Platform_TypeDefinitionIndex = 2702;

	class Platform : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isFreeBSD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x11E0);
		}
		static ::System::Boolean* StaticGet_isMacOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x11E1);
		}
		static ::System::Boolean* StaticGet_checkedOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x11E2);
		}

		static ::System::Int32 uname(::System::IntPtr buf)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_UNAME_OFFSET))(buf);
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
