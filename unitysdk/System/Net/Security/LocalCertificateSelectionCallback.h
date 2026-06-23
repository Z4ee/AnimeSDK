#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D7D90)
#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D7DF0)
#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D76A0)
#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7680)

namespace System::Net::Security
{
	inline static constexpr unsigned int LocalCertificateSelectionCallback_TypeDefinitionIndex = 3695;

	class LocalCertificateSelectionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::Object* sender, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(this, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET))(this, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
