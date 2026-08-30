#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class HttpListenerResponse; }

#define SYSTEM_NET_RESPONSESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1E9AC6E0)
#define SYSTEM_NET_RESPONSESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1E9ABE40)
#define SYSTEM_NET_RESPONSESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E9AAF80)
#define SYSTEM_NET_RESPONSESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1E9AC730)
#define SYSTEM_NET_RESPONSESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1E9AC2D0)
#define SYSTEM_NET_RESPONSESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E9AB8C0)
#define SYSTEM_NET_RESPONSESTREAM_GETCHUNKSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1E9AB5D0)
#define SYSTEM_NET_RESPONSESTREAM_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1E9AB460)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1E9AAE60)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1E9AAE70)
#define SYSTEM_NET_RESPONSESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1E9AAE80)
#define SYSTEM_NET_RESPONSESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E9AAE90)
#define SYSTEM_NET_RESPONSESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E9AAEE0)
#define SYSTEM_NET_RESPONSESTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x1E9AB740)
#define SYSTEM_NET_RESPONSESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1E9AC690)
#define SYSTEM_NET_RESPONSESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1E9AC780)
#define SYSTEM_NET_RESPONSESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E9AC7D0)
#define SYSTEM_NET_RESPONSESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E9AAF30)
#define SYSTEM_NET_RESPONSESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1E9AB8D0)
#define SYSTEM_NET_RESPONSESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC820)
#define SYSTEM_NET_RESPONSESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E985740)

namespace System::Net
{
	inline static constexpr unsigned int ResponseStream_TypeDefinitionIndex = 2872;

	class ResponseStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_crlf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ResponseStream_TypeDefinitionIndex)->GetStaticField(0x1F0B0);
		}
		::System::IO::Stream* stream; // 0x28
		::System::Net::HttpListenerResponse* response; // 0x30
		::System::Boolean ignore_errors; // 0x38
		::System::Boolean trailer_sent; // 0x39
		::System::Boolean disposed; // 0x3A

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Net::HttpListenerResponse* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::HttpListenerResponse*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_CLOSE_OFFSET))(this);
		}

		::System::IO::MemoryStream* GetHeaders(::System::Boolean a1)
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GETHEADERS_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_FLUSH_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GetChunkSizeBytes(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_GETCHUNKSIZEBYTES_OFFSET))(a1, a2);
		}

		::System::Void InternalWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_INTERNALWRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSESTREAM_SETLENGTH_OFFSET))(this, a1);
		}
	};
}
