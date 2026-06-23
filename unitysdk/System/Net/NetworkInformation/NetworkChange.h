#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net::NetworkInformation { class INetworkChange; }
namespace System::Net::NetworkInformation { class NetworkAddressChangedEventHandler; }
namespace System::Net::NetworkInformation { class NetworkAvailabilityChangedEventHandler; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CECF040)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CECF680)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_MAYBECREATE_OFFSET UNITYSDK_OFFSET(0x1CECF280)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_MAYBEDISPOSE_OFFSET UNITYSDK_OFFSET(0x1CECF4E0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REGISTERNETWORKCHANGE_OFFSET UNITYSDK_OFFSET(0x1CECFA70)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CECF340)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CECF8C0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECFA60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkChange_TypeDefinitionIndex = 3799;

	class NetworkChange : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::INetworkChange** StaticGet_networkChange()
		{
			return (::System::Net::NetworkInformation::INetworkChange**)Il2CppClass::FromTypeDefinitionIndex(NetworkChange_TypeDefinitionIndex)->GetStaticField(0x3AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void add_NetworkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_NetworkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET))(value);
		}

		static ::System::Void add_NetworkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_NetworkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET))(value);
		}

		static ::System::Void MaybeCreate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_MAYBECREATE_OFFSET))();
		}

		static ::System::Void MaybeDispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_MAYBEDISPOSE_OFFSET))();
		}

		static ::System::Void RegisterNetworkChange(::System::Net::NetworkInformation::NetworkChange* nc)
		{
			return ((::System::Void(*)(::System::Net::NetworkInformation::NetworkChange*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKCHANGE_REGISTERNETWORKCHANGE_OFFSET))(nc);
		}
	};
}
