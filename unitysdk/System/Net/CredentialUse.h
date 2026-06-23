#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CredentialUse_TypeDefinitionIndex = 3303;

	enum class CredentialUse : ::System::Int32
	{
		Inbound = 1,
		Outbound = 2,
		Both = 3,
	};
}
