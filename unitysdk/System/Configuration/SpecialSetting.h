#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int SpecialSetting_TypeDefinitionIndex = 4231;

	enum class SpecialSetting : ::System::Int32
	{
		ConnectionString = 0,
		WebServiceUrl = 1,
	};
}
