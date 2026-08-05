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
namespace System::Net { class HttpListenerTimeoutManager; }
namespace System::Net { class HttpListener_ExtendedProtectionSelector; }
namespace System::Net { class IPAddress; }
namespace System::Net { class ServiceNameStore; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Authentication::ExtendedProtection { class ExtendedProtectionPolicy; }
namespace System::Security::Authentication::ExtendedProtection { class ServiceNameCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTPLISTENER_ABORT_OFFSET UNITYSDK_OFFSET(0x1D6A97F0)
#define SYSTEM_NET_HTTPLISTENER_ADDCONNECTION_OFFSET UNITYSDK_OFFSET(0x1D6AB630)
#define SYSTEM_NET_HTTPLISTENER_BEGINGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D6AA570)
#define SYSTEM_NET_HTTPLISTENER_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1D6A93C0)
#define SYSTEM_NET_HTTPLISTENER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D6A9950)
#define SYSTEM_NET_HTTPLISTENER_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1D6A9870)
#define SYSTEM_NET_HTTPLISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D6A98D0)
#define SYSTEM_NET_HTTPLISTENER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1D6A9020)
#define SYSTEM_NET_HTTPLISTENER_ENDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D6AA9A0)
#define SYSTEM_NET_HTTPLISTENER_GETCONTEXTASYNC_OFFSET UNITYSDK_OFFSET(0x1D6AAF40)
#define SYSTEM_NET_HTTPLISTENER_GETCONTEXTFROMQUEUE_OFFSET UNITYSDK_OFFSET(0x1D6AA8E0)
#define SYSTEM_NET_HTTPLISTENER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D6AACF0)
#define SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D6A9450)
#define SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMES_OFFSET UNITYSDK_OFFSET(0x1D6A9390)
#define SYSTEM_NET_HTTPLISTENER_GET_DEFAULTSERVICENAMES_OFFSET UNITYSDK_OFFSET(0x1D6A96B0)
#define SYSTEM_NET_HTTPLISTENER_GET_EXTENDEDPROTECTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1D6A9600)
#define SYSTEM_NET_HTTPLISTENER_GET_EXTENDEDPROTECTIONSELECTORDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D6A9480)
#define SYSTEM_NET_HTTPLISTENER_GET_IGNOREWRITEEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1D6A9540)
#define SYSTEM_NET_HTTPLISTENER_GET_ISLISTENING_OFFSET UNITYSDK_OFFSET(0x1D6A9570)
#define SYSTEM_NET_HTTPLISTENER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D6A9580)
#define SYSTEM_NET_HTTPLISTENER_GET_PREFIXES_OFFSET UNITYSDK_OFFSET(0x1D6A9590)
#define SYSTEM_NET_HTTPLISTENER_GET_REALM_OFFSET UNITYSDK_OFFSET(0x1D6A9790)
#define SYSTEM_NET_HTTPLISTENER_GET_TIMEOUTMANAGER_OFFSET UNITYSDK_OFFSET(0x1D6A95B0)
#define SYSTEM_NET_HTTPLISTENER_GET_UNSAFECONNECTIONNTLMAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1D6A97C0)
#define SYSTEM_NET_HTTPLISTENER_LOADCERTIFICATEANDKEY_OFFSET UNITYSDK_OFFSET(0x1D6A8C80)
#define SYSTEM_NET_HTTPLISTENER_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D6AB050)
#define SYSTEM_NET_HTTPLISTENER_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D6AB660)
#define SYSTEM_NET_HTTPLISTENER_SELECTAUTHENTICATIONSCHEME_OFFSET UNITYSDK_OFFSET(0x1D6AACB0)
#define SYSTEM_NET_HTTPLISTENER_SET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D6A9460)
#define SYSTEM_NET_HTTPLISTENER_SET_AUTHENTICATIONSCHEMES_OFFSET UNITYSDK_OFFSET(0x1D6A93A0)
#define SYSTEM_NET_HTTPLISTENER_SET_EXTENDEDPROTECTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1D6A9610)
#define SYSTEM_NET_HTTPLISTENER_SET_EXTENDEDPROTECTIONSELECTORDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D6A9490)
#define SYSTEM_NET_HTTPLISTENER_SET_IGNOREWRITEEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1D6A9550)
#define SYSTEM_NET_HTTPLISTENER_SET_REALM_OFFSET UNITYSDK_OFFSET(0x1D6A97A0)
#define SYSTEM_NET_HTTPLISTENER_SET_UNSAFECONNECTIONNTLMAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x1D6A97D0)
#define SYSTEM_NET_HTTPLISTENER_START_OFFSET UNITYSDK_OFFSET(0x1D6AADD0)
#define SYSTEM_NET_HTTPLISTENER_STOP_OFFSET UNITYSDK_OFFSET(0x1D6AAE50)
#define SYSTEM_NET_HTTPLISTENER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6AAEC0)
#define SYSTEM_NET_HTTPLISTENER_UNREGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D6AB490)
#define SYSTEM_NET_HTTPLISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6A88F0)
#define SYSTEM_NET_HTTPLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A88C0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListener_TypeDefinitionIndex = 3522;

	class HttpListener : public ::System::Object
	{
	public:
		::System::Net::HttpListenerPrefixCollection* prefixes; // 0x10
		::System::Collections::ArrayList* ctx_queue; // 0x18
		::System::Net::AuthenticationSchemeSelector* auth_selector; // 0x20
		::System::Net::HttpListener_ExtendedProtectionSelector* extendedProtectionSelectorDelegate; // 0x28
		::System::String* realm; // 0x30
		::System::Object* _internalLock; // 0x38
		::System::Collections::Hashtable* connections; // 0x40
		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy; // 0x48
		::System::Collections::ArrayList* wait_queue; // 0x50
		::Mono::Security::Interface::MonoTlsProvider* tlsProvider; // 0x58
		::System::Collections::Hashtable* registry; // 0x60
		::System::Net::ServiceNameStore* defaultServiceNames; // 0x68
		::System::Security::Cryptography::X509Certificates::X509Certificate* certificate; // 0x70
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0x78
		::System::Boolean listening; // 0x80
		::System::Boolean disposed; // 0x81
		::System::Boolean unsafe_ntlm_auth; // 0x82
		::System::Boolean ignore_write_exceptions; // 0x83
		::System::Net::AuthenticationSchemes auth_schemes; // 0x84

		::System::Void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Mono::Security::Interface::MonoTlsProvider* tlsProvider, ::Mono::Security::Interface::MonoTlsSettings* tlsSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER__CTOR_OFFSET))(this, certificate, tlsProvider, tlsSettings);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER__CTOR_1_OFFSET))(this);
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

		::System::Void set_AuthenticationSchemes(::System::Net::AuthenticationSchemes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AuthenticationSchemes))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_AUTHENTICATIONSCHEMES_OFFSET))(this, value);
		}

		::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate()
		{
			return ((::System::Net::AuthenticationSchemeSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET))(this);
		}

		::System::Void set_AuthenticationSchemeSelectorDelegate(::System::Net::AuthenticationSchemeSelector* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::AuthenticationSchemeSelector*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_AUTHENTICATIONSCHEMESELECTORDELEGATE_OFFSET))(this, value);
		}

		::System::Net::HttpListener_ExtendedProtectionSelector* get_ExtendedProtectionSelectorDelegate()
		{
			return ((::System::Net::HttpListener_ExtendedProtectionSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_EXTENDEDPROTECTIONSELECTORDELEGATE_OFFSET))(this);
		}

		::System::Void set_ExtendedProtectionSelectorDelegate(::System::Net::HttpListener_ExtendedProtectionSelector* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener_ExtendedProtectionSelector*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_EXTENDEDPROTECTIONSELECTORDELEGATE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreWriteExceptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_IGNOREWRITEEXCEPTIONS_OFFSET))(this);
		}

		::System::Void set_IgnoreWriteExceptions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_IGNOREWRITEEXCEPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_IsListening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_ISLISTENING_OFFSET))(this);
		}

		static ::System::Boolean get_IsSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_ISSUPPORTED_OFFSET))();
		}

		::System::Net::HttpListenerPrefixCollection* get_Prefixes()
		{
			return ((::System::Net::HttpListenerPrefixCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_PREFIXES_OFFSET))(this);
		}

		::System::Net::HttpListenerTimeoutManager* get_TimeoutManager()
		{
			return ((::System::Net::HttpListenerTimeoutManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_TIMEOUTMANAGER_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* get_ExtendedProtectionPolicy()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_EXTENDEDPROTECTIONPOLICY_OFFSET))(this);
		}

		::System::Void set_ExtendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_EXTENDEDPROTECTIONPOLICY_OFFSET))(this, value);
		}

		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* get_DefaultServiceNames()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_DEFAULTSERVICENAMES_OFFSET))(this);
		}

		::System::String* get_Realm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_REALM_OFFSET))(this);
		}

		::System::Void set_Realm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_REALM_OFFSET))(this, value);
		}

		::System::Boolean get_UnsafeConnectionNtlmAuthentication()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GET_UNSAFECONNECTIONNTLMAUTHENTICATION_OFFSET))(this);
		}

		::System::Void set_UnsafeConnectionNtlmAuthentication(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_SET_UNSAFECONNECTIONNTLMAUTHENTICATION_OFFSET))(this, value);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_ABORT_OFFSET))(this);
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

		::System::Net::HttpListenerContext* GetContext()
		{
			return ((::System::Net::HttpListenerContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GETCONTEXT_OFFSET))(this);
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

		::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>* GetContextAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_GETCONTEXTASYNC_OFFSET))(this);
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
