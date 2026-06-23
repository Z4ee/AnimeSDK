#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int OpenFlags_TypeDefinitionIndex = 3168;

	enum class OpenFlags : ::System::Int32
	{
		ReadOnly = 0,
		ReadWrite = 1,
		MaxAllowed = 2,
		OpenExistingOnly = 4,
		IncludeArchived = 8,
	};
}
