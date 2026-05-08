#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpContent.h"

namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1B00CA30)
#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x1B00CAC0)
#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00C9B0)

namespace System::Net::Http
{
	inline static constexpr unsigned int ByteArrayContent_TypeDefinitionIndex = 24705;

	class ByteArrayContent : public ::System::Net::Http::HttpContent
	{
	public:
		::Il2CppArray<::System::Byte>* content; // 0x28
		::System::Int32 count; // 0x30
		::System::Int32 offset; // 0x34

		::System::Void _ctor(::Il2CppArray<::System::Byte>* content)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT__CTOR_OFFSET))(this, content);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::TransportContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(this, stream, context);
		}

		::System::Boolean TryComputeLength(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT_TRYCOMPUTELENGTH_OFFSET))(this, length);
		}
	};
}
