#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AFB8130)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AFB7D90)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x1AFB7F70)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET UNITYSDK_OFFSET(0x1AFB7D10)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AFB7EC0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFB7EA0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET UNITYSDK_OFFSET(0x1AFB7DB0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1AFB7D50)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x1AFB8210)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1AFB7D60)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AFB7D70)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFB7C00)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB7B80)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int UdpClient_TypeDefinitionIndex = 2905;

	class UdpClient : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x10
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x18
		::System::Boolean m_Active; // 0x20
		::System::Boolean m_IsBroadcast; // 0x21
		::System::Boolean m_CleanedUp; // 0x22
		::System::Net::Sockets::AddressFamily m_Family; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET))(this);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET))(this, a1);
		}

		::System::Void set_EnableBroadcast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET))(this);
		}

		::System::Void FreeResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Connect(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET))(this, a1);
		}

		::System::Void CheckForBroadcast(::System::Net::IPAddress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET))(this, a1);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET))(this, a1, a2);
		}

		::System::Void createClientSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET))(this);
		}
	};
}
