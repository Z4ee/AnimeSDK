#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceSettings_TypeDefinitionIndex = 1680;

	enum class EventSourceSettings : ::System::Int32
	{
		Default = 0,
		ThrowOnEventWriteErrors = 1,
		EtwManifestEventFormat = 4,
		EtwSelfDescribingEventFormat = 8,
	};
}
