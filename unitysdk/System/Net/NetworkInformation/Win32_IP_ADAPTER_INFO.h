#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADDR_STRING.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADAPTER_INFO_TypeDefinitionIndex = 3838;

	struct alignas(8) Win32_IP_ADAPTER_INFO
	{
		// static const ::System::Int32 MAX_ADAPTER_NAME_LENGTH = 0x100; // 0x0
		// static const ::System::Int32 MAX_ADAPTER_DESCRIPTION_LENGTH = 0x80; // 0x0
		// static const ::System::Int32 MAX_ADAPTER_ADDRESS_LENGTH = 0x8; // 0x0
		::System::IntPtr Next; // 0x10
		::System::Int32 ComboIndex; // 0x18
		::System::String* AdapterName; // 0x20
		::System::String* Description; // 0x28
		::System::UInt32 AddressLength; // 0x30
		::Il2CppArray<::System::Byte>* Address; // 0x38
		::System::UInt32 Index; // 0x40
		::System::UInt32 Type; // 0x44
		::System::UInt32 DhcpEnabled; // 0x48
		::System::IntPtr CurrentIpAddress; // 0x50
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING IpAddressList; // 0x58
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING GatewayList; // 0x78
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING DhcpServer; // 0x98
		::System::Boolean HaveWins; // 0xB8
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING PrimaryWinsServer; // 0xC0
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING SecondaryWinsServer; // 0xE0
		::System::Int64 LeaseObtained; // 0x100
		::System::Int64 LeaseExpires; // 0x108
	};
}
