#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ProxyElement_UseSystemDefaultValues_TypeDefinitionIndex = 4127;

	enum class ProxyElement_UseSystemDefaultValues : ::System::Int32
	{
		False = 0,
		True = 1,
		Unspecified = -1,
	};
}
