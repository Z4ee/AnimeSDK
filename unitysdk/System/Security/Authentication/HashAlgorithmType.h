#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication
{
	inline static constexpr unsigned int HashAlgorithmType_TypeDefinitionIndex = 3147;

	enum class HashAlgorithmType : ::System::Int32
	{
		None = 0,
		Md5 = 32771,
		Sha1 = 32772,
		Sha256 = 32780,
		Sha384 = 32781,
		Sha512 = 32782,
	};
}
