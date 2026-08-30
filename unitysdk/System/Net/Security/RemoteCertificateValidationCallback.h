#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B95D740)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B95D7E0)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B95D710)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95D620)

namespace System::Net::Security
{
	inline static constexpr unsigned int RemoteCertificateValidationCallback_TypeDefinitionIndex = 2924;

	class RemoteCertificateValidationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
