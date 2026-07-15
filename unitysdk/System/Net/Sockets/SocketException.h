#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x19EF1E10)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x19EF1E20)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_SOCKETERRORCODE_OFFSET UNITYSDK_OFFSET(0x19EEF680)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_WSAGETLASTERROR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19EF1C80)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EF1CB0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19EE6A30)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19EE3100)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19EF1D50)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE7370)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketException_TypeDefinitionIndex = 2886;

	class SocketException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Net::EndPoint* m_EndPoint; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Net::Sockets::SocketError a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 WSAGetLastError_internal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_WSAGETLASTERROR_INTERNAL_OFFSET))();
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Net::Sockets::SocketError get_SocketErrorCode()
		{
			return ((::System::Net::Sockets::SocketError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_SOCKETERRORCODE_OFFSET))(this);
		}
	};
}
