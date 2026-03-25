#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/AuthenticationSchemes.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class Stream; }
namespace System::Net { class AuthenticationSchemeSelector; }
namespace System::Net { class HttpConnection; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class HttpListenerPrefixCollection; }
namespace System::Net { class IPAddress; }
namespace System::Net { class ServiceNameStore; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Authentication::ExtendedProtection { class ExtendedProtectionPolicy; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define SYSTEM_NET_HTTPLISTENER_ADDCONNECTION_OFFSET UNITYSDK_OFFSET(0x186E11D0)
#define SYSTEM_NET_HTTPLISTENER_BEGINGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x186E4F60)
#define SYSTEM_NET_HTTPLISTENER_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x186E3F50)
#define SYSTEM_NET_HTTPLISTENER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x186E40D0)
#define SYSTEM_NET_HTTPLISTENER_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x186E4070)
#define SYSTEM_NET_HTTPLISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x186E3FF0)
#define SYSTEM_NET_HTTPLISTENER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x186DF030)
#define SYSTEM_NET_HTTPLISTENER_ENDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x186E5C30)
#define SYSTEM_NET_HTTPLISTENER_GETCONTEXTFROMQUEUE_OFFSET UNITYSDK_OFFSET(0x186E5300)
#define SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET UNITYSDK_OFFSET(0x186E3F20)
#define SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMES_OFFSET UNITYSDK_OFFSET(0x186E3F10)
#define SYSTEM_NET_HTTPLISTENER_GET_IGNOREWRITEEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x186E3F30)
#define SYSTEM_NET_HTTPLISTENER_GET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x186E3F40)
#define SYSTEM_NET_HTTPLISTENER_GET_PREFIXES_OFFSET UNITYSDK_OFFSET(0x186CDED0)
#define SYSTEM_NET_HTTPLISTENER_GET_REALM_OFFSET UNITYSDK_OFFSET(0x186E3FE0)
#define SYSTEM_NET_HTTPLISTENER_LOADCERTIFICATEANDKEY_OFFSET UNITYSDK_OFFSET(0x186CA2F0)
#define SYSTEM_NET_HTTPLISTENER_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x186E1200)
#define SYSTEM_NET_HTTPLISTENER_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x186E1640)
#define SYSTEM_NET_HTTPLISTENER_SELECTAUTHENTICATIONSCHEME_OFFSET UNITYSDK_OFFSET(0x186E6190)
#define SYSTEM_NET_HTTPLISTENER_START_OFFSET UNITYSDK_OFFSET(0x186E6310)
#define SYSTEM_NET_HTTPLISTENER_STOP_OFFSET UNITYSDK_OFFSET(0x186E6380)
#define SYSTEM_NET_HTTPLISTENER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186E63F0)
#define SYSTEM_NET_HTTPLISTENER_UNREGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x186CB9B0)
#define SYSTEM_NET_HTTPLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x186E3CC0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListener_TypeDefinitionIndex = 2837;

	class HttpListener : public ::System::Object
	{
	public:
		::System::Net::HttpListenerPrefixCollection* prefixes; // 0x10
		::System::Object* _internalLock; // 0x18
		::System::Net::AuthenticationSchemeSelector* auth_selector; // 0x20
		::System::Collections::ArrayList* wait_queue; // 0x28
		::System::Security::Cryptography::X509Certificates::X509Certificate* certificate; // 0x30
		::System::String* realm; // 0x38
		::System::Collections::ArrayList* ctx_queue; // 0x40
		::System::Collections::Hashtable* connections; // 0x48
		::Mono::Security::Interface::MonoTlsProvider* tlsProvider; // 0x50
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0x58
		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy; // 0x60
		::System::Net::ServiceNameStore* defaultServiceNames; // 0x68
		::System::Collections::Hashtable* registry; // 0x70
		::System::Net::AuthenticationSchemes auth_schemes; // 0x78
		::System::Boolean listening; // 0x7C
		::System::Boolean ignore_write_exceptions; // 0x7D
		::System::Boolean disposed; // 0x7E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(::System::Net::IPAddress* addr, ::System::Int32 port)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_LOADCERTIFICATEANDKEY_OFFSET))(this, addr, port);
		}

		::System::Net::Security::SslStream* CreateSslStream(::System::IO::Stream* innerStream, ::System::Boolean ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback* callback)
		{
			return ((::System::Net::Security::SslStream*(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_CREATESSLSTREAM_OFFSET))(this, innerStream, ownsStream, callback);
		}

		::System::Net::AuthenticationSchemes get_AuthenticationSchemes()
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMES_OFFSET))(this);
		}

		::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate()
		{
			return ((::System::Net::AuthenticationSchemeSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreWriteExceptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_IGNOREWRITEEXCEPTIONS_OFFSET))(this);
		}

		::System::Boolean get_IsListening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_ISLISTENING_OFFSET))(this);
		}

		::System::Net::HttpListenerPrefixCollection* get_Prefixes()
		{
			return ((::System::Net::HttpListenerPrefixCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_PREFIXES_OFFSET))(this);
		}

		::System::String* get_Realm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_REALM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_CLOSE_OFFSET))(this);
		}

		::System::Void Close_1(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_CLOSE_1_OFFSET))(this, force);
		}

		::System::Void Cleanup(::System::Boolean close_existing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_CLEANUP_OFFSET))(this, close_existing);
		}

		::System::IAsyncResult* BeginGetContext(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_BEGINGETCONTEXT_OFFSET))(this, callback, state);
		}

		::System::Net::HttpListenerContext* EndGetContext(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::HttpListenerContext*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_ENDGETCONTEXT_OFFSET))(this, asyncResult);
		}

		::System::Net::AuthenticationSchemes SelectAuthenticationScheme(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SELECTAUTHENTICATIONSCHEME_OFFSET))(this, context);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_STOP_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Net::HttpListenerContext* GetContextFromQueue()
		{
			return ((::System::Net::HttpListenerContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GETCONTEXTFROMQUEUE_OFFSET))(this);
		}

		::System::Void RegisterContext(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_REGISTERCONTEXT_OFFSET))(this, context);
		}

		::System::Void UnregisterContext(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_UNREGISTERCONTEXT_OFFSET))(this, context);
		}

		::System::Void AddConnection(::System::Net::HttpConnection* cnc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_ADDCONNECTION_OFFSET))(this, cnc);
		}

		::System::Void RemoveConnection(::System::Net::HttpConnection* cnc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_REMOVECONNECTION_OFFSET))(this, cnc);
		}
	};
}
