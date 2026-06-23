#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C8A8CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8A8D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C8A8E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8A8D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C8A8F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C8A8C30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C8A8C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8A8AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A8A30)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509CertificateImplCollection_TypeDefinitionIndex = 3194;

	class X509CertificateImplCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION__CTOR_1_OFFSET))(this, other);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Add(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, ::System::Boolean takeOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_ADD_OFFSET))(this, impl, takeOwnership);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATEIMPLCOLLECTION_FINALIZE_OFFSET))(this);
		}
	};
}
