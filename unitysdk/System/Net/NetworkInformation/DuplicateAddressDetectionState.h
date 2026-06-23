#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int DuplicateAddressDetectionState_TypeDefinitionIndex = 3703;

	enum class DuplicateAddressDetectionState : ::System::Int32
	{
		Invalid = 0,
		Tentative = 1,
		Duplicate = 2,
		Deprecated = 3,
		Preferred = 4,
	};
}
