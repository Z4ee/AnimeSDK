#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_ADDSUBPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1C717090)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1C7173B0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C716E70)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x1C717010)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C716D70)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_KEEPALIVEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C717230)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C716DF0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C717390)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_REQUESTEDSUBPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1C716CE0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_REQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x1C716CD0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_SENDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C7173A0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C716CF0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1C717570)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7173D0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1C716BD0)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETTOREADONLY_OFFSET UNITYSDK_OFFSET(0x1C717780)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C716F50)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x1C717020)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C716D80)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_KEEPALIVEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C717240)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C716E00)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C716D00)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_THROWIFREADONLY_OFFSET UNITYSDK_OFFSET(0x1C716C60)
#define SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C716A50)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ClientWebSocketOptions_TypeDefinitionIndex = 3890;

	class ClientWebSocketOptions : public ::System::Object
	{
	public:
		::System::Net::WebHeaderCollection* _requestHeaders; // 0x10
		::System::Nullable_1<::System::ArraySegment_1<::System::Byte>> _buffer; // 0x18
		::System::Net::CookieContainer* _cookies; // 0x30
		::System::Net::IWebProxy* _proxy; // 0x38
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _clientCertificates; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* _requestedSubProtocols; // 0x48
		::System::Net::ICredentials* _credentials; // 0x50
		::System::Int32 _sendBufferSize; // 0x58
		::System::TimeSpan _keepAliveInterval; // 0x60
		::System::Boolean _isReadOnly; // 0x68
		::System::Boolean _useDefaultCredentials; // 0x69
		::System::Int32 _receiveBufferSize; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void SetRequestHeader(::System::String* headerName, ::System::String* headerValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETREQUESTHEADER_OFFSET))(this, headerName, headerValue);
		}

		::System::Net::WebHeaderCollection* get_RequestHeaders()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_REQUESTHEADERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_RequestedSubProtocols()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_REQUESTEDSUBPROTOCOLS_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_PROXY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_CLIENTCERTIFICATES_OFFSET))(this, value);
		}

		::System::Net::CookieContainer* get_Cookies()
		{
			return ((::System::Net::CookieContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_COOKIES_OFFSET))(this);
		}

		::System::Void set_Cookies(::System::Net::CookieContainer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_COOKIES_OFFSET))(this, value);
		}

		::System::Void AddSubProtocol(::System::String* subProtocol)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_ADDSUBPROTOCOL_OFFSET))(this, subProtocol);
		}

		::System::TimeSpan get_KeepAliveInterval()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_KEEPALIVEINTERVAL_OFFSET))(this);
		}

		::System::Void set_KeepAliveInterval(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SET_KEEPALIVEINTERVAL_OFFSET))(this, value);
		}

		::System::Int32 get_ReceiveBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_RECEIVEBUFFERSIZE_OFFSET))(this);
		}

		::System::Int32 get_SendBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_SENDBUFFERSIZE_OFFSET))(this);
		}

		::System::Nullable_1<::System::ArraySegment_1<::System::Byte>> get_Buffer()
		{
			return ((::System::Nullable_1<::System::ArraySegment_1<::System::Byte>>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_GET_BUFFER_OFFSET))(this);
		}

		::System::Void SetBuffer(::System::Int32 receiveBufferSize, ::System::Int32 sendBufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETBUFFER_OFFSET))(this, receiveBufferSize, sendBufferSize);
		}

		::System::Void SetBuffer_1(::System::Int32 receiveBufferSize, ::System::Int32 sendBufferSize, ::System::ArraySegment_1<::System::Byte> buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETBUFFER_1_OFFSET))(this, receiveBufferSize, sendBufferSize, buffer);
		}

		::System::Void SetToReadOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_SETTOREADONLY_OFFSET))(this);
		}

		::System::Void ThrowIfReadOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_CLIENTWEBSOCKETOPTIONS_THROWIFREADONLY_OFFSET))(this);
		}
	};
}
