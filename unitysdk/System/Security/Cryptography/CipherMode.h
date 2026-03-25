#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CipherMode_TypeDefinitionIndex = 996;

	enum class CipherMode : ::System::Int32
	{
		CBC = 1,
		ECB = 2,
		OFB = 3,
		CFB = 4,
		CTS = 5,
	};
}
