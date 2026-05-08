#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterface.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceComponent.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv4InterfaceStatistics; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_ADDADDRESS_OFFSET UNITYSDK_OFFSET(0x19A72630)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x19A726A0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19A72850)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x19A72860)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_ISRECEIVEONLY_OFFSET UNITYSDK_OFFSET(0x19A72870)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NAMEINDEX_OFFSET UNITYSDK_OFFSET(0x19A728B0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19A72880)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x19A72890)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x19A728A0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SETLINKLAYERINFO_OFFSET UNITYSDK_OFFSET(0x19A72690)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SUPPORTS_OFFSET UNITYSDK_OFFSET(0x19A72720)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A725B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixNetworkInterface_TypeDefinitionIndex = 3815;

	class UnixNetworkInterface : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses; // 0x10
		::Il2CppArray<::System::Byte>* macAddress; // 0x18
		::System::Net::NetworkInformation::IPv4InterfaceStatistics* ipv4stats; // 0x20
		::System::Net::NetworkInformation::IPInterfaceProperties* ipproperties; // 0x28
		::System::String* name; // 0x30
		::System::Net::NetworkInformation::NetworkInterfaceType type; // 0x38

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE__CTOR_OFFSET))(this, name);
		}

		::System::Void AddAddress(::System::Net::IPAddress* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_ADDADDRESS_OFFSET))(this, address);
		}

		::System::Void SetLinkLayerInfo(::System::Int32 index, ::Il2CppArray<::System::Byte>* macAddress, ::System::Net::NetworkInformation::NetworkInterfaceType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::NetworkInterfaceType))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SETLINKLAYERINFO_OFFSET))(this, index, macAddress, type);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::Boolean Supports(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterfaceComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_SUPPORTS_OFFSET))(this, networkInterfaceComponent);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsReceiveOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_ISRECEIVEONLY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NAME_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}

		::System::Int64 get_Speed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_SPEED_OFFSET))(this);
		}

		::System::Int32 get_NameIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACE_GET_NAMEINDEX_OFFSET))(this);
		}
	};
}
