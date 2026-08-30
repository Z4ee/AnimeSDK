#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/RequestStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class MonoChunkStream; }

#define SYSTEM_NET_CHUNKEDINPUTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1E957D60)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E9587C0)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1E958020)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_ONREAD_OFFSET UNITYSDK_OFFSET(0x1E958410)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1E957D30)
#define SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E957C50)

namespace System::Net
{
	inline static constexpr unsigned int ChunkedInputStream_TypeDefinitionIndex = 2825;

	class ChunkedInputStream : public ::System::Net::RequestStream
	{
	public:
		::System::Net::HttpListenerContext* context; // 0x50
		::System::Net::MonoChunkStream* decoder; // 0x58
		::System::Boolean no_more_data; // 0x60
		::System::Boolean disposed; // 0x61

		::System::Void _ctor(::System::Net::HttpListenerContext* a1, ::System::IO::Stream* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnRead(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_ONREAD_OFFSET))(this, a1);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_CLOSE_OFFSET))(this);
		}
	};
}
