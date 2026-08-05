#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/BufferType.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NET_SECURITYBUFFERSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D626600)

namespace System::Net
{
	inline static constexpr unsigned int SecurityBufferStruct_TypeDefinitionIndex = 3308;

	struct alignas(8) SecurityBufferStruct
	{
		static ::System::Int32* StaticGet_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SecurityBufferStruct_TypeDefinitionIndex)->GetStaticField(0x13B0);
		}
		::System::Int32 count; // 0x10
		::System::Net::BufferType type; // 0x14
		::System::IntPtr token; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFERSTRUCT__CCTOR_OFFSET))();
		}
	};
}
