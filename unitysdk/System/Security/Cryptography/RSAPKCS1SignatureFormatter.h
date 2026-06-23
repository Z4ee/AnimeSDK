#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1B936510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1B936620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1B936450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B936440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B936430)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureFormatter_TypeDefinitionIndex = 1120;

	class RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::String* hash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::Il2CppArray<::System::Byte>* rgbHash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(this, rgbHash);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_SETKEY_OFFSET))(this, key);
		}
	};
}
