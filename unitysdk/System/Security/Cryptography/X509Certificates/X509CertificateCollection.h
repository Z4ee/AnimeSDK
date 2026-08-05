#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection_X509CertificateEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1D482860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1D482630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D482DB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D483380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D482EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D4833E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4834B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D483500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D482BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1D4835B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1D483670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D483740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D482CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D482580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D4827B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4824E0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509CertificateCollection_TypeDefinitionIndex = 3192;

	class X509CertificateCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATECOLLECTION_COMPARE_OFFSET))(this, array1, array2);
		}
	};
}
