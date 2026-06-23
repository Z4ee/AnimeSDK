#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int ProtectionLevel_TypeDefinitionIndex = 3693;

	enum class ProtectionLevel : ::System::Int32
	{
		None = 0,
		Sign = 1,
		EncryptAndSign = 2,
	};
}
