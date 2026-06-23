#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1CB08C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x1CB08BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB08C20)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_MyNativeHelper_TypeDefinitionIndex = 3208;

	class X509Helper2_MyNativeHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Byte>* data, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags flags)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_OFFSET))(this, data, password, flags);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import_1(::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_MYNATIVEHELPER_IMPORT_1_OFFSET))(this, cert);
		}
	};
}
