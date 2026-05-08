#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class WebClient; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AAA5BF0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AAA5C30)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAA5C70)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AAA5D30)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AAA5D60)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AAA5D90)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AAA59E0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AAA5A10)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AAA5A70)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AAA5A40)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AAA5B60)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AAA5B90)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AAA5AA0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AAA5B00)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AAA5DC0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AAA5DF0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAA5E20)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AAA5BC0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AAA5AD0)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AAA5B30)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AAA5E50)
#define SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5970)

namespace System::Net
{
	inline static constexpr unsigned int WebClient_WebClientWriteStream_TypeDefinitionIndex = 3446;

	class WebClient_WebClientWriteStream : public ::System::IO::Stream
	{
	public:
		::System::Net::WebRequest* m_request; // 0x28
		::System::Net::WebClient* m_WebClient; // 0x30
		::System::IO::Stream* m_stream; // 0x38

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Net::WebRequest* request, ::System::Net::WebClient* webClient)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::WebRequest*, ::System::Net::WebClient*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM__CTOR_OFFSET))(this, stream, request, webClient);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 EndRead(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_ENDREAD_OFFSET))(this, result);
		}

		::System::Void EndWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_ENDWRITE_OFFSET))(this, result);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_WEBCLIENTWRITESTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
