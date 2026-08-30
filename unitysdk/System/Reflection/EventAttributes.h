#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int EventAttributes_TypeDefinitionIndex = 560;

	enum class EventAttributes : ::System::Int32
	{
		None = 0,
		SpecialName = 512,
		ReservedMask = 1024,
		RTSpecialName = 1024,
	};
}
