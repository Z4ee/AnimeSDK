#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int NetworkAccess_TypeDefinitionIndex = 3329;

	enum class NetworkAccess : ::System::Int32
	{
		Accept = 128,
		Connect = 64,
	};
}
