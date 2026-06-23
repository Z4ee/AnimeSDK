#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Net/WebSockets/WebSocketError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CEDC1D0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CEDC920)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1CEDC940)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GET_WEBSOCKETERRORCODE_OFFSET UNITYSDK_OFFSET(0x1CEDC950)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_SETERRORCODEONERROR_OFFSET UNITYSDK_OFFSET(0x1CEDC470)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_SUCCEEDED_OFFSET UNITYSDK_OFFSET(0x1CEDC460)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1CEDC730)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1CEDC7C0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1CEDC850)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1CEDC8B0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEDC160)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CEDC370)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CEDBEB0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CEDC3E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CEDC0E0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1CEDC480)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1CEDC5A0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1CEDC630)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1CEDC6B0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDC020)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketException_TypeDefinitionIndex = 3902;

	class WebSocketException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Net::WebSockets::WebSocketError _webSocketErrorCode; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::WebSockets::WebSocketError error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_1_OFFSET))(this, error);
		}

		::System::Void _ctor_2(::System::Net::WebSockets::WebSocketError error, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_2_OFFSET))(this, error, message);
		}

		::System::Void _ctor_3(::System::Net::WebSockets::WebSocketError error, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_3_OFFSET))(this, error, innerException);
		}

		::System::Void _ctor_4(::System::Net::WebSockets::WebSocketError error, ::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_4_OFFSET))(this, error, message, innerException);
		}

		::System::Void _ctor_5(::System::Int32 nativeError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_5_OFFSET))(this, nativeError);
		}

		::System::Void _ctor_6(::System::Int32 nativeError, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_6_OFFSET))(this, nativeError, message);
		}

		::System::Void _ctor_7(::System::Int32 nativeError, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_7_OFFSET))(this, nativeError, innerException);
		}

		::System::Void _ctor_8(::System::Net::WebSockets::WebSocketError error, ::System::Int32 nativeError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_8_OFFSET))(this, error, nativeError);
		}

		::System::Void _ctor_9(::System::Net::WebSockets::WebSocketError error, ::System::Int32 nativeError, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_9_OFFSET))(this, error, nativeError, message);
		}

		::System::Void _ctor_10(::System::Net::WebSockets::WebSocketError error, ::System::Int32 nativeError, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_10_OFFSET))(this, error, nativeError, innerException);
		}

		::System::Void _ctor_11(::System::Net::WebSockets::WebSocketError error, ::System::Int32 nativeError, ::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebSockets::WebSocketError, ::System::Int32, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_11_OFFSET))(this, error, nativeError, message, innerException);
		}

		::System::Void _ctor_12(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_12_OFFSET))(this, message);
		}

		::System::Void _ctor_13(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION__CTOR_13_OFFSET))(this, message, innerException);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocketError get_WebSocketErrorCode()
		{
			return ((::System::Net::WebSockets::WebSocketError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GET_WEBSOCKETERRORCODE_OFFSET))(this);
		}

		static ::System::String* GetErrorMessage(::System::Net::WebSockets::WebSocketError error)
		{
			return ((::System::String*(*)(::System::Net::WebSockets::WebSocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_GETERRORMESSAGE_OFFSET))(error);
		}

		::System::Void SetErrorCodeOnError(::System::Int32 nativeError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_SETERRORCODEONERROR_OFFSET))(this, nativeError);
		}

		static ::System::Boolean Succeeded(::System::Int32 hr)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETEXCEPTION_SUCCEEDED_OFFSET))(hr);
		}
	};
}
