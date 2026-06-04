#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Net/Sockets/SocketShutdown.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AFAA380)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AFAAB40)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFAA1A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AFAA800)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AFAAFC0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AFAA370)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AFAB300)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AFA9250)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AFA9260)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AFA9270)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AFA97C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AFA9820)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFA9280)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFA9650)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_INITNETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1AFA90E0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AFA9940)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AFA98E0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFAB310)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x1AFA95C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AFA9880)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFA94F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFA96F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AFA9D70)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFA91C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA9040)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int NetworkStream_TypeDefinitionIndex = 2888;

	class NetworkStream : public ::System::IO::Stream
	{
	public:
		::System::Net::Sockets::Socket* m_StreamSocket; // 0x28
		::System::Boolean m_CleanedUp; // 0x30
		::System::Boolean m_Readable; // 0x31
		::System::Boolean m_Writeable; // 0x32
		::System::Boolean m_OwnsSocket; // 0x33
		::System::Int32 m_CurrentWriteTimeout; // 0x34
		::System::Int32 m_CurrentReadTimeout; // 0x38
		::System::Int32 m_CloseTimeout; // 0x3C

		::System::Void _ctor(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Net::Sockets::Socket* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READTIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void InitNetworkStream(::System::Net::Sockets::Socket* a1, ::System::IO::FileAccess a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_INITNETWORKSTREAM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
