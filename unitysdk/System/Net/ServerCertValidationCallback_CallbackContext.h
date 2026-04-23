#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13EE80)

namespace System::Net
{
	inline static constexpr unsigned int ServerCertValidationCallback_CallbackContext_TypeDefinitionIndex = 2810;

	class ServerCertValidationCallback_CallbackContext : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Chain* chain; // 0x10
		::System::Object* request; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Certificate* certificate; // 0x20
		::System::Boolean result; // 0x28
		::System::Net::Security::SslPolicyErrors sslPolicyErrors; // 0x2C

		::System::Void _ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACKCONTEXT__CTOR_OFFSET))(this, request, certificate, chain, sslPolicyErrors);
		}
	};
}
