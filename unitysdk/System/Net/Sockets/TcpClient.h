#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Net/Sockets/SocketOptionLevel.h"
#include "unitysdk/System/Net/Sockets/SocketOptionName.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class LingerOption; }
namespace System::Net::Sockets { class NetworkStream; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_1_OFFSET UNITYSDK_OFFSET(0x1C715260)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_2_OFFSET UNITYSDK_OFFSET(0x1C715280)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1C715240)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C715860)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C715430)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_2_OFFSET UNITYSDK_OFFSET(0x1C715590)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1C7152D0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x1C715070)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_2_OFFSET UNITYSDK_OFFSET(0x1C714F90)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_3_OFFSET UNITYSDK_OFFSET(0x1C715210)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C714300)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C715880)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7158A0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x1C7152A0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C715AD0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1C7156F0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1C714DD0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C714DF0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1C714DB0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1C714E10)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1C714E30)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_LINGERSTATE_OFFSET UNITYSDK_OFFSET(0x1C715D10)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1C715DD0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C715B40)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C715C90)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_SENDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C715C50)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_GET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C715CD0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C713F50)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_NUMERICOPTION_OFFSET UNITYSDK_OFFSET(0x1C715B50)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1C714DE0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1C714DC0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1C714F00)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_LINGERSTATE_OFFSET UNITYSDK_OFFSET(0x1C715DA0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1C715DF0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C715C20)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C715CA0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_SENDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C715C60)
#define SYSTEM_NET_SOCKETS_TCPCLIENT_SET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C715CE0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C713FB0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C714050)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C714170)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C714DA0)
#define SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C713E40)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TcpClient_TypeDefinitionIndex = 3672;

	class TcpClient : public ::System::Object
	{
	public:
		::System::Net::Sockets::NetworkStream* m_DataStream; // 0x10
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x18
		::System::Net::Sockets::AddressFamily m_Family; // 0x20
		::System::Boolean m_Active; // 0x24
		::System::Boolean m_CleanedUp; // 0x25

		::System::Void _ctor(::System::Net::IPEndPoint* localEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_OFFSET))(this, localEP);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_2_OFFSET))(this, family);
		}

		::System::Void _ctor_3(::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_3_OFFSET))(this, hostname, port);
		}

		::System::Void _ctor_4(::System::Net::Sockets::Socket* acceptedSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT__CTOR_4_OFFSET))(this, acceptedSocket);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CLIENT_OFFSET))(this);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_CLIENT_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_ACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_CONNECTED_OFFSET))(this);
		}

		::System::Boolean get_ExclusiveAddressUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_EXCLUSIVEADDRESSUSE_OFFSET))(this);
		}

		::System::Void set_ExclusiveAddressUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, value);
		}

		::System::Void Connect(::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_OFFSET))(this, hostname, port);
		}

		::System::Void Connect_1(::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_1_OFFSET))(this, address, port);
		}

		::System::Void Connect_2(::System::Net::IPEndPoint* remoteEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_2_OFFSET))(this, remoteEP);
		}

		::System::Void Connect_3(::Il2CppArray<::System::Net::IPAddress*>* ipAddresses, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECT_3_OFFSET))(this, ipAddresses, port);
		}

		::System::IAsyncResult* BeginConnect(::System::String* host, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_OFFSET))(this, host, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginConnect_1(::System::Net::IPAddress* address, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_1_OFFSET))(this, address, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginConnect_2(::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_BEGINCONNECT_2_OFFSET))(this, addresses, port, requestCallback, state);
		}

		::System::Void EndConnect(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_ENDCONNECT_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task* ConnectAsync(::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_OFFSET))(this, address, port);
		}

		::System::Threading::Tasks::Task* ConnectAsync_1(::System::String* host, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_1_OFFSET))(this, host, port);
		}

		::System::Threading::Tasks::Task* ConnectAsync_2(::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_CONNECTASYNC_2_OFFSET))(this, addresses, port);
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

		::System::Int32 get_ReceiveBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_RECEIVEBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_ReceiveBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_RECEIVEBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_SendBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_SENDBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_SendBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_SENDBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_ReceiveTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_RECEIVETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReceiveTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_RECEIVETIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_SendTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_SENDTIMEOUT_OFFSET))(this);
		}

		::System::Void set_SendTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_SENDTIMEOUT_OFFSET))(this, value);
		}

		::System::Net::Sockets::LingerOption* get_LingerState()
		{
			return ((::System::Net::Sockets::LingerOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_LINGERSTATE_OFFSET))(this);
		}

		::System::Void set_LingerState(::System::Net::Sockets::LingerOption* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::LingerOption*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_LINGERSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_NoDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_GET_NODELAY_OFFSET))(this);
		}

		::System::Void set_NoDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_SET_NODELAY_OFFSET))(this, value);
		}

		::System::Void initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_INITIALIZE_OFFSET))(this);
		}

		::System::Int32 numericOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_TCPCLIENT_NUMERICOPTION_OFFSET))(this, optionLevel, optionName);
		}
	};
}
