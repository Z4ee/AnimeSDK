#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTSOCKETASYNC_OFFSET UNITYSDK_OFFSET(0x1A25F390)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1A25EF90)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x1A25F4A0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x1A25F010)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ALLOWNATTRAVERSAL_OFFSET UNITYSDK_OFFSET(0x1A25EAA0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1A25F0B0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x1A25F210)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A25E700)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1A25F140)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x1A25F2A0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A25E8A0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_GET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1A25E8E0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A25E8B0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_GET_SERVER_OFFSET UNITYSDK_OFFSET(0x1A25E890)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_PENDING_OFFSET UNITYSDK_OFFSET(0x1A25EF10)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1A25E9A0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_START_1_OFFSET UNITYSDK_OFFSET(0x1A25EC70)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_START_OFFSET UNITYSDK_OFFSET(0x1A25EC60)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_STOP_OFFSET UNITYSDK_OFFSET(0x1A25EDD0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A25E440)
#define SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A25E5B0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25E390)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TcpListener_TypeDefinitionIndex = 3674;

	class TcpListener : public ::System::Object
	{
	public:
		::System::Net::IPEndPoint* m_ServerSocketEP; // 0x10
		::System::Net::Sockets::Socket* m_ServerSocket; // 0x18
		::System::Boolean m_ExclusiveAddressUse; // 0x20
		::System::Boolean m_Active; // 0x21

		::System::Void _ctor(::System::Net::IPEndPoint* localEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_OFFSET))(this, localEP);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* localaddr, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_1_OFFSET))(this, localaddr, port);
		}

		::System::Void _ctor_2(::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_2_OFFSET))(this, port);
		}

		static ::System::Net::Sockets::TcpListener* Create(::System::Int32 port)
		{
			return ((::System::Net::Sockets::TcpListener*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_CREATE_OFFSET))(port);
		}

		::System::Net::Sockets::Socket* get_Server()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_GET_SERVER_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_GET_ACTIVE_OFFSET))(this);
		}

		::System::Net::EndPoint* get_LocalEndpoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Boolean get_ExclusiveAddressUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_GET_EXCLUSIVEADDRESSUSE_OFFSET))(this);
		}

		::System::Void set_ExclusiveAddressUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, value);
		}

		::System::Void AllowNatTraversal(::System::Boolean allowed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ALLOWNATTRAVERSAL_OFFSET))(this, allowed);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_START_OFFSET))(this);
		}

		::System::Void Start_1(::System::Int32 backlog)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_START_1_OFFSET))(this, backlog);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_STOP_OFFSET))(this);
		}

		::System::Boolean Pending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_PENDING_OFFSET))(this);
		}

		::System::Net::Sockets::Socket* AcceptSocket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTSOCKET_OFFSET))(this);
		}

		::System::Net::Sockets::TcpClient* AcceptTcpClient()
		{
			return ((::System::Net::Sockets::TcpClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENT_OFFSET))(this);
		}

		::System::IAsyncResult* BeginAcceptSocket(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTSOCKET_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::Socket* EndAcceptSocket(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTSOCKET_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginAcceptTcpClient(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTTCPCLIENT_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::TcpClient* EndAcceptTcpClient(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::TcpClient*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTTCPCLIENT_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* AcceptSocketAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTSOCKETASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Sockets::TcpClient*>* AcceptTcpClientAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::TcpClient*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENTASYNC_OFFSET))(this);
		}
	};
}
