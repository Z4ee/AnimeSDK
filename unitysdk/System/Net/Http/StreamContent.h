#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpContent.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D49E250)
#define SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1D49E2B0)
#define SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x1D49E3A0)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D49E180)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D4981A0)
#define SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49E0E0)

namespace System::Net::Http
{
	inline static constexpr unsigned int StreamContent_TypeDefinitionIndex = 26123;

	class StreamContent : public ::System::Net::Http::HttpContent
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::IO::Stream* content; // 0x30
		::System::Boolean contentCopied; // 0x38
		::System::Int32 bufferSize; // 0x3C
		::System::Int64 startPosition; // 0x40

		::System::Void _ctor(::System::IO::Stream* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_OFFSET))(this, content);
		}

		::System::Void _ctor_1(::System::IO::Stream* content, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_1_OFFSET))(this, content, bufferSize);
		}

		::System::Void _ctor_2(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT__CTOR_2_OFFSET))(this, content, cancellationToken);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::TransportContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(this, stream, context);
		}

		::System::Boolean TryComputeLength(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET))(this, length);
		}
	};
}
