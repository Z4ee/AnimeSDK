#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class NetworkInterface; }
namespace System::Net::NetworkInformation { class NetworkInterfaceFactory; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETMASK_OFFSET UNITYSDK_OFFSET(0x1CECFC60)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1CECFAB0)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GET_INTERNALIPV6LOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1CECFC10)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GET_INTERNALLOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1CECFB80)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_INTERNALGETISNETWORKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CECFB70)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECFCF0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemNetworkInterface_TypeDefinitionIndex = 3807;

	class SystemNetworkInterface : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::NetworkInterfaceFactory** StaticGet_nif()
		{
			return (::System::Net::NetworkInformation::NetworkInterfaceFactory**)Il2CppClass::FromTypeDefinitionIndex(SystemNetworkInterface_TypeDefinitionIndex)->GetStaticField(0x3AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET))();
		}

		static ::System::Boolean InternalGetIsNetworkAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_INTERNALGETISNETWORKAVAILABLE_OFFSET))();
		}

		static ::System::Int32 get_InternalLoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GET_INTERNALLOOPBACKINTERFACEINDEX_OFFSET))();
		}

		static ::System::Int32 get_InternalIPv6LoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GET_INTERNALIPV6LOOPBACKINTERFACEINDEX_OFFSET))();
		}

		static ::System::Net::IPAddress* GetNetMask(::System::Net::IPAddress* address)
		{
			return ((::System::Net::IPAddress*(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETMASK_OFFSET))(address);
		}
	};
}
