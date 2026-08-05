#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/RequestStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class MonoChunkStream; }

#define SYSTEM_NET_CHUNKEDINPUTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1DB83B10)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DB843B0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1DB83DC0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_GET_DECODER_OFFSET UNITYSDK_OFFSET(0x1DB83AC0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ONREAD_OFFSET UNITYSDK_OFFSET(0x1DB84060)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1DB83AE0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_SET_DECODER_OFFSET UNITYSDK_OFFSET(0x1DB83AD0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB83990)

namespace System::Net
{
	inline static constexpr unsigned int ChunkedInputStream_TypeDefinitionIndex = 3494;

	class ChunkedInputStream : public ::System::Net::RequestStream
	{
	public:
		::System::Net::MonoChunkStream* decoder; // 0x50
		::System::Net::HttpListenerContext* context; // 0x58
		::System::Boolean no_more_data; // 0x60
		::System::Boolean disposed; // 0x61

		::System::Void _ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET))(this, context, stream, buffer, offset, length);
		}

		::System::Net::MonoChunkStream* get_Decoder()
		{
			return ((::System::Net::MonoChunkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_GET_DECODER_OFFSET))(this);
		}

		::System::Void set_Decoder(::System::Net::MonoChunkStream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::MonoChunkStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_SET_DECODER_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* cback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, cback, state);
		}

		::System::Void OnRead(::System::IAsyncResult* base_ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_ONREAD_OFFSET))(this, base_ares);
		}

		::System::Int32 EndRead(::System::IAsyncResult* ares)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_ENDREAD_OFFSET))(this, ares);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_CLOSE_OFFSET))(this);
		}
	};
}
