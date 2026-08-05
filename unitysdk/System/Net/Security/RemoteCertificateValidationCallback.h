#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DECABA0)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DECAC40)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DECA560)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECA540)

namespace System::Net::Security
{
	inline static constexpr unsigned int RemoteCertificateValidationCallback_TypeDefinitionIndex = 3698;

	class RemoteCertificateValidationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(this, sender, certificate, chain, sslPolicyErrors);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET))(this, sender, certificate, chain, sslPolicyErrors, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
