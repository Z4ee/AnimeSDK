#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricKeyExchangeFormatter.h"

namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x18C76590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET UNITYSDK_OFFSET(0x18C767A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C75C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C76580)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAOAEPKeyExchangeFormatter_TypeDefinitionIndex = 1092;

	class RSAOAEPKeyExchangeFormatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter
	{
	public:
		::System::Security::Cryptography::RSA* _rsaKey; // 0x10
		::System::Nullable_1<::System::Boolean> _rsaOverridesEncrypt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* CreateKeyExchange(::Il2CppArray<::System::Byte>* rgbData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(this, rgbData);
		}

		::System::Boolean get_OverridesEncrypt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET))(this);
		}
	};
}
