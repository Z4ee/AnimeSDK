#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyNameFlags_TypeDefinitionIndex = 550;

	enum class AssemblyNameFlags : ::System::Int32
	{
		None = 0,
		PublicKey = 1,
		EnableJITcompileOptimizer = 16384,
		EnableJITcompileTracking = 32768,
		Retargetable = 256,
	};
}
