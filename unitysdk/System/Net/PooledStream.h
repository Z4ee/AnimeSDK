#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Net/Sockets/SelectMode.h"
#include "unitysdk/System/Net/Sockets/SocketShutdown.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class WeakReference; }
namespace System::Net { class BufferOffsetSize; }
namespace System::Net { class ConnectionPool; }
namespace System::Net { class GeneralAsyncDelegate; }
namespace System::Net { class IPAddress; }
namespace System::Net { class ServicePoint; }
namespace System::Net::Sockets { class NetworkStream; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_POOLEDSTREAM_ACTIVATE_1_OFFSET UNITYSDK_OFFSET(0x1D899F30)
#define SYSTEM_NET_POOLEDSTREAM_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D899F20)
#define SYSTEM_NET_POOLEDSTREAM_BEGINMULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1D89AAB0)
#define SYSTEM_NET_POOLEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D89A9B0)
#define SYSTEM_NET_POOLEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D89AA30)
#define SYSTEM_NET_POOLEDSTREAM_CHECKLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D89A0B0)
#define SYSTEM_NET_POOLEDSTREAM_CLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x1D89A8A0)
#define SYSTEM_NET_POOLEDSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D89A8F0)
#define SYSTEM_NET_POOLEDSTREAM_CONNECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D89A100)
#define SYSTEM_NET_POOLEDSTREAM_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D89A050)
#define SYSTEM_NET_POOLEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D89A7F0)
#define SYSTEM_NET_POOLEDSTREAM_ENDMULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1D89AAE0)
#define SYSTEM_NET_POOLEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1D89AA10)
#define SYSTEM_NET_POOLEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D89AA90)
#define SYSTEM_NET_POOLEDSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1D89AB20)
#define SYSTEM_NET_POOLEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D89AB10)
#define SYSTEM_NET_POOLEDSTREAM_GET_CANBEPOOLED_OFFSET UNITYSDK_OFFSET(0x1D899D20)
#define SYSTEM_NET_POOLEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1D89A620)
#define SYSTEM_NET_POOLEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1D89A640)
#define SYSTEM_NET_POOLEDSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D89A670)
#define SYSTEM_NET_POOLEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D89A650)
#define SYSTEM_NET_POOLEDSTREAM_GET_ISEMANCIPATED_OFFSET UNITYSDK_OFFSET(0x1D899DA0)
#define SYSTEM_NET_POOLEDSTREAM_GET_ISINITALIZING_OFFSET UNITYSDK_OFFSET(0x1D899D10)
#define SYSTEM_NET_POOLEDSTREAM_GET_JUSTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1D899CF0)
#define SYSTEM_NET_POOLEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D89A700)
#define SYSTEM_NET_POOLEDSTREAM_GET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1D89A5E0)
#define SYSTEM_NET_POOLEDSTREAM_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1D899DE0)
#define SYSTEM_NET_POOLEDSTREAM_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D899EF0)
#define SYSTEM_NET_POOLEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D89A720)
#define SYSTEM_NET_POOLEDSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D89A680)
#define SYSTEM_NET_POOLEDSTREAM_GET_SERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x1D899D00)
#define SYSTEM_NET_POOLEDSTREAM_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1D899F00)
#define SYSTEM_NET_POOLEDSTREAM_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x1D89A600)
#define SYSTEM_NET_POOLEDSTREAM_GET_USINGSECURESTREAM_OFFSET UNITYSDK_OFFSET(0x1D89A5D0)
#define SYSTEM_NET_POOLEDSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D89A6C0)
#define SYSTEM_NET_POOLEDSTREAM_MULTIPLEWRITE_OFFSET UNITYSDK_OFFSET(0x1D89A7C0)
#define SYSTEM_NET_POOLEDSTREAM_POLLREAD_OFFSET UNITYSDK_OFFSET(0x1D89AC70)
#define SYSTEM_NET_POOLEDSTREAM_POLL_OFFSET UNITYSDK_OFFSET(0x1D89AC50)
#define SYSTEM_NET_POOLEDSTREAM_POSTPOP_OFFSET UNITYSDK_OFFSET(0x1D89A400)
#define SYSTEM_NET_POOLEDSTREAM_PREPUSH_OFFSET UNITYSDK_OFFSET(0x1D89A250)
#define SYSTEM_NET_POOLEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1D89A780)
#define SYSTEM_NET_POOLEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1D89A760)
#define SYSTEM_NET_POOLEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D89AB90)
#define SYSTEM_NET_POOLEDSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x1D89ABB0)
#define SYSTEM_NET_POOLEDSTREAM_SET_CANBEPOOLED_OFFSET UNITYSDK_OFFSET(0x1D899D90)
#define SYSTEM_NET_POOLEDSTREAM_SET_NETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x1D89A5F0)
#define SYSTEM_NET_POOLEDSTREAM_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1D899E20)
#define SYSTEM_NET_POOLEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D89A740)
#define SYSTEM_NET_POOLEDSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D89A6A0)
#define SYSTEM_NET_POOLEDSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D89A6E0)
#define SYSTEM_NET_POOLEDSTREAM_UNSAFEBEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D89A9D0)
#define SYSTEM_NET_POOLEDSTREAM_UNSAFEBEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D89AA50)
#define SYSTEM_NET_POOLEDSTREAM_UPDATELIFETIME_OFFSET UNITYSDK_OFFSET(0x1D89A220)
#define SYSTEM_NET_POOLEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D89A7A0)
#define SYSTEM_NET_POOLEDSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D899BE0)
#define SYSTEM_NET_POOLEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D899AB0)

namespace System::Net
{
	inline static constexpr unsigned int PooledStream_TypeDefinitionIndex = 3383;

	class PooledStream : public ::System::IO::Stream
	{
	public:
		::System::Net::ConnectionPool* m_ConnectionPool; // 0x28
		::System::Net::IPAddress* m_ServerAddress; // 0x30
		::System::Net::Sockets::Socket* m_AbortSocket6; // 0x38
		::System::WeakReference* m_Owner; // 0x40
		::System::Net::Sockets::NetworkStream* m_NetworkStream; // 0x48
		::System::Net::GeneralAsyncDelegate* m_AsyncCallback; // 0x50
		::System::Net::Sockets::Socket* m_AbortSocket; // 0x58
		::System::TimeSpan m_Lifetime; // 0x60
		::System::Boolean m_Initalizing; // 0x68
		::System::Boolean m_CheckLifetime; // 0x69
		::System::Boolean m_JustConnected; // 0x6A
		::System::Boolean m_ConnectionIsDoomed; // 0x6B
		::System::Int32 m_PooledCount; // 0x6C
		::System::DateTime m_CreateTime; // 0x70

		::System::Void _ctor(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM__CTOR_OFFSET))(this, owner);
		}

		::System::Void _ctor_1(::System::Net::ConnectionPool* connectionPool, ::System::TimeSpan lifetime, ::System::Boolean checkLifetime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ConnectionPool*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM__CTOR_1_OFFSET))(this, connectionPool, lifetime, checkLifetime);
		}

		::System::Boolean get_JustConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_JUSTCONNECTED_OFFSET))(this);
		}

		::System::Net::IPAddress* get_ServerAddress()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_SERVERADDRESS_OFFSET))(this);
		}

		::System::Boolean get_IsInitalizing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_ISINITALIZING_OFFSET))(this);
		}

		::System::Boolean get_CanBePooled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_CANBEPOOLED_OFFSET))(this);
		}

		::System::Void set_CanBePooled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_CANBEPOOLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmancipated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_ISEMANCIPATED_OFFSET))(this);
		}

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_OWNER_OFFSET))(this, value);
		}

		::System::Net::ConnectionPool* get_Pool()
		{
			return ((::System::Net::ConnectionPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_POOL_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Boolean Activate(::System::Object* owningObject, ::System::Net::GeneralAsyncDelegate* asyncCallback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Net::GeneralAsyncDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_ACTIVATE_OFFSET))(this, owningObject, asyncCallback);
		}

		::System::Boolean Activate_1(::System::Object* owningObject, ::System::Boolean async, ::System::Net::GeneralAsyncDelegate* asyncCallback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Net::GeneralAsyncDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_ACTIVATE_1_OFFSET))(this, owningObject, async, asyncCallback);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_DEACTIVATE_OFFSET))(this);
		}

		::System::Void ConnectionCallback(::System::Object* owningObject, ::System::Exception* e, ::System::Net::Sockets::Socket* socket, ::System::Net::IPAddress* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Exception*, ::System::Net::Sockets::Socket*, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_CONNECTIONCALLBACK_OFFSET))(this, owningObject, e, socket, address);
		}

		::System::Void CheckLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_CHECKLIFETIME_OFFSET))(this);
		}

		::System::Void UpdateLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_UPDATELIFETIME_OFFSET))(this);
		}

		::System::Void PrePush(::System::Object* expectedOwner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_PREPUSH_OFFSET))(this, expectedOwner);
		}

		::System::Void PostPop(::System::Object* newOwner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_POSTPOP_OFFSET))(this, newOwner);
		}

		::System::Boolean get_UsingSecureStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_USINGSECURESTREAM_OFFSET))(this);
		}

		::System::Net::Sockets::NetworkStream* get_NetworkStream()
		{
			return ((::System::Net::Sockets::NetworkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_NETWORKSTREAM_OFFSET))(this);
		}

		::System::Void set_NetworkStream(::System::Net::Sockets::NetworkStream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::NetworkStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_NETWORKSTREAM_OFFSET))(this, value);
		}

		::System::Net::Sockets::Socket* get_Socket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_SOCKET_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void MultipleWrite(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_MULTIPLEWRITE_OFFSET))(this, buffers);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void CloseSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_CLOSESOCKET_OFFSET))(this);
		}

		::System::Void Close(::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_CLOSE_OFFSET))(this, timeout);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_UNSAFEBEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_UNSAFEBEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginMultipleWrite(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_BEGINMULTIPLEWRITE_OFFSET))(this, buffers, callback, state);
		}

		::System::Void EndMultipleWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_ENDMULTIPLEWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, ::System::Int32 timeout, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_SETSOCKETTIMEOUTOPTION_OFFSET))(this, mode, timeout, silent);
		}

		::System::Boolean Poll(::System::Int32 microSeconds, ::System::Net::Sockets::SelectMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Net::Sockets::SelectMode))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_POLL_OFFSET))(this, microSeconds, mode);
		}

		::System::Boolean PollRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_POOLEDSTREAM_POLLREAD_OFFSET))(this);
		}
	};
}
