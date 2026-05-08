#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1AFE89A0)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_GET_VALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AFE8990)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFDA0D0)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDA270)

namespace System::Net
{
	inline static constexpr unsigned int ServerCertValidationCallback_TypeDefinitionIndex = 3490;

	class ServerCertValidationCallback : public ::System::Object
	{
	public:
		::System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback; // 0x10
		::System::Threading::ExecutionContext* m_Context; // 0x18

		::System::Void _ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK__CTOR_OFFSET))(this, validationCallback);
		}

		::System::Net::Security::RemoteCertificateValidationCallback* get_ValidationCallback()
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_GET_VALIDATIONCALLBACK_OFFSET))(this);
		}

		::System::Void Callback(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET))(this, state);
		}

		::System::Boolean Invoke(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET))(this, request, certificate, chain, sslPolicyErrors);
		}
	};
}
