#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }
namespace System::Net::NetworkInformation { class NetworkInterfaceFactory; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x186FBD70)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186FEFC0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemNetworkInterface_TypeDefinitionIndex = 2941;

	class SystemNetworkInterface : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::NetworkInterfaceFactory** StaticGet_nif()
		{
			return (::System::Net::NetworkInformation::NetworkInterfaceFactory**)Il2CppClass::FromTypeDefinitionIndex(SystemNetworkInterface_TypeDefinitionIndex)->GetStaticField(0x12640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET))();
		}
	};
}
