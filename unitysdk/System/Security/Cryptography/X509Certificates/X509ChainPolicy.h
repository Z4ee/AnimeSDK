#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509RevocationFlag.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509RevocationMode.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509VerificationFlags.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Security::Cryptography { class OidCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Collection; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET UNITYSDK_OFFSET(0x1AFD9890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFD9A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD96D0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainPolicy_TypeDefinitionIndex = 2693;

	class X509ChainPolicy : public ::System::Object
	{
	public:
		::System::Security::Cryptography::OidCollection* apps; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store; // 0x20
		::System::Security::Cryptography::OidCollection* cert; // 0x28
		::System::TimeSpan timeout; // 0x30
		::System::DateTime vtime; // 0x38
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags; // 0x40
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag; // 0x44
		::System::Security::Cryptography::X509Certificates::X509RevocationMode mode; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET))(this);
		}
	};
}
