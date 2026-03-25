#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PaddingMode_TypeDefinitionIndex = 997;

	enum class PaddingMode : ::System::Int32
	{
		None = 1,
		PKCS7 = 2,
		Zeros = 3,
		ANSIX923 = 4,
		ISO10126 = 5,
	};
}
