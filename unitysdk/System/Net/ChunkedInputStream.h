#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/RequestStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class MonoChunkStream; }

#define SYSTEM_NET_CHUNKEDINPUTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x186B74C0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x186B7D60)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x186B7760)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ONREAD_OFFSET UNITYSDK_OFFSET(0x186B7A20)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x186B7490)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x186B7390)

namespace System::Net
{
	inline static constexpr unsigned int ChunkedInputStream_TypeDefinitionIndex = 2813;

	class ChunkedInputStream : public ::System::Net::RequestStream
	{
	public:
		::System::Net::HttpListenerContext* context; // 0x50
		::System::Net::MonoChunkStream* decoder; // 0x58
		::System::Boolean no_more_data; // 0x60
		::System::Boolean disposed; // 0x61

		::System::Void _ctor(::System::Net::HttpListenerContext* context, ::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET))(this, context, stream, buffer, offset, length);
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
