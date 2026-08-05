#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Certificate.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ContentType.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509NameType.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security { class SecureString; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }
namespace System::Security::Cryptography::X509Certificates { class X500DistinguishedName; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Impl; }
namespace System::Security::Cryptography::X509Certificates { class X509ExtensionCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_APPENDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D41A540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_EXPORT_OFFSET UNITYSDK_OFFSET(0x1D419A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETCERTCONTENTTYPE_1_OFFSET UNITYSDK_OFFSET(0x1D41AAC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETCERTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D41A7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D419830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x1D4184E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1D418840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1D418980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D418A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1D417B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1D418BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_MONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D41AB80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x1D418CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x1D418E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D418F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1D419200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1D419340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1D4193C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D4193D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1D419510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_THUMBPRINT_OFFSET UNITYSDK_OFFSET(0x1D419650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D419670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1D417C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_2_OFFSET UNITYSDK_OFFSET(0x1D417DC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_3_OFFSET UNITYSDK_OFFSET(0x1D4199F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_4_OFFSET UNITYSDK_OFFSET(0x1D417FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_5_OFFSET UNITYSDK_OFFSET(0x1D418190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_OFFSET UNITYSDK_OFFSET(0x1D419980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_RESET_OFFSET UNITYSDK_OFFSET(0x1D419BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_ARCHIVED_OFFSET UNITYSDK_OFFSET(0x1D418690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1D4189F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x1D4190C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D419CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D419C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_VERIFY_OFFSET UNITYSDK_OFFSET(0x1D41A660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D41AB90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1D4182A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1D418330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1D4183A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1D418430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_14_OFFSET UNITYSDK_OFFSET(0x1D418460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D404830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D417CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D417D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D417E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D417ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D417F50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D418070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D418100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D418210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D417C30)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2_TypeDefinitionIndex = 3187;

	class X509Certificate2 : public ::System::Security::Cryptography::X509Certificates::X509Certificate
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_signedData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2_TypeDefinitionIndex)->GetStaticField(0x2FC0);
		}
		::System::String* friendlyName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_1_OFFSET))(this, rawData);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* rawData, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_2_OFFSET))(this, rawData, password);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* rawData, ::System::Security::SecureString* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_3_OFFSET))(this, rawData, password);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_4_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* rawData, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_5_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void _ctor_6(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_6_OFFSET))(this, fileName);
		}

		::System::Void _ctor_7(::System::String* fileName, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_7_OFFSET))(this, fileName, password);
		}

		::System::Void _ctor_8(::System::String* fileName, ::System::Security::SecureString* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_8_OFFSET))(this, fileName, password);
		}

		::System::Void _ctor_9(::System::String* fileName, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_9_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void _ctor_10(::System::String* fileName, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_10_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void _ctor_11(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_11_OFFSET))(this, handle);
		}

		::System::Void _ctor_12(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_12_OFFSET))(this, certificate);
		}

		::System::Void _ctor_13(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_13_OFFSET))(this, info, context);
		}

		::System::Void _ctor_14(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* impl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_14_OFFSET))(this, impl);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CCTOR_OFFSET))();
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_IMPL_OFFSET))(this);
		}

		::System::Boolean get_Archived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_ARCHIVED_OFFSET))(this);
		}

		::System::Void set_Archived(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_ARCHIVED_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_FRIENDLYNAME_OFFSET))(this);
		}

		::System::Void set_FriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_FRIENDLYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasPrivateKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_HASPRIVATEKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName()
		{
			return ((::System::Security::Cryptography::X509Certificates::X500DistinguishedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_ISSUERNAME_OFFSET))(this);
		}

		::System::DateTime get_NotAfter()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTAFTER_OFFSET))(this);
		}

		::System::DateTime get_NotBefore()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTBEFORE_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_PRIVATEKEY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey()
		{
			return ((::System::Security::Cryptography::X509Certificates::PublicKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PUBLICKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_RawData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_RAWDATA_OFFSET))(this);
		}

		::System::String* get_SerialNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_SignatureAlgorithm()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName()
		{
			return ((::System::Security::Cryptography::X509Certificates::X500DistinguishedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SUBJECTNAME_OFFSET))(this);
		}

		::System::String* get_Thumbprint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_THUMBPRINT_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_VERSION_OFFSET))(this);
		}

		::System::String* GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, ::System::Boolean forIssuer)
		{
			return ((::System::String*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509NameType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETNAMEINFO_OFFSET))(this, nameType, forIssuer);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_OFFSET))(this, rawData);
		}

		::System::Void Import_1(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_1_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_2(::Il2CppArray<::System::Byte>* rawData, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_2_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_3(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_3_OFFSET))(this, fileName);
		}

		::System::Void Import_4(::System::String* fileName, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_4_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void Import_5(::System::String* fileName, ::System::Security::SecureString* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_5_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::Il2CppArray<::System::Byte>* Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_EXPORT_OFFSET))(this, contentType, password);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean verbose)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_1_OFFSET))(this, verbose);
		}

		static ::System::Void AppendBuffer(::System::Text::StringBuilder* sb, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_APPENDBUFFER_OFFSET))(sb, buffer);
		}

		::System::Boolean Verify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_VERIFY_OFFSET))(this);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ContentType(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETCERTCONTENTTYPE_OFFSET))(rawData);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType_1(::System::String* fileName)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ContentType(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GETCERTCONTENTTYPE_1_OFFSET))(fileName);
		}

		::Mono::Security::X509::X509Certificate* get_MonoCertificate()
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_MONOCERTIFICATE_OFFSET))(this);
		}
	};
}
