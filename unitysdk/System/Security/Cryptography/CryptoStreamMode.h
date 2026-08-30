#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStreamMode_TypeDefinitionIndex = 1011;

	enum class CryptoStreamMode : ::System::Int32
	{
		Read = 0,
		Write = 1,
	};
}
