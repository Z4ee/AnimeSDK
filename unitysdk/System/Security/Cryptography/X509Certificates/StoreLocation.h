#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int StoreLocation_TypeDefinitionIndex = 3169;

	enum class StoreLocation : ::System::Int32
	{
		CurrentUser = 1,
		LocalMachine = 2,
	};
}
