#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSaveMode_TypeDefinitionIndex = 2331;

	enum class ConfigurationSaveMode : ::System::Int32
	{
		Full = 2,
		Minimal = 1,
		Modified = 0,
	};
}
