#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration { class SettingsContext; }
namespace System::Configuration { class SettingsProperty; }
namespace System::Configuration { class SettingsPropertyCollection; }
namespace System::Configuration { class SettingsPropertyValue; }

namespace System::Configuration
{
	inline static constexpr unsigned int IApplicationSettingsProvider_TypeDefinitionIndex = 4098;

	class IApplicationSettingsProvider
	{
	public:
	};
}
