#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/MultipleConnectAsync_State.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System::Net { class DnsEndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }

#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_ASYNCFAIL_OFFSET UNITYSDK_OFFSET(0x1E28E8A0)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_ATTEMPTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1E28E110)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_CALLASYNCFAIL_OFFSET UNITYSDK_OFFSET(0x1E28EAC0)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_CANCEL_OFFSET UNITYSDK_OFFSET(0x1E28E970)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_DNSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E28E020)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_DODNSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E28DC90)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_FAIL_OFFSET UNITYSDK_OFFSET(0x1E28E3F0)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_INTERNALCONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E28E450)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_STARTCONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1E28D8E0)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_SUCCEED_OFFSET UNITYSDK_OFFSET(0x1E28E780)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_SYNCFAIL_OFFSET UNITYSDK_OFFSET(0x1E28DB40)
#define SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28EC40)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int MultipleConnectAsync_TypeDefinitionIndex = 3678;

	class MultipleConnectAsync : public ::System::Object
	{
	public:
		::System::Object* lockObject; // 0x10
		::System::Net::Sockets::SocketAsyncEventArgs* internalArgs; // 0x18
		::Il2CppArray<::System::Net::IPAddress*>* addressList; // 0x20
		::System::Net::DnsEndPoint* endPoint; // 0x28
		::System::Net::Sockets::SocketAsyncEventArgs* userArgs; // 0x30
		::System::Int32 nextAddress; // 0x38
		::System::Net::Sockets::MultipleConnectAsync_State state; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC__CTOR_OFFSET))(this);
		}

		::System::Boolean StartConnectAsync(::System::Net::Sockets::SocketAsyncEventArgs* args, ::System::Net::DnsEndPoint* endPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::Net::DnsEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_STARTCONNECTASYNC_OFFSET))(this, args, endPoint);
		}

		::System::Void DnsCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_DNSCALLBACK_OFFSET))(this, result);
		}

		::System::Boolean DoDnsCallback(::System::IAsyncResult* result, ::System::Boolean sync)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_DODNSCALLBACK_OFFSET))(this, result, sync);
		}

		::System::Void InternalConnectCallback(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_INTERNALCONNECTCALLBACK_OFFSET))(this, sender, args);
		}

		::System::Exception* AttemptConnection()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_ATTEMPTCONNECTION_OFFSET))(this);
		}

		::System::Void Succeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_SUCCEED_OFFSET))(this);
		}

		::System::Boolean Fail(::System::Boolean sync, ::System::Exception* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_FAIL_OFFSET))(this, sync, e);
		}

		::System::Void SyncFail(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_SYNCFAIL_OFFSET))(this, e);
		}

		::System::Void AsyncFail(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_ASYNCFAIL_OFFSET))(this, e);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_CANCEL_OFFSET))(this);
		}

		::System::Void CallAsyncFail(::System::Object* ignored)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLECONNECTASYNC_CALLASYNCFAIL_OFFSET))(this, ignored);
		}
	};
}
