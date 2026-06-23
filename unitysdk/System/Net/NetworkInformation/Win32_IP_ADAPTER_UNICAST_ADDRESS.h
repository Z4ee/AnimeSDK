#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/DuplicateAddressDetectionState.h"
#include "unitysdk/System/Net/NetworkInformation/PrefixOrigin.h"
#include "unitysdk/System/Net/NetworkInformation/SuffixOrigin.h"
#include "unitysdk/System/Net/NetworkInformation/Win32LengthFlagsUnion.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADAPTER_UNICAST_ADDRESS_TypeDefinitionIndex = 3847;

	struct alignas(8) Win32_IP_ADAPTER_UNICAST_ADDRESS
	{
		::System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags; // 0x10
		::System::IntPtr Next; // 0x18
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address; // 0x20
		::System::Net::NetworkInformation::PrefixOrigin PrefixOrigin; // 0x30
		::System::Net::NetworkInformation::SuffixOrigin SuffixOrigin; // 0x34
		::System::Net::NetworkInformation::DuplicateAddressDetectionState DadState; // 0x38
		::System::UInt32 ValidLifetime; // 0x3C
		::System::UInt32 PreferredLifetime; // 0x40
		::System::UInt32 LeaseLifetime; // 0x44
		::System::Byte OnLinkPrefixLength; // 0x48
	};
}
