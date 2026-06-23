#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsSerializeAs_TypeDefinitionIndex = 4078;

	enum class SettingsSerializeAs : ::System::Int32
	{
		Binary = 2,
		ProviderSpecific = 3,
		String = 0,
		Xml = 1,
	};
}
