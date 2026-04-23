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
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSAEncryptionPadding; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET UNITYSDK_OFFSET(0x17A4AE40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x17A4AB90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x17A4B8D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x17A4B6F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET UNITYSDK_OFFSET(0x17A4A570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A4B5A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x17A4BA00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_1_OFFSET UNITYSDK_OFFSET(0x17A4B960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x17A4A190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17A4BA20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A4B4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHFROMSTRING_OFFSET UNITYSDK_OFFSET(0x17A4BDD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x17A4BF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASH_OFFSET UNITYSDK_OFFSET(0x17A4BC30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x17A4B630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x17A4B650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x17A4A150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTCSPBLOB_OFFSET UNITYSDK_OFFSET(0x17A4C380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17A4BBE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x17A4C270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17A4A4F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x17A4C110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A4AB10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A4AB00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17A4AB50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38260)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSACryptoServiceProvider_TypeDefinitionIndex = 1042;

	class RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA
	{
	public:
		static ::System::Security::Cryptography::CspProviderFlags* StaticGet_s_UseMachineKeyStore()
		{
			return (::System::Security::Cryptography::CspProviderFlags*)Il2CppClass::FromTypeDefinitionIndex(RSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x3B80);
		}
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::Mono::Security::Cryptography::RSAManaged* rsa; // 0x28
		::System::Boolean m_disposed; // 0x30
		::System::Boolean persistKey; // 0x31
		::System::Boolean privateKeyExportable; // 0x32
		::System::Boolean persisted; // 0x33

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

		::System::Security::Cryptography::HashAlgorithm* GetHash(::System::Object* halg)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASH_OFFSET))(this, halg);
		}

		::System::Security::Cryptography::HashAlgorithm* GetHashFromString(::System::String* name)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHFROMSTRING_OFFSET))(this, name);
		}

		::System::String* GetHashNameFromOID(::System::String* oid)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET))(this, oid);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Byte>* buffer, ::System::Object* halg, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Object*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYDATA_OFFSET))(this, buffer, halg, signature);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, sender, e);
		}

		::System::Void ImportCspBlob(::Il2CppArray<::System::Byte>* keyBlob)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTCSPBLOB_OFFSET))(this, keyBlob);
		}
	};
}
