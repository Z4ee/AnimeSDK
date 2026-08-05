#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Stream.h"

#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAAC530)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET UNITYSDK_OFFSET(0x1DAC91A0)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_LEAVEINNERSTREAMOPEN_OFFSET UNITYSDK_OFFSET(0x1DAC9190)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA84F0)

namespace System::Net::Security
{
	inline static constexpr unsigned int AuthenticatedStream_TypeDefinitionIndex = 3691;

	class AuthenticatedStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* _InnerStream; // 0x28
		::System::Boolean _LeaveStreamOpen; // 0x30

		::System::Void _ctor(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM__CTOR_OFFSET))(this, innerStream, leaveInnerStreamOpen);
		}

		::System::Boolean get_LeaveInnerStreamOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_LEAVEINNERSTREAMOPEN_OFFSET))(this);
		}

		::System::IO::Stream* get_InnerStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
