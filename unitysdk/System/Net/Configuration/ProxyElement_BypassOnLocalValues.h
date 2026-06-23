#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ProxyElement_BypassOnLocalValues_TypeDefinitionIndex = 4126;

	enum class ProxyElement_BypassOnLocalValues : ::System::Int32
	{
		False = 0,
		True = 1,
		Unspecified = -1,
	};
}
