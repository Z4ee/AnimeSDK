#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication
{
	inline static constexpr unsigned int ExchangeAlgorithmType_TypeDefinitionIndex = 3146;

	enum class ExchangeAlgorithmType : ::System::Int32
	{
		None = 0,
		DiffieHellman = 43522,
		RsaKeyX = 41984,
		RsaSign = 9216,
	};
}
