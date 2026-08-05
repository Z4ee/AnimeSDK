#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Security::Cryptography { class DSAManaged; }
namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET UNITYSDK_OFFSET(0x1CE8F4E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x1CE8F2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1CE8F890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE8F620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CE8F780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CE8F580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1CE8F680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1CE8F690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1CE8F6D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1CE8F740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CE8F840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1CE8F8D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1CE8F8B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8F250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CE8F240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CE8F290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8F220)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSACryptoServiceProvider_TypeDefinitionIndex = 1115;

	class DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA
	{
	public:
		static ::System::Boolean* StaticGet_useMachineKeyStore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x4C0);
		}
		::Mono::Security::Cryptography::DSAManaged* dsa; // 0x20
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x28
		::System::Boolean privateKeyExportable; // 0x30
		::System::Boolean m_disposed; // 0x31
		::System::Boolean persistKey; // 0x32
		::System::Boolean persisted; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this, parameters);
		}

		::System::Void _ctor_2(::System::Int32 dwKeySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET))(this, dwKeySize);
		}

		::System::Void _ctor_3(::System::Int32 dwKeySize, ::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET))(this, dwKeySize, parameters);
		}

		::System::Void Common(::System::Int32 dwKeySize, ::System::Boolean parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, dwKeySize, parameters);
		}

		::System::Void Common_1(::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET))(this, parameters);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::Il2CppArray<::System::Byte>* rgbHash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_CREATESIGNATURE_OFFSET))(this, rgbHash);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* rgbHash, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_VERIFYSIGNATURE_OFFSET))(this, rgbHash, rgbSignature);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, sender, e);
		}
	};
}
