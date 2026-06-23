#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int EncryptionPolicy_TypeDefinitionIndex = 3694;

	enum class EncryptionPolicy : ::System::Int32
	{
		RequireEncryption = 0,
		AllowNoEncryption = 1,
		NoEncryption = 2,
	};
}
