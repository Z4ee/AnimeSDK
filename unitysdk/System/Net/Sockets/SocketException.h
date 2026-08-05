#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C8858D0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C8858E0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_GET_SOCKETERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C885970)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION_WSAGETLASTERROR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C885520)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8855C0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8856C0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C883000)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C885780)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C884E80)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C8857F0)
#define SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C885550)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketException_TypeDefinitionIndex = 3640;

	class SocketException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Net::EndPoint* m_EndPoint; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 error, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_1_OFFSET))(this, error, message);
		}

		::System::Void _ctor_2(::System::Net::EndPoint* endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_2_OFFSET))(this, endPoint);
		}

		::System::Void _ctor_3(::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_3_OFFSET))(this, errorCode);
		}

		::System::Void _ctor_4(::System::Int32 errorCode, ::System::Net::EndPoint* endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_4_OFFSET))(this, errorCode, endPoint);
		}

		::System::Void _ctor_5(::System::Net::Sockets::SocketError socketError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_5_OFFSET))(this, socketError);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETEXCEPTION__CTOR_6_OFFSET))(this, serializationInfo, streamingContext);
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
