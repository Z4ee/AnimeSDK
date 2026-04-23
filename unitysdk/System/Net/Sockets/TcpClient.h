#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net::Sockets { class NetworkStream; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1A153A30)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A153BC0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A153BE0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A153C00)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x1A153A50)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A153E80)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1A153A80)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1A1539F0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1A153A10)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A153980)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1A153A00)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A153860)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A1539E0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1537C0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TcpClient_TypeDefinitionIndex = 2903;

	class TcpClient : public ::System::Object
	{
	public:
		::System::Net::Sockets::NetworkStream* m_DataStream; // 0x10
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x18
		::System::Net::Sockets::AddressFamily m_Family; // 0x20
		::System::Boolean m_Active; // 0x24
		::System::Boolean m_CleanedUp; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_1_OFFSET))(this, family);
		}

		::System::Void _ctor_2(::System::Net::Sockets::Socket* acceptedSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_2_OFFSET))(this, acceptedSocket);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET))(this);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET))(this, value);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET))(this);
		}

		::System::IAsyncResult* BeginConnect(::System::String* host, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET))(this, host, port, requestCallback, state);
		}

		::System::Void EndConnect(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET))(this, asyncResult);
		}

		::System::Net::Sockets::NetworkStream* GetStream()
		{
			return ((::System::Net::Sockets::NetworkStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GETSTREAM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_FINALIZE_OFFSET))(this);
		}

		::System::Void initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET))(this);
		}
	};
}
