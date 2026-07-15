#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ApplicationInstallMode_TypeDefinitionIndex = 4025;

	enum class ApplicationInstallMode : ::System::Int32
	{
		Unknown = 0,
		Store = 1,
		DeveloperBuild = 2,
		Adhoc = 3,
		Enterprise = 4,
		Editor = 5,
	};
}
