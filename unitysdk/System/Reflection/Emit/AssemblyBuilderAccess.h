#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int AssemblyBuilderAccess_TypeDefinitionIndex = 637;

	enum class AssemblyBuilderAccess : ::System::Int32
	{
		Run = 1,
		Save = 2,
		RunAndSave = 3,
		ReflectionOnly = 6,
		RunAndCollect = 9,
	};
}
