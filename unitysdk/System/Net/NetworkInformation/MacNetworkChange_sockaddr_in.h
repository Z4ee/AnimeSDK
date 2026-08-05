#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SOCKADDR_IN_CREATE_OFFSET UNITYSDK_OFFSET(0x1C8817B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacNetworkChange_sockaddr_in_TypeDefinitionIndex = 3802;

	struct alignas(1) MacNetworkChange_sockaddr_in
	{
		::System::Byte sin_len; // 0x10
		::System::Byte sin_family; // 0x11

		static ::System::Net::NetworkInformation::MacNetworkChange_sockaddr_in Create()
		{
			return ((::System::Net::NetworkInformation::MacNetworkChange_sockaddr_in(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SOCKADDR_IN_CREATE_OFFSET))();
		}
	};
}
