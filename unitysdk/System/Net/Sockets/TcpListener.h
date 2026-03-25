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

#define SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x18719CB0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x18719D50)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTTCPCLIENT_OFFSET UNITYSDK_OFFSET(0x18719DE0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x187198F0)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_PENDING_OFFSET UNITYSDK_OFFSET(0x18719C30)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_START_1_OFFSET UNITYSDK_OFFSET(0x18719930)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_START_OFFSET UNITYSDK_OFFSET(0x18719920)
#define SYSTEM_NET_SOCKETS_TCPLISTENER_STOP_OFFSET UNITYSDK_OFFSET(0x18719A90)
#define SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18719770)
#define SYSTEM_NET_SOCKETS_TCPLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x187196C0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TcpListener_TypeDefinitionIndex = 2903;

	class TcpListener : public ::System::Object
	{
	public:
		::System::Net::Sockets::Socket* m_ServerSocket; // 0x10
		::System::Net::IPEndPoint* m_ServerSocketEP; // 0x18
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

		::System::Net::EndPoint* get_LocalEndpoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_GET_LOCALENDPOINT_OFFSET))(this);
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

		::System::Net::Sockets::TcpClient* AcceptTcpClient()
		{
			return ((::System::Net::Sockets::TcpClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ACCEPTTCPCLIENT_OFFSET))(this);
		}

		::System::IAsyncResult* BeginAcceptTcpClient(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_BEGINACCEPTTCPCLIENT_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::TcpClient* EndAcceptTcpClient(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::TcpClient*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPLISTENER_ENDACCEPTTCPCLIENT_OFFSET))(this, asyncResult);
		}
	};
}
