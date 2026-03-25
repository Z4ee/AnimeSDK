#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x1873C4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C250)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_MyNativeHelper_TypeDefinitionIndex = 2698;

	class X509Helper2_MyNativeHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_OFFSET))(this, cert);
		}
	};
}
