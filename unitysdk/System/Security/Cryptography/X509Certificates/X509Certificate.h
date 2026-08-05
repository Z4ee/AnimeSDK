#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ContentType.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security { class SecureString; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CE91120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE91100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE90B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE902B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EXPORT_1_OFFSET UNITYSDK_OFFSET(0x1CE90D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EXPORT_OFFSET UNITYSDK_OFFSET(0x1CE90B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASHSTRING_OFFSET UNITYSDK_OFFSET(0x1CE90480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETCERTHASH_OFFSET UNITYSDK_OFFSET(0x1CE903B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE904A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1CE90530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETNAME_OFFSET UNITYSDK_OFFSET(0x1CE905B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1CE90630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x1CE906B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x1CE907B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1CE90730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1CE901C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x1CE909E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CE90230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1CE90A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORTHANDLE_OFFSET UNITYSDK_OFFSET(0x1CE90190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1CE90EC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_2_OFFSET UNITYSDK_OFFSET(0x1CE90F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_3_OFFSET UNITYSDK_OFFSET(0x1CE90F20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_4_OFFSET UNITYSDK_OFFSET(0x1CE90F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_5_OFFSET UNITYSDK_OFFSET(0x1CE90FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_OFFSET UNITYSDK_OFFSET(0x1CE90E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_RESET_OFFSET UNITYSDK_OFFSET(0x1CE91140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1CE90FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CE90FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x1CE90250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CE90870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE90830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8FF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CE8FFB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CE90020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CE900A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CE90900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1CE90910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8FF40)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate_TypeDefinitionIndex = 1128;

	class X509Certificate : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl; // 0x10
		::System::String* subject_name; // 0x18
		::System::String* issuer_name; // 0x20
		::System::Boolean hideDates; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Boolean dates)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_OFFSET))(this, data, dates);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_2_OFFSET))(this, handle);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_3_OFFSET))(this, impl);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_4_OFFSET))(this, cert);
		}

		::System::Void _ctor_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_5_OFFSET))(this);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE__CTOR_6_OFFSET))(this, info, context);
		}

		::System::Void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORTHANDLE_OFFSET))(this, impl);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_IMPL_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void ThrowIfContextInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_THROWIFCONTEXTINVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Security::Cryptography::X509Certificates::X509Certificate* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_OFFSET))(this, other);
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

		::System::String* GetIssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETISSUERNAME_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GETPUBLICKEY_OFFSET))(this);
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

		::System::String* ToString_1(::System::Boolean fVerbose)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_TOSTRING_1_OFFSET))(this, fVerbose);
		}

		::System::String* get_Issuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_ISSUER_OFFSET))(this);
		}

		::System::String* get_Subject()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_GET_SUBJECT_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EQUALS_1_OFFSET))(this, obj);
		}

		::Il2CppArray<::System::Byte>* Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EXPORT_OFFSET))(this, contentType, password);
		}

		::Il2CppArray<::System::Byte>* Export_1(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::Il2CppArray<::System::Byte>* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_EXPORT_1_OFFSET))(this, contentType, password);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_OFFSET))(this, rawData);
		}

		::System::Void Import_1(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_1_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_2(::Il2CppArray<::System::Byte>* rawData, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_2_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_3(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_3_OFFSET))(this, fileName);
		}

		::System::Void Import_4(::System::String* fileName, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_4_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void Import_5(::System::String* fileName, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_IMPORT_5_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_RESET_OFFSET))(this);
		}
	};
}
