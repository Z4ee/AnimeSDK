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

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_APPLICATIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1C034870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_CERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1C034880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_EXTRASTORE_OFFSET UNITYSDK_OFFSET(0x1C034890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONFLAG_OFFSET UNITYSDK_OFFSET(0x1C034B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONMODE_OFFSET UNITYSDK_OFFSET(0x1C034C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_URLRETRIEVALTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C034C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1C034CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1C034D20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET UNITYSDK_OFFSET(0x1C0344F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_EXTRASTORE_OFFSET UNITYSDK_OFFSET(0x1C034B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONFLAG_OFFSET UNITYSDK_OFFSET(0x1C034B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONMODE_OFFSET UNITYSDK_OFFSET(0x1C034C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_URLRETRIEVALTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C034C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1C034CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1C034D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0346B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C034330)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainPolicy_TypeDefinitionIndex = 3201;

	class X509ChainPolicy : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store; // 0x10
		::System::Security::Cryptography::OidCollection* cert; // 0x18
		::System::Security::Cryptography::OidCollection* apps; // 0x20
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2; // 0x28
		::System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags; // 0x30
		::System::Security::Cryptography::X509Certificates::X509RevocationMode mode; // 0x34
		::System::TimeSpan timeout; // 0x38
		::System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag; // 0x40
		::System::DateTime vtime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY__CTOR_1_OFFSET))(this, store);
		}

		::System::Security::Cryptography::OidCollection* get_ApplicationPolicy()
		{
			return ((::System::Security::Cryptography::OidCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_APPLICATIONPOLICY_OFFSET))(this);
		}

		::System::Security::Cryptography::OidCollection* get_CertificatePolicy()
		{
			return ((::System::Security::Cryptography::OidCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_CERTIFICATEPOLICY_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_ExtraStore()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_EXTRASTORE_OFFSET))(this);
		}

		::System::Void set_ExtraStore(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_EXTRASTORE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509RevocationFlag get_RevocationFlag()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509RevocationFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONFLAG_OFFSET))(this);
		}

		::System::Void set_RevocationFlag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509RevocationFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONFLAG_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509RevocationMode get_RevocationMode()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509RevocationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_REVOCATIONMODE_OFFSET))(this);
		}

		::System::Void set_RevocationMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509RevocationMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_REVOCATIONMODE_OFFSET))(this, value);
		}

		::System::TimeSpan get_UrlRetrievalTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_URLRETRIEVALTIMEOUT_OFFSET))(this);
		}

		::System::Void set_UrlRetrievalTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_URLRETRIEVALTIMEOUT_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509VerificationFlags get_VerificationFlags()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509VerificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONFLAGS_OFFSET))(this);
		}

		::System::Void set_VerificationFlags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509VerificationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONFLAGS_OFFSET))(this, value);
		}

		::System::DateTime get_VerificationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_GET_VERIFICATIONTIME_OFFSET))(this);
		}

		::System::Void set_VerificationTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_SET_VERIFICATIONTIME_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINPOLICY_RESET_OFFSET))(this);
		}
	};
}
