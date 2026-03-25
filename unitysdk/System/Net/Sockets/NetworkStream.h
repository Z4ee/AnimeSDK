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

#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1870C080)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1870C8A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870BEA0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1870C540)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1870CD60)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1870C070)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1870D0C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1870AED0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1870AEE0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1870AEF0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1870B440)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1870B4A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1870AF00)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1870B2D0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_INITNETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1870AD30)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1870B5C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1870B560)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1870D0D0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x1870B240)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1870B500)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1870B170)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1870B370)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1870BA30)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1870AE40)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1870AC90)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int NetworkStream_TypeDefinitionIndex = 2887;

	class NetworkStream : public ::System::IO::Stream
	{
	public:
		::System::Net::Sockets::Socket* m_StreamSocket; // 0x28
		::System::Int32 m_CurrentWriteTimeout; // 0x30
		::System::Int32 m_CloseTimeout; // 0x34
		::System::Int32 m_CurrentReadTimeout; // 0x38
		::System::Boolean m_Writeable; // 0x3C
		::System::Boolean m_CleanedUp; // 0x3D
		::System::Boolean m_Readable; // 0x3E
		::System::Boolean m_OwnsSocket; // 0x3F

		::System::Void _ctor(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET))(this, socket);
		}

		::System::Void _ctor_1(::System::Net::Sockets::Socket* socket, ::System::Boolean ownsSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET))(this, socket, ownsSocket);
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

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void InitNetworkStream(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess Access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_INITNETWORKSTREAM_OFFSET))(this, socket, Access);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, ::System::Int32 timeout, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET))(this, mode, timeout, silent);
		}
	};
}
