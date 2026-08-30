#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Resources
{
	inline static constexpr unsigned int UltimateResourceFallbackLocation_TypeDefinitionIndex = 536;

	enum class UltimateResourceFallbackLocation : ::System::Int32
	{
		MainAssembly = 0,
		Satellite = 1,
	};
}
