#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Configuration
{
	inline static constexpr unsigned int UnicodeEncodingConformance_TypeDefinitionIndex = 2971;

	enum class UnicodeEncodingConformance : ::System::Int32
	{
		Auto = 0,
		Strict = 1,
		Compat = 2,
	};
}
