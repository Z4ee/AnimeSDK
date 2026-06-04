#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterface.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_ADDADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF9C3E0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF9E600)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF9E650)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1AF9E660)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SETLINKLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1AF9C480)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9A600)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixNetworkInterface_TypeDefinitionIndex = 2948;

	class UnixNetworkInterface : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Byte>* macAddress; // 0x18
		::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses; // 0x20
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
