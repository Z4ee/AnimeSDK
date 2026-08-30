#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPv4InterfaceStatistics.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPV4INTERFACESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A8C10)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPv4InterfaceStatistics_TypeDefinitionIndex = 2944;

	class Win32IPv4InterfaceStatistics : public ::System::Net::NetworkInformation::IPv4InterfaceStatistics
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_IFROW info; // 0x10

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_MIB_IFROW a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_MIB_IFROW))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPV4INTERFACESTATISTICS__CTOR_OFFSET))(this, a1);
		}
	};
}
