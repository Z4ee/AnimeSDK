#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_FIXED_INFO.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET UNITYSDK_OFFSET(0x1D898620)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET UNITYSDK_OFFSET(0x1D8986F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D898950)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D898940)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface_TypeDefinitionIndex = 3834;

	class Win32NetworkInterface : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::Win32_FIXED_INFO* StaticGet_fixedInfo()
		{
			return (::System::Net::NetworkInformation::Win32_FIXED_INFO*)Il2CppClass::FromTypeDefinitionIndex(Win32NetworkInterface_TypeDefinitionIndex)->GetStaticField(0x29C0);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Win32NetworkInterface_TypeDefinitionIndex)->GetStaticField(0x10F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetNetworkParams(::System::IntPtr ptr, ::System::Int32& size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET))(ptr, size);
		}

		static ::System::Net::NetworkInformation::Win32_FIXED_INFO get_FixedInfo()
		{
			return ((::System::Net::NetworkInformation::Win32_FIXED_INFO(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET))();
		}
	};
}
