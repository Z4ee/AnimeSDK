#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Certificate2Impl.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }
namespace System::Security::Cryptography::X509Certificates { class X500DistinguishedName; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImplCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ExtensionCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_APPENDBUFFER_OFFSET UNITYSDK_OFFSET(0x18739630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET UNITYSDK_OFFSET(0x18737930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EQUALS_OFFSET UNITYSDK_OFFSET(0x18737CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTHASH_OFFSET UNITYSDK_OFFSET(0x18737B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x187379D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x18737B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x18737CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x18737A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDFROM_OFFSET UNITYSDK_OFFSET(0x18737C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x18737C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x18739720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x187378A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x18735D60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x187363C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x18736590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18736820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x18737D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x18738760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_RESET_OFFSET UNITYSDK_OFFSET(0x18738930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x187361C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18738A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187389B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18739730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187378C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18737D00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x187378B0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2ImplMono_TypeDefinitionIndex = 2683;

	class X509Certificate2ImplMono : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_signedData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0xC5E0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0xC5E8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0xC5F0);
		}
		static ::System::String** StaticGet_empty_error()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0xC5F8);
		}
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name; // 0x18
		::System::Security::Cryptography::Oid* signature_algorithm; // 0x20
		::System::Security::Cryptography::X509Certificates::PublicKey* _publicKey; // 0x28
		::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* _extensions; // 0x30
		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts; // 0x38
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name; // 0x40
		::Mono::Security::X509::X509Certificate* _cert; // 0x48
		::System::Boolean _archived; // 0x50

		::System::Void _ctor(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_OFFSET))(this, cert);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_2_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET))(this);
		}

		::System::String* GetIssuerName(::System::Boolean legacyV1Mode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETISSUERNAME_OFFSET))(this, legacyV1Mode);
		}

		::System::String* GetSubjectName(::System::Boolean legacyV1Mode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSUBJECTNAME_OFFSET))(this, legacyV1Mode);
		}

		::Il2CppArray<::System::Byte>* GetRawCertData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetCertHash(::System::Boolean lazy)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTHASH_OFFSET))(this, lazy);
		}

		::System::DateTime GetValidFrom()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDFROM_OFFSET))(this);
		}

		::System::DateTime GetValidUntil()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDUNTIL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, ::System::Boolean& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EQUALS_OFFSET))(this, other, result);
		}

		::Il2CppArray<::System::Byte>* GetSerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSERIALNUMBER_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey()
		{
			return ((::System::Security::Cryptography::X509Certificates::PublicKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PUBLICKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_SignatureAlgorithm()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_VERSION_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Byte>* rawData, ::System::String* password)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET))(this, rawData, password);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORT_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean verbose)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_1_OFFSET))(this, verbose);
		}

		static ::System::Void AppendBuffer(::System::Text::StringBuilder* sb, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_APPENDBUFFER_OFFSET))(sb, buffer);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET))(this);
		}
	};
}
