#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/SocketInformationOptions.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class EndPoint; }

#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x99A6E0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x99A700)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x99A6C0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x246290)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x99A720)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x99A6F0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x99A710)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x99A6D0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x99A730)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketInformation_TypeDefinitionIndex = 3666;

	struct alignas(8) SocketInformation
	{
		::Il2CppArray<::System::Byte>* protocolInformation; // 0x10
		::System::Net::Sockets::SocketInformationOptions options; // 0x18
		::System::Net::EndPoint* remoteEndPoint; // 0x20

		::Il2CppArray<::System::Byte>* get_ProtocolInformation()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_PROTOCOLINFORMATION_OFFSET))(this);
		}

		::System::Void set_ProtocolInformation(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_PROTOCOLINFORMATION_OFFSET))(this, value);
		}

		::System::Net::Sockets::SocketInformationOptions get_Options()
		{
			return ((::System::Net::Sockets::SocketInformationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Net::Sockets::SocketInformationOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketInformationOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNonBlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISNONBLOCKING_OFFSET))(this);
		}

		::System::Void set_IsNonBlocking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISNONBLOCKING_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISCONNECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsListening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISLISTENING_OFFSET))(this);
		}

		::System::Void set_IsListening(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISLISTENING_OFFSET))(this, value);
		}

		::System::Boolean get_UseOnlyOverlappedIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_USEONLYOVERLAPPEDIO_OFFSET))(this);
		}

		::System::Void set_UseOnlyOverlappedIO(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_USEONLYOVERLAPPEDIO_OFFSET))(this, value);
		}

		::System::Net::EndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Void set_RemoteEndPoint(::System::Net::EndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_REMOTEENDPOINT_OFFSET))(this, value);
		}
	};
}
