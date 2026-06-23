#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ProxyElement_AutoDetectValues_TypeDefinitionIndex = 4125;

	enum class ProxyElement_AutoDetectValues : ::System::Int32
	{
		False = 0,
		True = 1,
		Unspecified = -1,
	};
}
