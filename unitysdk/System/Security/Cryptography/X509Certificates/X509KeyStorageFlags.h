#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509KeyStorageFlags_TypeDefinitionIndex = 1078;

	enum class X509KeyStorageFlags : ::System::Int32
	{
		DefaultKeySet = 0,
		UserKeySet = 1,
		MachineKeySet = 2,
		Exportable = 4,
		UserProtected = 8,
		PersistKeySet = 16,
		EphemeralKeySet = 32,
	};
}
