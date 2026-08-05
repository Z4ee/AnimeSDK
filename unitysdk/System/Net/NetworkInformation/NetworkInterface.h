#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceComponent.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class IPInterfaceStatistics; }
namespace System::Net::NetworkInformation { class IPv4InterfaceStatistics; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1D255070)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D2553E0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D255480)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1D255430)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETISNETWORKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1D255170)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1D255610)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D255390)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D2552F0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_IPV6LOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1D2552A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_ISRECEIVEONLY_OFFSET UNITYSDK_OFFSET(0x1D255570)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_LOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1D2551D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D255340)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1D255660)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1D2554D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1D255520)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET UNITYSDK_OFFSET(0x1D2555C0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_SUPPORTS_OFFSET UNITYSDK_OFFSET(0x1D2556B0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D255700)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterface_TypeDefinitionIndex = 3731;

	class NetworkInterface : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETALLNETWORKINTERFACES_OFFSET))();
		}

		static ::System::Boolean GetIsNetworkAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETISNETWORKAVAILABLE_OFFSET))();
		}

		static ::System::Int32 get_LoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_LOOPBACKINTERFACEINDEX_OFFSET))();
		}

		static ::System::Int32 get_IPv6LoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_IPV6LOOPBACKINTERFACEINDEX_OFFSET))();
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return ((::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPPROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPv4InterfaceStatistics* GetIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPInterfaceStatistics* GetIPStatistics()
		{
			return ((::System::Net::NetworkInformation::IPInterfaceStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		::System::Int64 get_Speed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_SPEED_OFFSET))(this);
		}

		::System::Boolean get_IsReceiveOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_ISRECEIVEONLY_OFFSET))(this);
		}

		::System::Boolean get_SupportsMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}

		::System::Boolean Supports(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterfaceComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_SUPPORTS_OFFSET))(this, networkInterfaceComponent);
		}
	};
}
