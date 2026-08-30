#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ProcessorArchitecture_TypeDefinitionIndex = 555;

	enum class ProcessorArchitecture : ::System::Int32
	{
		None = 0,
		MSIL = 1,
		X86 = 2,
		IA64 = 3,
		Amd64 = 4,
		Arm = 5,
	};
}
