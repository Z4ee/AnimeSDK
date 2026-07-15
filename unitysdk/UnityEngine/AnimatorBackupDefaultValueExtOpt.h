#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorBackupDefaultValueExtOpt_TypeDefinitionIndex = 5132;

	enum class AnimatorBackupDefaultValueExtOpt : ::System::Int32
	{
		None = 0,
		Save = 1,
		Load = 2,
		SaveNoTransform = 3,
		LoadNoTransform = 4,
	};
}
