#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class ServicePoint; }
namespace System::Net { class WebRequest; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define SYSTEM_NET_DEFAULTCERTIFICATEPOLICY_CHECKVALIDATIONRESULT_OFFSET UNITYSDK_OFFSET(0x1CAF77A0)
#define SYSTEM_NET_DEFAULTCERTIFICATEPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF78C0)

namespace System::Net
{
	inline static constexpr unsigned int DefaultCertificatePolicy_TypeDefinitionIndex = 3497;

	class DefaultCertificatePolicy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DEFAULTCERTIFICATEPOLICY__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckValidationResult(::System::Net::ServicePoint* point, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Net::WebRequest* request, ::System::Int32 certificateProblem)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Net::WebRequest*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DEFAULTCERTIFICATEPOLICY_CHECKVALIDATIONRESULT_OFFSET))(this, point, certificate, request, certificateProblem);
		}
	};
}
