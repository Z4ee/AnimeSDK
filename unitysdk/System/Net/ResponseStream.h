#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class HttpListenerResponse; }

#define SYSTEM_NET_RESPONSESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A585950)
#define SYSTEM_NET_RESPONSESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A585150)
#define SYSTEM_NET_RESPONSESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A584100)
#define SYSTEM_NET_RESPONSESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1A5859A0)
#define SYSTEM_NET_RESPONSESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1A585700)
#define SYSTEM_NET_RESPONSESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A584950)
#define SYSTEM_NET_RESPONSESTREAM_GETCHUNKSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A584750)
#define SYSTEM_NET_RESPONSESTREAM_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1A584580)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A583FE0)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1A583FF0)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A584000)
#define SYSTEM_NET_RESPONSESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A584010)
#define SYSTEM_NET_RESPONSESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A584060)
#define SYSTEM_NET_RESPONSESTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x1A5848C0)
#define SYSTEM_NET_RESPONSESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1A585900)
#define SYSTEM_NET_RESPONSESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1A5859F0)
#define SYSTEM_NET_RESPONSESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A585A40)
#define SYSTEM_NET_RESPONSESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A5840B0)
#define SYSTEM_NET_RESPONSESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1A584960)
#define SYSTEM_NET_RESPONSESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A585A90)
#define SYSTEM_NET_RESPONSESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A583F70)

namespace System::Net
{
	inline static constexpr unsigned int ResponseStream_TypeDefinitionIndex = 3553;

	class ResponseStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_crlf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ResponseStream_TypeDefinitionIndex)->GetStaticField(0x30A0);
		}
		::System::Net::HttpListenerResponse* response; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Boolean disposed; // 0x38
		::System::Boolean ignore_errors; // 0x39
		::System::Boolean trailer_sent; // 0x3A

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
