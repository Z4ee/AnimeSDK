#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1AFA2FB0)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA3040)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA2F70)

namespace System::Net
{
	inline static constexpr unsigned int ServerCertValidationCallback_TypeDefinitionIndex = 2809;

	class ServerCertValidationCallback : public ::System::Object
	{
	public:
		::System::Threading::ExecutionContext* m_Context; // 0x10
		::System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback; // 0x18

		::System::Void _ctor(::System::Net::Security::RemoteCertificateValidationCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK__CTOR_OFFSET))(this, a1);
		}

		::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean Invoke(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
