#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspProviderFlags_TypeDefinitionIndex = 1048;

	enum class CspProviderFlags : ::System::Int32
	{
		NoFlags = 0,
		UseMachineKeyStore = 1,
		UseDefaultKeyContainer = 2,
		UseNonExportableKey = 4,
		UseExistingKey = 8,
		UseArchivableKey = 16,
		UseUserProtectedKey = 32,
		NoPrompt = 64,
		CreateEphemeralKey = 128,
	};
}
