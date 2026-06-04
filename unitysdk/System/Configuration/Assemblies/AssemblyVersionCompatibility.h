#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration::Assemblies
{
	inline static constexpr unsigned int AssemblyVersionCompatibility_TypeDefinitionIndex = 462;

	enum class AssemblyVersionCompatibility : ::System::Int32
	{
		SameMachine = 1,
		SameProcess = 2,
		SameDomain = 3,
	};
}
