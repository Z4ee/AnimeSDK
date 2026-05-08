#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class FtpWebRequest; }

#define SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A2461F0)
#define SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A246930)
#define SYSTEM_NET_FTPDATASTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A245E20)
#define SYSTEM_NET_FTPDATASTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A245EB0)
#define SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A245F30)
#define SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1A2464A0)
#define SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1A246B30)
#define SYSTEM_NET_FTPDATASTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A246E50)
#define SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A245FB0)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A245CE0)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1A245D00)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A245CF0)
#define SYSTEM_NET_FTPDATASTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A245D10)
#define SYSTEM_NET_FTPDATASTREAM_GET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1A245E00)
#define SYSTEM_NET_FTPDATASTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A245D60)
#define SYSTEM_NET_FTPDATASTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A246060)
#define SYSTEM_NET_FTPDATASTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1A246610)
#define SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1A245FC0)
#define SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A246010)
#define SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A245DB0)
#define SYSTEM_NET_FTPDATASTREAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A246F10)
#define SYSTEM_NET_FTPDATASTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A246810)
#define SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1A246C50)
#define SYSTEM_NET_FTPDATASTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A245C40)

namespace System::Net
{
	inline static constexpr unsigned int FtpDataStream_TypeDefinitionIndex = 3512;

	class FtpDataStream : public ::System::IO::Stream
	{
	public:
		::System::Net::FtpWebRequest* request; // 0x28
		::System::IO::Stream* networkStream; // 0x30
		::System::Int32 totalRead; // 0x38
		::System::Boolean isRead; // 0x3C
		::System::Boolean disposed; // 0x3D

		::System::Void _ctor(::System::Net::FtpWebRequest* request, ::System::IO::Stream* stream, ::System::Boolean isRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM__CTOR_OFFSET))(this, request, stream, isRead);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::IO::Stream* get_NetworkStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_NETWORKSTREAM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READINTERNAL_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, cb, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEINTERNAL_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, cb, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_CHECKDISPOSED_OFFSET))(this);
		}
	};
}
