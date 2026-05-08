#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Net/Sockets/SelectMode.h"
#include "unitysdk/System/Net/Sockets/SocketShutdown.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class BufferOffsetSize; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINMULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1A332C00)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A331620)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A331FE0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A3314C0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_CONVERTTONOTSOCKETOWNER_OFFSET UNITYSDK_OFFSET(0x1A330440)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A331530)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDMULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1A333060)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1A331D00)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1A332700)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A3315F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1A3332F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A3332E0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A330530)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1A330540)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A330560)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A330550)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1A331600)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A330940)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_INTERNALSOCKET_OFFSET UNITYSDK_OFFSET(0x1A3302B0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A330A60)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A330AC0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READABLE_OFFSET UNITYSDK_OFFSET(0x1A3304F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A330570)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x1A3302A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITEABLE_OFFSET UNITYSDK_OFFSET(0x1A330510)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A3307A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_INITNETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1A32FEE0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_INTERNALABORTSOCKET_OFFSET UNITYSDK_OFFSET(0x1A330350)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_MULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1A3329E0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_POLLREAD_OFFSET UNITYSDK_OFFSET(0x1A330BE0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_POLL_OFFSET UNITYSDK_OFFSET(0x1A330C00)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1A330D20)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1A330B80)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A333350)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x1A330710)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A330B20)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READABLE_OFFSET UNITYSDK_OFFSET(0x1A330500)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A330640)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITEABLE_OFFSET UNITYSDK_OFFSET(0x1A330520)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A330870)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINMULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1A332E30)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A331A10)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A3323D0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1A3310F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A32FE40)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A32FFF0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A3300A0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A330150)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A3301F0)
#define SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32FDE0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int NetworkStream_TypeDefinitionIndex = 3649;

	class NetworkStream : public ::System::IO::Stream
	{
	public:
		::System::Net::Sockets::Socket* m_StreamSocket; // 0x28
		::System::Int32 m_CurrentReadTimeout; // 0x30
		::System::Int32 m_CloseTimeout; // 0x34
		::System::Int32 m_CurrentWriteTimeout; // 0x38
		::System::Boolean m_Writeable; // 0x3C
		::System::Boolean m_CleanedUp; // 0x3D
		::System::Boolean m_OwnsSocket; // 0x3E
		::System::Boolean m_Readable; // 0x3F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_1_OFFSET))(this, socket);
		}

		::System::Void _ctor_2(::System::Net::Sockets::Socket* socket, ::System::Boolean ownsSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_2_OFFSET))(this, socket, ownsSocket);
		}

		::System::Void _ctor_3(::System::Net::Sockets::NetworkStream* networkStream, ::System::Boolean ownsSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::NetworkStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_3_OFFSET))(this, networkStream, ownsSocket);
		}

		::System::Void _ctor_4(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_4_OFFSET))(this, socket, access);
		}

		::System::Void _ctor_5(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, ::System::Boolean ownsSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::IO::FileAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM__CTOR_5_OFFSET))(this, socket, access, ownsSocket);
		}

		::System::Net::Sockets::Socket* get_Socket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_SOCKET_OFFSET))(this);
		}

		::System::Net::Sockets::Socket* get_InternalSocket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_INTERNALSOCKET_OFFSET))(this);
		}

		::System::Void InternalAbortSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_INTERNALABORTSOCKET_OFFSET))(this);
		}

		::System::Void ConvertToNotSocketOwner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_CONVERTTONOTSOCKETOWNER_OFFSET))(this);
		}

		::System::Boolean get_Readable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_READABLE_OFFSET))(this);
		}

		::System::Void set_Readable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_READABLE_OFFSET))(this, value);
		}

		::System::Boolean get_Writeable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_WRITEABLE_OFFSET))(this);
		}

		::System::Void set_Writeable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_SET_WRITEABLE_OFFSET))(this, value);
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

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CANTIMEOUT_OFFSET))(this);
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

		::System::Boolean get_DataAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_DATAAVAILABLE_OFFSET))(this);
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

		::System::Boolean PollRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_POLLREAD_OFFSET))(this);
		}

		::System::Boolean Poll(::System::Int32 microSeconds, ::System::Net::Sockets::SelectMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Net::Sockets::SelectMode))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_POLL_OFFSET))(this, microSeconds, mode);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Close(::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_CLOSE_OFFSET))(this, timeout);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_GET_CONNECTED_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void MultipleWrite(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_MULTIPLEWRITE_OFFSET))(this, buffers);
		}

		::System::IAsyncResult* BeginMultipleWrite(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_BEGINMULTIPLEWRITE_OFFSET))(this, buffers, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginMultipleWrite(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_UNSAFEBEGINMULTIPLEWRITE_OFFSET))(this, buffers, callback, state);
		}

		::System::Void EndMultipleWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_ENDMULTIPLEWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_NETWORKSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
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
