#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnDecodeStatus_TypeDefinitionIndex = 2672;

	enum class AsnDecodeStatus : ::System::Int32
	{
		NotDecoded = -1,
		Ok = 0,
		BadAsn = 1,
		BadTag = 2,
		BadLength = 3,
		InformationNotAvailable = 4,
	};
}
