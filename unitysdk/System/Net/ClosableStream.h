#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DelegatedStream.h"

namespace System { class EventHandler; }
namespace System::IO { class Stream; }

#define SYSTEM_NET_CLOSABLESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A7E39B0)
#define SYSTEM_NET_CLOSABLESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3990)

namespace System::Net
{
	inline static constexpr unsigned int ClosableStream_TypeDefinitionIndex = 3437;

	class ClosableStream : public ::System::Net::DelegatedStream
	{
	public:
		::System::EventHandler* onClose; // 0x38
		::System::Int32 closed; // 0x40

		::System::Void _ctor(::System::IO::Stream* stream, ::System::EventHandler* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CLOSABLESTREAM__CTOR_OFFSET))(this, stream, onClose);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CLOSABLESTREAM_CLOSE_OFFSET))(this);
		}
	};
}
