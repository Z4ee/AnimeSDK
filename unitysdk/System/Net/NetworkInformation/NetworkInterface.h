#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1E9A5130)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1E9A5320)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E9A5280)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1E9A5370)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1E9A52D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A53C0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterface_TypeDefinitionIndex = 2932;

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

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}
	};
}
