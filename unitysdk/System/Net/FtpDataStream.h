#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class FtpWebRequest; }

#define SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AF73DE0)
#define SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AF74600)
#define SYSTEM_NET_FTPDATASTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1AF73FD0)
#define SYSTEM_NET_FTPDATASTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF73880)
#define SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF738F0)
#define SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AF740E0)
#define SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AF74870)
#define SYSTEM_NET_FTPDATASTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AF74BA0)
#define SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AF73960)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AF73760)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AF73780)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AF73770)
#define SYSTEM_NET_FTPDATASTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AF73790)
#define SYSTEM_NET_FTPDATASTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF737E0)
#define SYSTEM_NET_FTPDATASTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF73A10)
#define SYSTEM_NET_FTPDATASTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AF74240)
#define SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AF73970)
#define SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF739C0)
#define SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF73830)
#define SYSTEM_NET_FTPDATASTREAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF74C60)
#define SYSTEM_NET_FTPDATASTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF74440)
#define SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AF749A0)
#define SYSTEM_NET_FTPDATASTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF736C0)

namespace System::Net
{
	inline static constexpr unsigned int FtpDataStream_TypeDefinitionIndex = 2827;

	class FtpDataStream : public ::System::IO::Stream
	{
	public:
		::System::Net::FtpWebRequest* request; // 0x28
		::System::IO::Stream* networkStream; // 0x30
		::System::Boolean disposed; // 0x38
		::System::Boolean isRead; // 0x39
		::System::Int32 totalRead; // 0x3C

		::System::Void _ctor(::System::Net::FtpWebRequest* a1, ::System::IO::Stream* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_CHECKDISPOSED_OFFSET))(this);
		}
	};
}
