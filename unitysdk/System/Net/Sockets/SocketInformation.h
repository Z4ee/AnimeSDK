#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/SocketInformationOptions.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class EndPoint; }

#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8FEC20)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x8FEC40)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x8FEC00)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x381840)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_GET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x8FEC60)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8FEC30)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x8FEC50)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_ISNONBLOCKING_OFFSET UNITYSDK_OFFSET(0x8FEC10)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_PROTOCOLINFORMATION_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x381850)
#define SYSTEM_NET_SOCKETS_SOCKETINFORMATION_SET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x8FEC70)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketInformation_TypeDefinitionIndex = 3667;

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
