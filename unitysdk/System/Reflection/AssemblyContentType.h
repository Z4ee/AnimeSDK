#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyContentType_TypeDefinitionIndex = 554;

	enum class AssemblyContentType : ::System::Int32
	{
		Default = 0,
		WindowsRuntime = 1,
	};
}
