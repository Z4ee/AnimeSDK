#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/BufferType.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices { class SafeHandle; }
namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }

#define SYSTEM_NET_SECURITYBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D626510)
#define SYSTEM_NET_SECURITYBUFFER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D626550)
#define SYSTEM_NET_SECURITYBUFFER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D6265B0)
#define SYSTEM_NET_SECURITYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6264A0)

namespace System::Net
{
	inline static constexpr unsigned int SecurityBuffer_TypeDefinitionIndex = 3309;

	class SecurityBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* token; // 0x10
		::System::Runtime::InteropServices::SafeHandle* unmanagedToken; // 0x18
		::System::Net::BufferType type; // 0x20
		::System::Int32 size; // 0x24
		::System::Int32 offset; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 size, ::System::Net::BufferType tokentype)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::BufferType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFER__CTOR_OFFSET))(this, data, offset, size, tokentype);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data, ::System::Net::BufferType tokentype)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::BufferType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFER__CTOR_1_OFFSET))(this, data, tokentype);
		}

		::System::Void _ctor_2(::System::Int32 size, ::System::Net::BufferType tokentype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::BufferType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFER__CTOR_2_OFFSET))(this, size, tokentype);
		}

		::System::Void _ctor_3(::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFER__CTOR_3_OFFSET))(this, binding);
		}
	};
}
