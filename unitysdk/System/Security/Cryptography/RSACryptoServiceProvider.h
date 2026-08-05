#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CspProviderFlags.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace Mono::Security::Cryptography { class RSAManaged; }
namespace System { class EventArgs; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }
namespace System::Security::Cryptography { class RSAEncryptionPadding; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET UNITYSDK_OFFSET(0x1C3334E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x1C3332D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1C333D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x1C333B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1C332D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C333A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1C333F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_1_OFFSET UNITYSDK_OFFSET(0x1C333DD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C3329D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C333F50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C333960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x1C334150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C333A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C333AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1C333AC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C332980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x1C3329C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C334100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1C334710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C332C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x1C334540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C333250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C333240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C333290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C333220)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSACryptoServiceProvider_TypeDefinitionIndex = 1089;

	class RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA
	{
	public:
		static ::System::Security::Cryptography::CspProviderFlags* StaticGet_s_UseMachineKeyStore()
		{
			return (::System::Security::Cryptography::CspProviderFlags*)Il2CppClass::FromTypeDefinitionIndex(RSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0xC60);
		}
		::Mono::Security::Cryptography::RSAManaged* rsa; // 0x20
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x28
		::System::Boolean privateKeyExportable; // 0x30
		::System::Boolean m_disposed; // 0x31
		::System::Boolean persisted; // 0x32
		::System::Boolean persistKey; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this, parameters);
		}

		::System::Void _ctor_2(::System::Int32 dwKeySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET))(this, dwKeySize);
		}

		::System::Void _ctor_3(::System::Int32 dwKeySize, ::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET))(this, dwKeySize, parameters);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		static ::System::Boolean get_UseMachineKeyStore()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* data, ::System::Security::Cryptography::RSAEncryptionPadding* padding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET))(this, data, padding);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* data, ::System::Security::Cryptography::RSAEncryptionPadding* padding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET))(this, data, padding);
		}

		static ::System::Exception* PaddingModeNotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET))();
		}

		::System::Void Common(::System::Int32 dwKeySize, ::System::Boolean parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, dwKeySize, parameters);
		}

		::System::Void Common_1(::System::Security::Cryptography::CspParameters* p)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET))(this, p);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Decrypt_1(::Il2CppArray<::System::Byte>* rgb, ::System::Boolean fOAEP)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_1_OFFSET))(this, rgb, fOAEP);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET))(this, rgb);
		}

		::Il2CppArray<::System::Byte>* Encrypt_1(::Il2CppArray<::System::Byte>* rgb, ::System::Boolean fOAEP)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_1_OFFSET))(this, rgb, fOAEP);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET))(this, rgb);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::String* GetHashNameFromOID(::System::String* oid)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET))(this, oid);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Byte>* rgbHash, ::System::String* str, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET))(this, rgbHash, str, rgbSignature);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, sender, e);
		}
	};
}
