#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ApplicationSandboxType_TypeDefinitionIndex = 4021;

	enum class ApplicationSandboxType : ::System::Int32
	{
		Unknown = 0,
		NotSandboxed = 1,
		Sandboxed = 2,
		SandboxBroken = 3,
	};
}
