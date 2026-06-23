#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPaddingMode_TypeDefinitionIndex = 1036;

	enum class RSAEncryptionPaddingMode : ::System::Int32
	{
		Pkcs1 = 0,
		Oaep = 1,
	};
}
