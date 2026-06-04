#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509CertificateCollection.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD5B80)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2Collection_TypeDefinitionIndex = 2682;

	class X509Certificate2Collection : public ::System::Security::Cryptography::X509Certificates::X509CertificateCollection
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_newline_split()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2Collection_TypeDefinitionIndex)->GetStaticField(0x26AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CCTOR_OFFSET))();
		}
	};
}
