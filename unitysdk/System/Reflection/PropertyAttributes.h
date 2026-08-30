#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyAttributes_TypeDefinitionIndex = 585;

	enum class PropertyAttributes : ::System::Int32
	{
		None = 0,
		SpecialName = 512,
		ReservedMask = 62464,
		RTSpecialName = 1024,
		HasDefault = 4096,
		Reserved2 = 8192,
		Reserved3 = 16384,
		Reserved4 = 32768,
	};
}
