#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C9DD240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1C9DD180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1C9DD2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9DD170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DD160)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureDeformatter_TypeDefinitionIndex = 1119;

	class RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::String* hashName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETKEY_OFFSET))(this, key);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* rgbHash, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, rgbHash, rgbSignature);
		}
	};
}
