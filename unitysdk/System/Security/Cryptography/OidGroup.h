#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidGroup_TypeDefinitionIndex = 2667;

	enum class OidGroup : ::System::Int32
	{
		All = 0,
		HashAlgorithm = 1,
		EncryptionAlgorithm = 2,
		PublicKeyAlgorithm = 3,
		SignatureAlgorithm = 4,
		Attribute = 5,
		ExtensionOrAttribute = 6,
		EnhancedKeyUsage = 7,
		Policy = 8,
		Template = 9,
		KeyDerivationFunction = 10,
	};
}
