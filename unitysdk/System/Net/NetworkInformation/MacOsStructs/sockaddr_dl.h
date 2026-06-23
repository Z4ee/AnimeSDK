#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NET_NETWORKINFORMATION_MACOSSTRUCTS_SOCKADDR_DL_READ_OFFSET UNITYSDK_OFFSET(0x951E30)

namespace System::Net::NetworkInformation::MacOsStructs
{
	inline static constexpr unsigned int sockaddr_dl_TypeDefinitionIndex = 3855;

	struct alignas(8) sockaddr_dl
	{
		::System::Byte sdl_len; // 0x10
		::System::Byte sdl_family; // 0x11
		::System::UInt16 sdl_index; // 0x12
		::System::Byte sdl_type; // 0x14
		::System::Byte sdl_nlen; // 0x15
		::System::Byte sdl_alen; // 0x16
		::System::Byte sdl_slen; // 0x17
		::Il2CppArray<::System::Byte>* sdl_data; // 0x18

		::System::Void Read(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSSTRUCTS_SOCKADDR_DL_READ_OFFSET))(this, ptr);
		}
	};
}
