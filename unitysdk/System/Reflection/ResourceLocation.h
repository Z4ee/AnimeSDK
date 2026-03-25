#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ResourceLocation_TypeDefinitionIndex = 568;

	enum class ResourceLocation : ::System::Int32
	{
		Embedded = 1,
		ContainedInAnotherAssembly = 2,
		ContainedInManifestFile = 4,
	};
}
