#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication
{
	inline static constexpr unsigned int CipherAlgorithmType_TypeDefinitionIndex = 3145;

	enum class CipherAlgorithmType : ::System::Int32
	{
		None = 0,
		Null = 24576,
		Aes = 26129,
		Aes128 = 26126,
		Aes192 = 26127,
		Aes256 = 26128,
		Des = 26113,
		Rc2 = 26114,
		Rc4 = 26625,
		TripleDes = 26115,
	};
}
