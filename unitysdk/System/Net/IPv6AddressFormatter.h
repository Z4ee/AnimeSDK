#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ASIPV4INT_OFFSET UNITYSDK_OFFSET(0x2101AA0)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4COMPATIBLE_OFFSET UNITYSDK_OFFSET(0x2101AE0)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4MAPPED_OFFSET UNITYSDK_OFFSET(0x2101AF0)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_SWAPUSHORT_OFFSET UNITYSDK_OFFSET(0x186F6FA0)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2101B00)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

namespace System::Net
{
	inline static constexpr unsigned int IPv6AddressFormatter_TypeDefinitionIndex = 2851;

	struct alignas(8) IPv6AddressFormatter
	{
		::Il2CppArray<::System::UInt16>* address; // 0x10
		::System::Int64 scopeId; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt16>* addr, ::System::Int64 scopeId)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt16>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER__CTOR_OFFSET))(this, addr, scopeId);
		}

		static ::System::UInt16 SwapUShort(::System::UInt16 number)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_SWAPUSHORT_OFFSET))(number);
		}

		::System::UInt32 AsIPv4Int()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_ASIPV4INT_OFFSET))(this);
		}

		::System::Boolean IsIPv4Compatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4COMPATIBLE_OFFSET))(this);
		}

		::System::Boolean IsIPv4Mapped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4MAPPED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_TOSTRING_OFFSET))(this);
		}
	};
}
