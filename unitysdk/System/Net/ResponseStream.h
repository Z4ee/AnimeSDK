#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class HttpListenerResponse; }

#define SYSTEM_NET_RESPONSESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1C8A4C00)
#define SYSTEM_NET_RESPONSESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C8A4400)
#define SYSTEM_NET_RESPONSESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C8A33B0)
#define SYSTEM_NET_RESPONSESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1C8A4C50)
#define SYSTEM_NET_RESPONSESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1C8A49B0)
#define SYSTEM_NET_RESPONSESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C8A3C00)
#define SYSTEM_NET_RESPONSESTREAM_GETCHUNKSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C8A3A00)
#define SYSTEM_NET_RESPONSESTREAM_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1C8A3830)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C8A3290)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C8A32A0)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C8A32B0)
#define SYSTEM_NET_RESPONSESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C8A32C0)
#define SYSTEM_NET_RESPONSESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C8A3310)
#define SYSTEM_NET_RESPONSESTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x1C8A3B70)
#define SYSTEM_NET_RESPONSESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C8A4BB0)
#define SYSTEM_NET_RESPONSESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C8A4CA0)
#define SYSTEM_NET_RESPONSESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8A4CF0)
#define SYSTEM_NET_RESPONSESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C8A3360)
#define SYSTEM_NET_RESPONSESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C8A3C10)
#define SYSTEM_NET_RESPONSESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A4D40)
#define SYSTEM_NET_RESPONSESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A3220)

namespace System::Net
{
	inline static constexpr unsigned int ResponseStream_TypeDefinitionIndex = 3552;

	class ResponseStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_crlf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ResponseStream_TypeDefinitionIndex)->GetStaticField(0x30A0);
		}
		::System::Net::HttpListenerResponse* response; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Boolean ignore_errors; // 0x38
		::System::Boolean trailer_sent; // 0x39
		::System::Boolean disposed; // 0x3A

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Net::HttpListenerResponse* response, ::System::Boolean ignore_errors)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::HttpListenerResponse*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM__CTOR_OFFSET))(this, stream, response, ignore_errors);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM__CCTOR_OFFSET))();
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_CLOSE_OFFSET))(this);
		}

		::System::IO::MemoryStream* GetHeaders(::System::Boolean closing)
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GETHEADERS_OFFSET))(this, closing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_FLUSH_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GetChunkSizeBytes(::System::Int32 size, ::System::Boolean final)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GETCHUNKSIZEBYTES_OFFSET))(size, final);
		}

		::System::Void InternalWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_INTERNALWRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* cback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, cback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_ENDWRITE_OFFSET))(this, ares);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* cback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, cback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* ares)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_ENDREAD_OFFSET))(this, ares);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SETLENGTH_OFFSET))(this, value);
		}
	};
}
