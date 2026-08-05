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

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_APPENDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D632D50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET UNITYSDK_OFFSET(0x1D62F200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D62F6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x1D631B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_1_OFFSET UNITYSDK_OFFSET(0x1D631A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_EXPORT_OFFSET UNITYSDK_OFFSET(0x1D62F890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_FIND_OFFSET UNITYSDK_OFFSET(0x1D630890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_1_OFFSET UNITYSDK_OFFSET(0x1D6332F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D632FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETCERTHASH_OFFSET UNITYSDK_OFFSET(0x1D62F520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1D62F2F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D62F740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETKEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D62F6D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D6305F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETNATIVEAPPLECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D62F170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1D62F7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x1D62F4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1D62F820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1D62F3D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDFROM_OFFSET UNITYSDK_OFFSET(0x1D62F5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x1D62F650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETVALUEASSTRING_OFFSET UNITYSDK_OFFSET(0x1D630AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x1D62FA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1D62FB80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_FALLBACKIMPL_OFFSET UNITYSDK_OFFSET(0x1D6333D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D62F160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D62FC30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D6333B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1D630000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D62F150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_MONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D6333C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D62FC50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1D630230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D630350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1D630490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D630560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x1D630F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x1D631810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_RESET_OFFSET UNITYSDK_OFFSET(0x1D6319C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x1D62FAF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D6300D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D631EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D631E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_VERIFY_OFFSET UNITYSDK_OFFSET(0x1D632E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6333E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D62F190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D62FA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62F180)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2ImplMono_TypeDefinitionIndex = 3191;

	class X509Certificate2ImplMono : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}
		static ::System::String** StaticGet_empty_error()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35C8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35D0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_signedData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2ImplMono_TypeDefinitionIndex)->GetStaticField(0x35D8);
		}
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts; // 0x20
		::System::Security::Cryptography::X509Certificates::PublicKey* _publicKey; // 0x28
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name; // 0x30
		::Mono::Security::X509::X509Certificate* _cert; // 0x38
		::System::Security::Cryptography::Oid* signature_algorithm; // 0x40
		::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* _extensions; // 0x48
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
