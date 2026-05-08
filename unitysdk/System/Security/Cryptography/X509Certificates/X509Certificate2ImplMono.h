#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Certificate2Impl.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ContentType.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509NameType.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }
namespace System::Security::Cryptography::X509Certificates { class X500DistinguishedName; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImplCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ExtensionCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_APPENDBUFFER_OFFSET UNITYSDK_OFFSET(0x19E453B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET UNITYSDK_OFFSET(0x19E417F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E41CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x19E441D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_1_OFFSET UNITYSDK_OFFSET(0x19E44060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_OFFSET UNITYSDK_OFFSET(0x19E41E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_FIND_OFFSET UNITYSDK_OFFSET(0x19E42EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_1_OFFSET UNITYSDK_OFFSET(0x19E45950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19E45630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTHASH_OFFSET UNITYSDK_OFFSET(0x19E41B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x19E418E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19E41D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x19E41CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x19E42BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNATIVEAPPLECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x19E41760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x19E41DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x19E41AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x19E41E10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x19E419C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDFROM_OFFSET UNITYSDK_OFFSET(0x19E41BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x19E41C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALUEASSTRING_OFFSET UNITYSDK_OFFSET(0x19E430D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x19E42060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x19E42170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_FALLBACKIMPL_OFFSET UNITYSDK_OFFSET(0x19E45A30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x19E41750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x19E42220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x19E45A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x19E425F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x19E41740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_MONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x19E45A20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x19E42240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x19E42830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x19E42950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x19E42A90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x19E42B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x19E435C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x19E43E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_RESET_OFFSET UNITYSDK_OFFSET(0x19E44020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x19E420E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x19E426C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x19E44520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E444D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_VERIFY_OFFSET UNITYSDK_OFFSET(0x19E454D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E45A40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E41780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E42050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E41770)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2ImplMono_TypeDefinitionIndex = 3192;

	class X509Certificate2ImplMono : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl
	{
	public:
		static ::System::String** StaticGet_empty_error()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35C8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35D0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_signedData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35D8);
		}
		::System::Security::Cryptography::X509Certificates::PublicKey* _publicKey; // 0x18
		::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* _extensions; // 0x20
		::Mono::Security::X509::X509Certificate* _cert; // 0x28
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name; // 0x30
		::System::Security::Cryptography::Oid* signature_algorithm; // 0x38
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name; // 0x40
		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts; // 0x48
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

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HANDLE_OFFSET))(this);
		}

		::System::IntPtr GetNativeAppleCertificate()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNATIVEAPPLECERTIFICATE_OFFSET))(this);
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

		::System::String* GetKeyAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetKeyAlgorithmParameters()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHMPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETPUBLICKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetSerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSERIALNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::Il2CppArray<::System::Byte>* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_OFFSET))(this, contentType, password);
		}

		::System::Boolean get_Archived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ARCHIVED_OFFSET))(this);
		}

		::System::Void set_Archived(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_ARCHIVED_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::Boolean get_HasPrivateKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HASPRIVATEKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName()
		{
			return ((::System::Security::Cryptography::X509Certificates::X500DistinguishedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISSUERNAME_OFFSET))(this);
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

		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName()
		{
			return ((::System::Security::Cryptography::X509Certificates::X500DistinguishedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SUBJECTNAME_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_VERSION_OFFSET))(this);
		}

		::System::String* GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, ::System::Boolean forIssuer)
		{
			return ((::System::String*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509NameType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNAMEINFO_OFFSET))(this, nameType, forIssuer);
		}

		::Mono::Security::ASN1* Find(::Il2CppArray<::System::Byte>* oid, ::Mono::Security::ASN1* dn)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_FIND_OFFSET))(this, oid, dn);
		}

		::System::String* GetValueAsString(::Mono::Security::ASN1* pair)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALUEASSTRING_OFFSET))(this, pair);
		}

		::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Byte>* rawData, ::System::String* password)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET))(this, rawData, password);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORT_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::Il2CppArray<::System::Byte>* Export_1(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_1_OFFSET))(this, contentType, password);
		}

		::Il2CppArray<::System::Byte>* ExportPkcs12(::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORTPKCS12_OFFSET))(this, password);
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

		::System::Boolean Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_VERIFY_OFFSET))(this, thisCertificate);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ContentType(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_OFFSET))(rawData);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType_1(::System::String* fileName)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ContentType(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_1_OFFSET))(fileName);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* get_MonoCertificate()
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_MONOCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_FallbackImpl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_FALLBACKIMPL_OFFSET))(this);
		}
	};
}
