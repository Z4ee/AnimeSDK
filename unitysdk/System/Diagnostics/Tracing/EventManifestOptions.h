#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventManifestOptions_TypeDefinitionIndex = 1698;

	enum class EventManifestOptions : ::System::Int32
	{
		None = 0,
		Strict = 1,
		AllCultures = 2,
		OnlyIfNeededForRegistration = 4,
		AllowEventSourceOverride = 8,
	};
}
