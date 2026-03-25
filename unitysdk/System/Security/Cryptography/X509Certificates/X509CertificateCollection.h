#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection_X509CertificateEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x18739940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18739BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18739C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18739D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18739B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187398E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18739890)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509CertificateCollection_TypeDefinitionIndex = 2684;

	class X509CertificateCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET))(this);
		}
	};
}
