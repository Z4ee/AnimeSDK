#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18289420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x18289560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18289690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182895B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18289800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x182893B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x182893D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18289160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18289110)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509CertificateImplCollection_TypeDefinitionIndex = 2698;

	class X509CertificateImplCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(::System::Int32 a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_ADD_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_FINALIZE_OFFSET))(this);
		}
	};
}
