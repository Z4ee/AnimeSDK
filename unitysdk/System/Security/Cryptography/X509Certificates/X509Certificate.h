#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x185CBE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185CBE70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185CBB80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x185CB340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASHSTRING_OFFSET UNITYSDK_OFFSET(0x185CB540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASH_OFFSET UNITYSDK_OFFSET(0x185CB440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185CB670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x185CB760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x185CB820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x185CB7C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x185CB280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x185CBAA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x185CB300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x185CBB10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORTHANDLE_OFFSET UNITYSDK_OFFSET(0x185CB250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x185CBD00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_OFFSET UNITYSDK_OFFSET(0x185CBBD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_RESET_OFFSET UNITYSDK_OFFSET(0x185CBEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x185CBD50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x185CBD60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x185CB930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185CB8F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185CAFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185CB020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x185CB140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x185CB9C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x185CB9D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x185CAFB0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate_TypeDefinitionIndex = 1079;

	class X509Certificate : public ::System::Object
	{
	public:
		::System::String* subject_name; // 0x10
		::System::String* issuer_name; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl; // 0x20
		::System::Boolean hideDates; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_4_OFFSET))(this);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORTHANDLE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_IMPL_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetCertHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASH_OFFSET))(this);
		}

		::System::String* GetCertHashString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASHSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetRawCertData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETRAWCERTDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetSerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBER_OFFSET))(this);
		}

		::System::String* GetSerialNumberString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBERSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* get_Issuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISSUER_OFFSET))(this);
		}

		::System::String* get_Subject()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_SUBJECT_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Import_1(::System::String* a1, ::System::String* a2, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_RESET_OFFSET))(this);
		}
	};
}
