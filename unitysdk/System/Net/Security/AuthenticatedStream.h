#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Stream.h"

#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B95D3B0)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET UNITYSDK_OFFSET(0x1B95D3A0)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95D150)

namespace System::Net::Security
{
	inline static constexpr unsigned int AuthenticatedStream_TypeDefinitionIndex = 2922;

	class AuthenticatedStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* _InnerStream; // 0x28
		::System::Boolean _LeaveStreamOpen; // 0x30

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IO::Stream* get_InnerStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET))(this, a1);
		}
	};
}
