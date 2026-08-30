#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterface.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_ADDADDRESS_OFFSET UNITYSDK_OFFSET(0x1B04A950)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1B04CB70)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B04CBF0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1B04CC00)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SETLINKLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1B04A9F0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048B30)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixNetworkInterface_TypeDefinitionIndex = 2959;

	class UnixNetworkInterface : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses; // 0x10
		::System::String* name; // 0x18
		::Il2CppArray<::System::Byte>* macAddress; // 0x20
		::System::Net::NetworkInformation::NetworkInterfaceType type; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddAddress(::System::Net::IPAddress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_ADDADDRESS_OFFSET))(this, a1);
		}

		::System::Void SetLinkLayerInfo(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Net::NetworkInformation::NetworkInterfaceType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::NetworkInterfaceType))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SETLINKLAYERINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}
	};
}
