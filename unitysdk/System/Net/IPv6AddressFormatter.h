#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ASIPV4INT_OFFSET UNITYSDK_OFFSET(0x39D3E30)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4COMPATIBLE_OFFSET UNITYSDK_OFFSET(0x39D3E70)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_ISIPV4MAPPED_OFFSET UNITYSDK_OFFSET(0x39D3E80)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_SWAPUSHORT_OFFSET UNITYSDK_OFFSET(0x19612700)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39D3F00)
#define SYSTEM_NET_IPV6ADDRESSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x676D90)

namespace System::Net
{
	inline static constexpr unsigned int IPv6AddressFormatter_TypeDefinitionIndex = 2856;

	struct alignas(8) IPv6AddressFormatter
	{
		::Il2CppArray<::System::UInt16>* address; // 0x10
		::System::Int64 scopeId; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt16>* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt16>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::UInt16 SwapUShort(::System::UInt16 a1)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPV6ADDRESSFORMATTER_SWAPUSHORT_OFFSET))(a1);
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
