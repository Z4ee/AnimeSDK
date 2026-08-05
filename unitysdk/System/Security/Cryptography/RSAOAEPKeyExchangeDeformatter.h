#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricKeyExchangeDeformatter.h"

namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1D695700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET UNITYSDK_OFFSET(0x1D695910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D695640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D695630)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAOAEPKeyExchangeDeformatter_TypeDefinitionIndex = 1090;

	class RSAOAEPKeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter
	{
	public:
		::System::Security::Cryptography::RSA* _rsaKey; // 0x10
		::System::Nullable_1<::System::Boolean> _rsaOverridesDecrypt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Byte>* DecryptKeyExchange(::Il2CppArray<::System::Byte>* rgbData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET))(this, rgbData);
		}

		::System::Boolean get_OverridesDecrypt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET))(this);
		}
	};
}
