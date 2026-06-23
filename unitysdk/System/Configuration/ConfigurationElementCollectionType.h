#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElementCollectionType_TypeDefinitionIndex = 2511;

	enum class ConfigurationElementCollectionType : ::System::Int32
	{
		AddRemoveClearMap = 1,
		AddRemoveClearMapAlternate = 3,
		BasicMap = 0,
		BasicMapAlternate = 2,
	};
}
