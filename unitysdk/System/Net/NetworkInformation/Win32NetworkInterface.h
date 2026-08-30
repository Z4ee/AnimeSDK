#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_FIXED_INFO.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET UNITYSDK_OFFSET(0x1B04D030)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET UNITYSDK_OFFSET(0x1B04CC40)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface_TypeDefinitionIndex = 2963;

	class Win32NetworkInterface : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::Win32_FIXED_INFO* StaticGet_fixedInfo()
		{
			return (::System::Net::NetworkInformation::Win32_FIXED_INFO*)Il2CppClass::FromTypeDefinitionIndex(Win32NetworkInterface_TypeDefinitionIndex)->GetStaticField(0x1D350);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Win32NetworkInterface_TypeDefinitionIndex)->GetStaticField(0x9E70);
		}

		static ::System::Int32 GetNetworkParams(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Net::NetworkInformation::Win32_FIXED_INFO get_FixedInfo()
		{
			return ((::System::Net::NetworkInformation::Win32_FIXED_INFO(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET))();
		}
	};
}
